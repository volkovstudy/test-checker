#include "ProgramLauncher.h"

TestsStack& ProgramLauncher::fillStackByReadingDataFromStream(istream& input, int size) {
    auto* testsStack = new TestsStack();

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
