cmake_minimum_required(VERSION 3.24)
project(test-checker)

set(CMAKE_CXX_STANDARD 17)

add_executable(test-checker
        src/main.cpp
        src/tests-queue/TestsStack.h src/tests-queue/TestsStack.cpp
)

### TESTING ###
enable_testing()

add_executable(test-executable
        tests/main.cpp
        tests/test-runner/TestRunner.cpp tests/test-runner/TestRunner.h
        tests/tests-stack-tests/TestsStackTests.h tests/tests-stack-tests/TestsStackTests.cpp

        src/tests-queue/TestsStack.h src/tests-queue/TestsStack.cpp
)
