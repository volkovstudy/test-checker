#include <iostream>
#include "TestRunner.h"

#include "../tests-stack-tests/TestsStackTests.h"

void testTestsStack();

void TestRunner::runAllTests() {
    testTestsStack();
}

void testTestsStack() {
    TestsStackTests::testPushingTop();

    clog << endl;

    TestsStackTests::testPushingBottom();
}
