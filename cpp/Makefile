.PHONY: test
test: run.sh fooBar sciNot1 sciNot2 sciNot3 sciNot4 sciNot5
	echo $^ | tr " " "\n" | ./run.sh

mainFooBar.a: main.cpp ; g++ -c -DTEST_FN=testFooBar $< -o $@
fooBar: fooBar.a mainFooBar.a ; g++ $^ -o $@
fooBar.a: fooBar.test.cpp fooBar.cpp assert.h ; g++ -c $< -o $@ -DTEST

mainSciNot.a: main.cpp ; g++ -c -DTEST_FN=testSciNot $< -o $@
SciNotation.a: SciNotation.cpp SciNotation.h ; g++ -c $< -o $@

sciNot1: sciNot1.a SciNotation.a mainSciNot.a ; g++ $^ -o $@
sciNot1.a: sciNot1.test.cpp sciNot1.cpp SciNotation.h assert.h ; g++ -c $< -o $@

sciNot2: sciNot2.a SciNotation.a mainSciNot.a ; g++ $^ -o $@
sciNot2.a: sciNot2.test.cpp sciNot1.cpp SciNotation.h assert.h ; g++ -c $< -o $@

sciNot3: sciNot3.a SciNotation.a mainSciNot.a ; g++ $^ -o $@
sciNot3.a: sciNot3.test.cpp sciNot3.cpp SciNotation.h assert.h ; g++ -c $< -o $@

sciNot4: sciNot4.a SciNotation.a mainSciNot.a ; g++ $^ -o $@
sciNot4.a: sciNot4.test.cpp sciNot4.cpp SciNotation.h assert.h ; g++ -c $< -o $@

sciNot5: sciNot5.a SciNotation.a mainSciNot.a libs/librapidcheck.a ; g++ $^ -o $@
sciNot5.a: sciNot5.test.cpp sciNot5.cpp SciNotation.h ; g++ -c -Ilibs/rapidcheck/include $< -o $@

libs/librapidcheck.a: libs/rapidcheck/Makefile
	cd libs/rapidcheck && make && mv librapidcheck.a ../librapidcheck.a
libs/rapidcheck/Makefile:
	cd libs/rapidcheck && cmake .
