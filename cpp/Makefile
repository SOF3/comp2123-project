.PHONY: test
test: fooBar
	echo $^ | ./run.sh
fooBar: fooBar.test.cpp fooBar.cpp main.cpp assert.h ; g++ $< -o $@ -include main.cpp -DTEST_FN=testFooBar
sciNot1: sciNot1.test.cpp sciNot1.cpp main.cpp assert.h ; g++ $< -o $@ -include main.cpp -DTEST_FN=testSciNot
