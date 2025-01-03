# Incorrect Use of delete Operator

This repository demonstrates a common C++ error: attempting to use the `delete` operator on a stack-allocated variable. The `delete` operator is used to release memory allocated dynamically using `new`. Using it on a stack variable leads to undefined behavior, potentially causing crashes or memory corruption. The solution shows the correct way to handle this, which is to avoid using `delete` on stack variables.

## Bug
The `bug.cpp` file contains the erroneous code.  The integer `x` is allocated on the stack, not the heap, and should not be deleted.  Compiling and running this might seem to work sometimes but is not guaranteed to do so and might lead to memory corruption in larger programs.