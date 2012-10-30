
(require 'org)
(require 'org-install)
;(require 'org-exp)
(require 'org-special-blocks)
(require 'org-latex)
(unless (boundp 'org-export-latex-classes)
  (setq org-export-latex-classes nil))

(add-to-list
 'org-export-latex-classes
 `("gradu"
"\\documentclass[finnish]{tktltiki}
\\usepackage[finnish]{babel}
\\level{Pro gradu -tutkielma}"
("\\section{%s}" . "\\section*{%s}")
("\\subsection{%s}" . "\\subsection*{%s}")
("\\subsubsection{%s}" . "\\subsubsection*{%s}")))

(defun org-export-latex-no-toc (depth)
    (when depth
      (format "%% Org-mode is exporting headings to %s levels.\n"
              depth)))

(setq org-export-latex-format-toc-function 'org-export-latex-no-toc)

(prefer-coding-system 'iso-latin-9)
(prefer-coding-system 'utf-8)
(find-file "src/main.org" nil)
(org-export-as-latex 3 nil nil nil nil "~/gradu/paper/gen")
