#include <iostream>
#include "TestsStackTests.h"

void TestsStackTests::testPushingTop() {
    clog << "Running test: testing pushing top" << endl;

    TestsStack testsStack;

    testsStack.pushTop("Bob");
    testsStack.pushTop("Alex");

    // Should be {"Bob", "Alex"}

    assert(testsStack.getIndexOf("Bob") == 0);
    assert(testsStack.getIndexOf("Alex") == 1);

    clog << "Test passed: testing pushing top" << endl;
}

void TestsStackTests::testPushingBottom() {
    clog << "Running test: testing pushing bottom" << endl;

    TestsStack testsStack;

    testsStack.pushBottom("Bob");
    testsStack.pushBottom("Alex");

    // Should be {"Alex", "Bob"}

    assert(testsStack.getIndexOf("Bob") == 1);
    assert(testsStack.getIndexOf("Alex") == 0);

    clog << "Test passed: testing pushing bottom" << endl;
}

void TestsStackTests::testGettingByIndex() {
    clog << "Running test: getting by index" << endl;

    TestsStack testsStack;

    testsStack.pushTop("Bob");
    testsStack.pushTop("Alex");

    // Should be {"Bob", "Alex"} => "Bob" = 0, "Alex" = 1

    assert(testsStack.getByIndex(0) == "Bob");
    assert(testsStack.getByIndex(1) == "Alex");

    clog << "Test passed: getting by index" << endl;
}
