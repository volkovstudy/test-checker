#ifndef TEST_CHECKER_PROGRAMLAUNCHER_H
#define TEST_CHECKER_PROGRAMLAUNCHER_H


#include "../tests-stack/TestsStack.h"

class ProgramLauncher {
public:
    static TestsStack& fillStackByReadingDataFromStream(istream& input, int size);
};


#endif
