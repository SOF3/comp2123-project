.PHONY: clean test
report.pdf: report.tex clean test
	true | pdflatex $<
	true | pdflatex $<
clean:
	rm *.out *.aux *.log *.toc 2>/dev/null || true

test: cpp/Makefile
	(cd cpp && make test)
