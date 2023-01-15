#include <iostream>
#include "TestRunner.h"

#include "../tests-stack-tests/TestsStackTests.h"
#include "../program-launcher-tests/ProgramLauncherTests.h"

void testTestsStack();
void testProgramLauncher();

void TestRunner::runAllTests() {
    testTestsStack();

    clog << endl;

    testProgramLauncher();
}

void testTestsStack() {
    TestsStackTests::testPushingTop();

    clog << endl;

    TestsStackTests::testPushingBottom();

    clog << endl;

    TestsStackTests::testGettingByIndex();
}

void testProgramLauncher() {
    ProgramLauncherTests::testFillingStack();

    clog << endl;

    ProgramLauncherTests::testFindingStudents();

    clog << endl;

    ProgramLauncherTests::testRunningProgram();
}
