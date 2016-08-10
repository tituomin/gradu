(require 'package)
(package-initialize)
(require 'org)
(require 'org-install)

(setq old-version (if (require 'ox-latex nil t) nil t))
(message (if old-version "Using old version." "Using new version."))

(when old-version
  (progn
    (require 'org-special-blocks)
    (require 'org-latex)
    (require 'org-export-latex)))

;(setq org-src-preserve-indentation t)

(unless (boundp 'org-export-latex-classes)
  (setq org-export-latex-classes nil))
(setq org-latex-listings t)
(setq org-latex-listings-options
      '(("basicstyle" "\\scriptsize\\ttfamily")
        ("aboveskip" "1em")
;       ("numbers" "left")
        ;; ("frame" "l")
        ;; ("framesep" "0pt")
        ("xleftmargin" "1.5em")
        ("framexleftmargin" "1em")
        ;; ("framerule" "0.5em")
        ;; ("rulecolor" "\\color\{lightgray\}")
        ("escapeinside" "{(*@}{@*)}")
        ("numberstyle" "\\tiny\\color\{red\}")))

;; active Org-babel languages
(org-babel-do-load-languages
 'org-babel-load-languages
 '(;; other Babel languages
   (plantuml . t)))

(setq org-plantuml-jar-path
      (expand-file-name "~/plantuml.jar"))

(add-to-list 'org-babel-default-header-args:plantuml
             '(:java . "-splash:no"))

(setq latex-classes-list
      (if old-version
          'org-export-latex-classes
        'org-latex-classes))

(setq latex-encoding-alist
      (if old-version
          'org-export-latex-inputenc-alist
        'org-latex-inputenc-alist))

(add-to-list
 latex-classes-list
 `("gradu"
"\\documentclass[finnish]{tktltiki}
\\usepackage[finnish]{babel}
\\usepackage{chngcntr}
\\usepackage{xcolor}
\\usepackage{caption}
\\usepackage{pifont}
\\usepackage{listings}
\\usepackage{tablefont}
\\usepackage{dirtree}
\\counterwithin{figure}{section}
\\counterwithin{table}{section}
\\usepackage{url,etoolbox}
\\usepackage{graphicx}
\\usepackage{tikz}
\\usepackage[pdftex, pdfborderstyle={/S/U/W 0}]{hyperref} % this disables the boxes around links
\\graphicspath{{./figures/}}
\\usepackage{epstopdf}
\\usepackage[figuresleft]{rotating}
\\appto\\UrlSpecials{%
  \\do\\F{\\penalty0 \\mathchar`\\F }%
  \\do\\L{\\penalty0 \\mathchar`\\L }%
  \\do\\N{\\penalty0 \\mathchar`\\N }%
  \\do\\T{\\penalty0 \\mathchar`\\T }%
  \\do\\R{\\penalty0 \\mathchar`\\R }%
  \\do\\J{\\penalty0 \\mathchar`\\J }%
  \\do\\2{\\penalty0 \\mathchar`\\2 }%
  \\do\\C{\\penalty0 \\mathchar`\\C }%
  \\do\\B{\\penalty0 \\mathchar`\\B }%
}
\\level{Pro gradu -tutkielma}"
("\\section{%s}" . "\\section*{%s}")
("\\subsection{%s}" . "\\subsection*{%s}")
("\\subsubsection{%s}" . "\\subsubsection*{%s}")))

(defun org-export-latex-no-toc (depth)
    (when depth
      (format "%% Org-mode is exporting headings to %s levels.\n"
              depth)))

(setq org-confirm-babel-evaluate nil)
(setq org-export-babel-evaluate (not (getenv "SKIP_BABEL_EVALUATE"))) ; Change to true to get images
(setq org-export-latex-format-toc-function 'org-export-latex-no-toc)
;(setq org-export-with-sub-superscripts nil)
(setq org-use-sub-superscripts "{}")

(setq org-latex-prefer-user-labels t)

(add-to-list latex-encoding-alist '("utf8" . "latin9"))

(prefer-coding-system 'utf-8)

(setq filename-to-process (elt argv 0))
(setq output-filename (elt argv 1))
(message "Processing file %s." filename-to-process)
(message "Will output to %s." output-filename)

(find-file filename-to-process nil)

(if old-version
    (org-export-as-latex 3 nil nil nil "~/gradu/paper/gen")
  (org-export-to-file 'latex output-filename
    nil nil nil nil '(:base-directory "~/gradu/paper/src")))


