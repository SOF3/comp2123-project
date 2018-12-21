report.pdf: report.tex clean
	true | pdflatex $<
	true | pdflatex $<
clean:
	rm *.out *.aux *.log *.toc 2>/dev/null || true
