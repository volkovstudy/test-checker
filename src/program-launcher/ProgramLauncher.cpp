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

        string student = testsStack.getByIndex(stackIndex);

        result.push_back(student);
    }

    return result;
}

int readIntFromStream(istream& input) {
    string value;
    input >> value;

    return stoi(value);
}
