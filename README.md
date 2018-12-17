Main report file in report.tex, common commands in commands.tex

Each section has its own .tex file

Run `make` to generate report.pdf, or use `docker run -v=$(pwd):/input -v=$(pwd)/output:/output chankyin/texdock /pdf.sh report.tex` to run from docker.

PDF is automatically created on Travis-CI pushed to the `travis` branch. Check out report.pdf at https://github.com/chankyin/comp2123-project/blob/travis/report.pdf
