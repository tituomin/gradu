
(require 'org)
(require 'org-install)
;(require 'org-exp)
(require 'org-special-blocks)
(require 'org-latex)
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

(add-to-list
 'org-export-latex-classes
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

(prefer-coding-system 'utf-8)
(find-file "~/gradu/paper/src/main.org" nil)
(org-export-as-latex 3 nil nil nil "~/gradu/paper/gen")
