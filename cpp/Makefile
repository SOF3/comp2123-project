.PHONY: test
test: fooBar sciNot1
	echo $^ | tr " " "\n" | ./run.sh
fooBar: fooBar.test.cpp fooBar.cpp main.cpp assert.h ; g++ $< -o $@ -include main.cpp -DTEST_FN=testFooBar
sciNot1: sciNot1.test.cpp sciNot1.cpp SciNotation.h main.cpp assert.h ; g++ $< -o $@ -include main.cpp -DTEST_FN=testSciNot
