#include <iostream>
#include "TestsStackTests.h"

void TestsStackTests::testPushingTop() {
    clog << "Running test: testing pushing top" << endl;

    TestsStack testsStack;

    testsStack.pushTop("Bob");
    testsStack.pushTop("Alex");

    assert(testsStack.getIndexOf("Bob") == 0);
    assert(testsStack.getIndexOf("Alex") == 1);

    clog << "Test passed: testing pushing top" << endl;
}
