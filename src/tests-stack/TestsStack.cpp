#include <stdexcept>
#include "TestsStack.h"

void TestsStack::pushTop(const string& student) {
    _stack.push_back(student);
}

void TestsStack::pushBottom(const string& student) {
    _stack.insert(_stack.begin(), student);
}

int TestsStack::getIndexOf(const string& student) {
    for (int i = 0; i < _stack.size(); ++i) {
        auto& element = _stack.at(i);

        if (element == student) {
            return i;
        }
    }

    throw invalid_argument("Didn't find student in the stack");
}

string TestsStack::getByIndex(int index) {
    return _stack.at(index);
}
