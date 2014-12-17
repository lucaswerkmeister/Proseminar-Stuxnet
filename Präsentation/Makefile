LATEX = pdflatex -interaction nonstopmode -file-line-error
RM = rm -f

all: slides.pdf

.PHONY: all clean clean-slides clean-slides-build

clean: clean-slides

slides.pdf: slides.tex
	$(MAKE) clean-$(@:.pdf=) # if the pdftex build fails fatally, we don’t want the old pdf laying around and confusing the user
	-$(LATEX) $< 2>&1 > /dev/null # initial build
#	-makeglossaries $(@:.pdf=) # initial glossary
#	-$(LATEX) $< 2>&1 > /dev/null # include glossary in document
#	-makeglossaries $(@:.pdf=) # include glossary cross-refs in glossary
	-$(LATEX) $< # add glossary to TOC
	sed -i -e 's \\# # g' -e 's LF \n g' slides.pdfpc

clean-slides: clean-slides-build
	-$(RM) slides.pdf
	-$(RM) slides.pdfpc

clean-slides-build:
	-$(RM) slides.aux slides.glg slides.glo slides.gls slides.ist slides.log slides.out slides.toc
