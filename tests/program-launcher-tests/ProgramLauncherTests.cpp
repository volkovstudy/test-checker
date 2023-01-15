#include <sstream>
#include <iostream>
#include "ProgramLauncherTests.h"

stringstream& getInputWithTopStudents(const vector<string>& students);

void ProgramLauncherTests::testFillingStack() {
    clog << "Running test: filling stack from input" << endl;

    stringstream& input = getInputWithTopStudents({"Alex", "Bob", "Steve"});

    // Should be {"Alex", "Bob", "Steve"}
    TestsStack testsStack = ProgramLauncher::fillStackByReadingDataFromStream(input);

    assert(testsStack.getIndexOf("Alex") == 0);
    assert(testsStack.getIndexOf("Bob") == 1);
    assert(testsStack.getIndexOf("Steve") == 2);

    clog << "Test passed: filling stack from input" << endl;
}

stringstream& getInputWithTopStudents(const vector<string>& students) {
    auto* input = new stringstream();

    *input << students.size() << endl;

    for (const auto& student: students) {
        *input << student << " " << "top" << endl;
    }

    return *input;
}
