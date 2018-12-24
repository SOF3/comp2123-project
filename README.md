# comp2123-project

This repository contains the source code for the COMP2123 selt learning project by @jevrii and me.

The main report is in report.tex, with a .tex file for each section.

Run `make` to generate report.pdf, or use `docker run -v=$(pwd):/input -v=$(pwd)/output:/output chankyin/texdock /input/travis.sh` to run from docker.

PDF is automatically created on Travis-CI pushed to the `travis` branch. Check out report.pdf at https://github.com/chankyin/comp2123-project/blob/travis/report.pdf

Remember to clone the repo recursively, or `git submodule update --init --recursive`.
