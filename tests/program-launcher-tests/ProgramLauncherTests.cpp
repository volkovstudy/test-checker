#include <sstream>
#include <iostream>
#include "ProgramLauncherTests.h"

stringstream& getInputWithTopStudents(const vector<string>& students);
stringstream& getInputWithFindingStudents(const vector<int>& studentIndexes);
TestsStack& givenStackWithTopStudents(const vector<string>& students);

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

void ProgramLauncherTests::testFindingStudents() {
    clog << "Running test: finding students by input data" << endl;

    TestsStack testsStack = givenStackWithTopStudents({"Alex", "Bob", "Steve"});
    stringstream& input = getInputWithFindingStudents({1, 2});

    vector<string> result = ProgramLauncher::findStudentsTestsInStack(input, testsStack);

    assert(result.size() == 2);
    assert(result.at(0) == "Bob");
    assert(result.at(1) == "Steve");

    clog << "Test passed: finding students by input data" << endl;
}

void ProgramLauncherTests::testRunningProgram() {
    clog << "Running test: running program" << endl;

    stringstream& studentsInput = getInputWithTopStudents({"Alex", "Bob", "Steve"});
    stringstream& findingInput = getInputWithFindingStudents({1, 2});

    stringstream input;
    input << studentsInput.str() << findingInput.str();

    stringstream output;

    ProgramLauncher::run(input, output);

    assert(output.str() == "Steve\nBob\n");

    clog << "Test passed: running program" << endl;
}

stringstream& getInputWithTopStudents(const vector<string>& students) {
    auto* input = new stringstream();

    *input << students.size() << endl;

    for (const auto& student: students) {
        *input << student << " " << "top" << endl;
    }

    return *input;
}

stringstream& getInputWithFindingStudents(const vector<int>& studentIndexes) {
    auto* input = new stringstream();

    *input << studentIndexes.size() << endl;

    for (int index: studentIndexes) {
        *input << index << endl;
    }

    return *input;
}

TestsStack& givenStackWithTopStudents(const vector<string>& students) {
    auto* testsStack = new TestsStack();

    for (const auto& student: students) {
        testsStack->pushTop(student);
    }

    return *testsStack;
}
