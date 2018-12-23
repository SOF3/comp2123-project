.PHONY: test
test: run.sh fooBar sciNot1 sciNot2 sciNot3 sciNot4 sciNot5
	echo $^ | tr " " "\n" | ./run.sh
fooBar: fooBar.test.cpp fooBar.cpp main.cpp assert.h ; g++ $< -o $@ -DTEST_FN=testFooBar
sciNot1: sciNot1.test.cpp sciNot1.cpp SciNotation.h main.cpp assert.h ; g++ -include main.cpp -DTEST_FN=testSciNot $< -o $@
sciNot2: sciNot2.test.cpp sciNot1.cpp SciNotation.h main.cpp assert.h ; g++ -include main.cpp -DTEST_FN=testSciNot $< -o $@
sciNot3: sciNot3.test.cpp sciNot3.cpp SciNotation.h main.cpp assert.h ; g++ -include main.cpp -DTEST_FN=testSciNot $< -o $@
sciNot4: sciNot4.test.cpp sciNot4.cpp SciNotation.h main.cpp assert.h ; g++ -include main.cpp -DTEST_FN=testSciNot $< -o $@
sciNot5: sciNot5.a libs/librapidcheck.a ; g++ $^ -o $@
sciNot5.a: sciNot5.test.cpp sciNot5.cpp SciNotation.h main.cpp ; g++ -c -include main.cpp -DTEST_FN=testSciNot -Ilibs/rapidcheck/include $< -o $@

libs/librapidcheck.a: libs/rapidcheck/Makefile
	cd libs/rapidcheck && make && mv librapidcheck.a ../librapidcheck.a
libs/rapidcheck/Makefile:
	cd libs/rapidcheck && cmake .
