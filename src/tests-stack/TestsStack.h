#ifndef TEST_CHECKER_TESTSSTACK_H
#define TEST_CHECKER_TESTSSTACK_H

#include <string>
#include <vector>

using namespace std;

class TestsStack {
public:
    void pushTop(const string& student);
    void pushBottom(const string& student);

    int getIndexOf(const string& student);
    string getByIndex(int index);
private:
    vector<string> _stack;
};


#endif
