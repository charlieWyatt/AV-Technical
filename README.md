# AV Technical

An important software engineering skill to have is to be able to fix and resolve bugs within a code base. The common AV NMP task tests your ability to read and debug C++ compile time errors as well as resolve some runtime errors too. Attached to this project is a broken code base. It's your task to fix each of the bugs in it.

# Problems

Currently the CMakeLists.txt is practically empty. It is your task to add the necessary dependencies to file so that you are able to build an executable that compiles main.cpp. Below I have outlined some of the questions in the code base.

- Question 1
	> Include google tests into the project. You might need to install it if you don't have it already
- Question 2 , 4, 8, 9, 10, 11
	> Fix any syntax errors or invalid parameters
- Question 3
	> Fix the input for function()
- Question 6
	>  Template static assert uses invalid function names
- Question 7
	> This question has 2 parts. At the end of the 5 threads running the value should be 5000 but its is not. You need to fix the race condition. The second part is to move the "testerFunction()" as a google test using the correct google tests ASSERTS

Fork the repo and submit a link to your forked repository on submission. Let the AV team know if there are any problems. Best of luck.

# Some useful resources

https://www.learncpp.com/

https://en.cppreference.com/w/cpp/language

Intro to git: https://opensource.com/article/18/1/step-step-guide-git

Introduction to CMake: https://cliutils.gitlab.io/modern-cmake/ (there is a section on Googletests as well)
