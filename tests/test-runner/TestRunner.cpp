#include "TestRunner.h"

#include "../tests-stack-tests/TestsStackTests.h"

void testTestsStack();

void TestRunner::runAllTests() {
}

void testTestsStack() {
    TestsStackTests::testPushingTop();
}
