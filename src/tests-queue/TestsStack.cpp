#include "TestsStack.h"

void TestsStack::pushTop(const string& student) {
    _stack.push_back(student);
}

void TestsStack::pushBottom(const string& student) {
    _stack.insert(_stack.begin(), student);
}
