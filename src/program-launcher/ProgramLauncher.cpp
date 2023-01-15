#include "ProgramLauncher.h"

TestsStack& ProgramLauncher::fillStackByReadingDataFromStream(istream& input) {
    auto* testsStack = new TestsStack();

    string sizeInput;
    input >> sizeInput;

    int size = stoi(sizeInput);

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
