#include "TestsStackTests.h"

void TestsStackTests::testPushingTop() {
    TestsStack testsStack;

    testsStack.pushTop("Bob");
    testsStack.pushTop("Alex");

    assert(testsStack.getIndexOf("Bob") == 0);
    assert(testsStack.getIndexOf("Alex") == 1);
}
