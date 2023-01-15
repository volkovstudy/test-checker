cmake_minimum_required(VERSION 3.24)
project(test-checker)

set(CMAKE_CXX_STANDARD 17)

add_executable(test-checker
        src/main.cpp
        src/tests-stack/TestsStack.h src/tests-stack/TestsStack.cpp
        src/program-launcher/ProgramLauncher.h src/program-launcher/ProgramLauncher.cpp
)

### TESTING ###
enable_testing()

add_executable(test-executable
        tests/main.cpp
        tests/test-runner/TestRunner.cpp tests/test-runner/TestRunner.h
        tests/tests-stack-tests/TestsStackTests.h tests/tests-stack-tests/TestsStackTests.cpp
        tests/program-launcher-tests/ProgramLauncherTests.cpp tests/program-launcher-tests/ProgramLauncherTests.h

        src/tests-stack/TestsStack.h src/tests-stack/TestsStack.cpp
        src/program-launcher/ProgramLauncher.h src/program-launcher/ProgramLauncher.cpp
)

add_test(program-test test-executable)
