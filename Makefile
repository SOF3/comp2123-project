report.pdf: report.tex clean
	pdflatex $<
	pdflatex $<
clean:
	rm *.aux *.log *.toc 2>/dev/null || true
