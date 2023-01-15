#ifndef TEST_CHECKER_PROGRAMLAUNCHER_H
#define TEST_CHECKER_PROGRAMLAUNCHER_H


#include "../tests-stack/TestsStack.h"

class ProgramLauncher {
public:
    static void run(istream& input, ostream& output);
    static TestsStack& fillStackByReadingDataFromStream(istream& input);
    static vector<string> findStudentsTestsInStack(istream& input, TestsStack& testsStack);
};


#endif
