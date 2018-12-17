report.pdf: report.tex clean
	pdflatex $<
	pdflatex $<
clean:
	rm report.aux report.log report.toc
