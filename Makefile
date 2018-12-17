report.pdf: report.tex clean
	pdflatex $<
	pdflatex $<
clean:
	rm *.out *.aux *.log *.toc 2>/dev/null || true
