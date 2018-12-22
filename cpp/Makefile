.PHONY: test
test: run.sh fooBar sciNot1 sciNot2 sciNot3 sciNot4
	echo $^ | tr " " "\n" | ./run.sh
fooBar: fooBar.test.cpp fooBar.cpp main.cpp assert.h ; g++ $< -o $@ -include main.cpp -DTEST_FN=testFooBar
sciNot1: sciNot1.test.cpp sciNot1.cpp SciNotation.h main.cpp assert.h ; g++ $< -o $@ -include main.cpp -DTEST_FN=testSciNot
sciNot2: sciNot2.test.cpp sciNot1.cpp SciNotation.h main.cpp assert.h ; g++ $< -o $@ -include main.cpp -DTEST_FN=testSciNot
sciNot3: sciNot3.test.cpp sciNot3.cpp SciNotation.h main.cpp assert.h ; g++ $< -o $@ -include main.cpp -DTEST_FN=testSciNot
sciNot4: sciNot4.test.cpp sciNot4.cpp SciNotation.h main.cpp assert.h sample.h ; g++ $< -o $@ -include main.cpp -DTEST_FN=testSciNot
