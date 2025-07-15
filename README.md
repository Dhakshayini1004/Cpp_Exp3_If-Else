# C++ Experiment 3: To study and implement C++ decision making statements.

## Aim

To:
1. To understand if-else conditional statements.
2. To use relational operators.

---

## Objectives

-

---

## Program Description

### ✅ Part 1: Syntax
- We define a function(user-defined) to differentiate the scope of variables.
- We call the user-defined function `func` on the main function.
- `sizeof` - a compile time operator is used to specify the memory alloted to each variable. 

### ✅ Part 2: Auto
 - The auto storage class is the default storage class for all local variables.
 - Its default value is garbage value.
 - Defining : auto int x;


### ✅ Part 3: Extern 
 - The extern storage class is used to give a reference of a global variable that is visible to ALL the program files. When you use 'extern' the variable cannot be initialized as all it does is point the variable name at a storage location that has been previously defined.
 - Its default value is garbage value.
 - Defining : extern int x;

### ✅ Part 4: Static
 - The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope. Therefore, making local variables static allows them to maintain their values between function calls.
 - Its default value is 0.
 - Defining : static int x;

### ✅ Part 5: Register
 - The register storage class is used to define local variables that should be stored in a register instead of RAM. This means that the variable has a maximum size equal to the register size (usually one word) and can't have the unary '&' operator applied to it (as it does not have a memory location).
 - Its default value is garbage value.
 - Defining : register int x;

---

## Concepts Used

- Storage classes(`auto`,`static`,`register`,`extern`)
- Memory allocated to datatypes(`sizeof`)

---
### 🧪 Sample Output
- Positive or negative number
```
The variable x is 44
The variable y is -55
x is positive
y is negative
```
