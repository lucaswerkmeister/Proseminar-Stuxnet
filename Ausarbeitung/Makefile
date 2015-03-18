LATEX = pdflatex -interaction nonstopmode -file-line-error
BIBTEX = bibtex
RM = rm -f

all: show

.PHONY: all clean clean-document clean-document-build

clean: clean-document

document.pdf: document.tex document.bib
	$(MAKE) clean-$(@:.pdf=) # if the pdftex build fails fatally, we don’t want the old pdf laying around and confusing the user
	-$(LATEX) $< 2>&1 > /dev/null
	$(BIBTEX) $(<:.tex=.aux)
	-$(LATEX) $< 2>&1 > /dev/null
	$(LATEX) $<

show: document.pdf
	evince document.pdf

clean-document: clean-document-build
	-$(RM) document.pdf
	-$(RM) document.pdfpc

clean-document-build:
	-$(RM) document.aux document.glg document.glo document.gls document.ist document.log document.out document.toc
