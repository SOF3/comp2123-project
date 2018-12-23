.PHONY: clean test
report.pdf: report.tex clean test example-deps.png
	true | pdflatex $<
	true | pdflatex $<
example-deps.png: example-deps.dot
	dot -Tpng -o $@ $<
clean:
	rm *.out *.aux *.log *.toc 2>/dev/null || true

test: cpp/Makefile
	(cd cpp && make test)
