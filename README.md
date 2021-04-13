# Lab 7

## Task: Algebraic Structures

The goal of this exercise is to implement a [ring](https://en.wikipedia.org/wiki/Ring_%28mathematics%29) algebraic structure for integer numbers. A **ring** is a set **R** equipped with two binary operations `+` (addition) and `⋅` (multiplication) satisfying some axioms. We will focus on the addition operation and its properties associativity, commutativity and existence of an identity element.

You will implement a ring structure for integer numbers by creating a `Real` class (derived from the given `Ring` class) and [override](https://www.programiz.com/cpp-programming/function-overriding) the base class methods to give a concrete implementation related to the `Real` class.

### Details

- Create a constructor for `Real` class that initializes the field `x`.
    - If a parameter is not provided to the constructor initialize the field with default value `0.0`.
- Override methods of the base class `Ring` in the derived class `Real`.
    - **Hint 1**: Use base class signatures in the derived class to create proper override method definitions
    - **Hint 2**: If you need to cast between types use [static_cast](https://docs.microsoft.com/en-us/cpp/cpp/static-cast-operator?view=msvc-160) operator.
    - **Hint 3**: If you created an object with `new` operator, do not forget to deallocate memory (`delete` operator) after you finish to use this object.
- Your code have to be compiled without errors and the test driver must be executed without error.

## Test

Press **Run** button to execute and test your program.

- Or run `make test` command in the command line to verify the correctness of your program.

## Submission

- Commit & push all changes that to the corresponding assignment repository on GitHub, using the **Repl.it** interface - **Version control** tab.
  - Make sure that you committed changes to following files:
    - `main.cpp`
- Submit the link of the assignment GitHub repository in the corresponding assignment submission the Blackboard.
  - Open corresponding assignment on the Blackboard
  - In **Assignment Submission** section, press **Write Submission** button
  - Paste your assignment repository link in the **Text Submission** box
  - Submit the assignment

### Before You Submit

You are required to test that your submission works properly before submission. Make sure that your program compiles without errors. Once you have verified that the submission is correct, you can submit your work.

### Coding Style

In any programming project, matching the existing coding style is important. Having different coding styles intermixed leads to confusion and bugs. Students are required to follow the particular existing coding style that maintains the indentation style in `.cpp` and `.h` files using spaces, not tabs.

In particular, pay close attention to function declarations and how the function name begins the line after the function return type. For helper functions which are limited in scope to a specific file, you must declare the function as `static` in the same file in which it is used.

*Indentation*: The indentation style for your work have to be 4 spaces. Many students are taught to use tabs for indentation, which can make code very hard to read, especially when there are several levels of indentation.

For additional information of C++ coding style see [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).

