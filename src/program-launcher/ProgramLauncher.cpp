#include <iostream>
#include "ProgramLauncher.h"

int readIntFromStream(istream& input);

TestsStack& ProgramLauncher::fillStackByReadingDataFromStream(istream& input) {
    auto* testsStack = new TestsStack();

    int size = readIntFromStream(input);

    for (int i = 0; i < size; ++i) {
        string student;
        input >> student;

        do {
            string position;
            input >> position;

            if (position == "top") {
                testsStack->pushTop(student);
                break;
            } else if (position == "bottom") {
                testsStack->pushBottom(student);
                break;
            }
        } while (true);
    }

    return *testsStack;
}

vector<string> ProgramLauncher::findStudentsTestsInStack(istream& input, TestsStack& testsStack) {
    vector<string> result;
    int m = readIntFromStream(input);

    for (int i = 0; i < m; ++i) {
        int stackIndex = readIntFromStream(input);
        stackIndex -= 1; // Because input isn't programmers (wrong - 0,1,2,3, correct 1,2,3,4)

        string student = testsStack.getByIndex(stackIndex);

        result.push_back(student);
    }

    return result;
}

void ProgramLauncher::run(istream& input, ostream& output) {
    TestsStack testsStack = ProgramLauncher::fillStackByReadingDataFromStream(input);

    vector<string> students = ProgramLauncher::findStudentsTestsInStack(input, testsStack);

    // Reverse because of checking tests is starting from top of stack
    for (int i = (int) students.size() - 1; i >= 0; --i) {
        string student = students.at(i);

        output << student << endl;
    }
}

int readIntFromStream(istream& input) {
    string value;
    input >> value;

    return stoi(value);
}
