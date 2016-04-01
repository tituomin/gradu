
(require 'org)
(require 'org-install)

(setq old-version (if (require 'ox-latex nil t) nil t))
(message (if old-version "Using old version." "Using new version."))

(when old-version
  (progn
    (require 'org-special-blocks)
    (require 'org-latex)
    (require 'org-export-latex)))

(unless (boundp 'org-export-latex-classes)
  (setq org-export-latex-classes nil))
(setq org-export-latex-listings t)
(setq org-export-latex-listings-options
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
\\usepackage{pifont}
\\usepackage{epstopdf}
\\usepackage{listings}
\\usepackage{tablefont}
\\counterwithin{figure}{section}
\\counterwithin{table}{section}
\\usepackage{url,etoolbox}
\\appto\\UrlSpecials{%
  \\do\\F{\\penalty0 \\mathchar`\\F }%
  \\do\\L{\\penalty0 \\mathchar`\\L }%
  \\do\\N{\\penalty0 \\mathchar`\\N }%
  \\do\\T{\\penalty0 \\mathchar`\\T }%
  \\do\\R{\\penalty0 \\mathchar`\\R }%
}
\\level{Pro gradu -tutkielmasuunnitelma}"
("\\section{%s}" . "\\section*{%s}")
("\\subsection{%s}" . "\\subsection*{%s}")
("\\subsubsection{%s}" . "\\subsubsection*{%s}")))

(defun org-export-latex-no-toc (depth)
    (when depth
      (format "%% Org-mode is exporting headings to %s levels.\n"
              depth)))

(setq org-confirm-babel-evaluate nil)
(setq org-export-latex-format-toc-function 'org-export-latex-no-toc)
(setq org-export-with-sub-superscripts nil)

(add-to-list latex-encoding-alist '("utf8" . "latin9"))

(prefer-coding-system 'utf-8)
(find-file "~/gradu/paper/src/main.org" nil)

(if old-version
    (org-latex-export-as-latex 3 nil nil nil)
  (org-export-to-file 'latex "~/gradu/paper/gen/main.tex"
    nil nil nil nil '(:base-directory "~/gradu/paper/src")))


