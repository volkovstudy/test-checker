#ifndef TEST_CHECKER_TESTSSTACK_H
#define TEST_CHECKER_TESTSSTACK_H

#include <string>
#include <vector>

using namespace std;

class TestsStack {
public:
    void pushTop(string student);
    void pushBottom(string student);

private:
    vector<string> _stack;
};


#endif
