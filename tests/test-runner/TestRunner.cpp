#include <iostream>
#include "TestRunner.h"

#include "../tests-stack-tests/TestsStackTests.h"
#include "../program-launcher-tests/ProgramLauncherTests.h"

void testTestsStack();
void testProgramLauncher();

void TestRunner::runAllTests() {
    testTestsStack();
}

void testTestsStack() {
    TestsStackTests::testPushingTop();

    clog << endl;

    TestsStackTests::testPushingBottom();
}

void testProgramLauncher() {
    ProgramLauncherTests::testFillingStack();
}
