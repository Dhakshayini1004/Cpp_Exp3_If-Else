# C++ Experiment 3: To Study and Implement C++ Decision-Making Statements

## Aim

To:
1. Understand the working and structure of conditional decision-making statements in C++.
2. Use relational and logical operators to define branching conditions based on user input.

---

## Tool Used

- Visual Studio Code (VS Code)

---

## Objectives

- To implement `if`, `if-else`, and `else` blocks for basic conditional branching.
- To evaluate expressions using relational operators (`<`, `>`, `<=`, `>=`, `==`, `!=`) for decision boundaries.
- To apply logical operators (`&&`, `||`) for compound conditions.
- To classify:
  - Whether a number is positive or negative.
  - Student’s grade based on percentage.
  - The quadrant of a point in 2D coordinate geometry.

---

## Theory

### Why Do We Use Decision-Making Statements?

- Programs often need to **make decisions** based on input data.
- Conditional statements allow **different parts of code to execute** depending on whether a condition is true or false.
- Helps in writing **adaptive, interactive, and intelligent programs**.
- Forms the **foundation for more advanced control structures** like loops, switch-case, and functions.

---

### Types of Decision-Making Statements

#### 1. If Statement
- The simplest form of decision making.
- Executes a block of code **only if a condition is true**.

```
if(condition) {
    // Executes only when condition is true
}
```
--- 

#### 2. If-Else Statement
- Provides an **alternative path** of execution when the condition is false.

```
if(condition) {
    // Executes if condition is true
}
else {
    // Executes if condition is false
}
```
--- 

#### 3. Nested If-Else
- One `if` or `else` block contains **another conditional block**.
- Useful when there are **multiple levels of conditions**.

```
if(condition1) {
    if(condition2) {
        // Executes if both condition1 and condition2 are true
    }
    else {
        // Executes if condition1 is true but condition2 is false
    }
}
```

---

### Relational Operators

| Operator | Meaning              | Example     |
|----------|----------------------|-------------|
| `==`     | Equal to             | `a == b`    |
| `!=`     | Not equal to         | `a != b`    |
| `>`      | Greater than         | `a > b`     |
| `<`      | Less than            | `a < b`     |
| `>=`     | Greater than or equal| `a >= b`    |
| `<=`     | Less than or equal   | `a <= b`    |

---

### Logical Operators

| Operator | Meaning                       | Example             |
|----------|-------------------------------|---------------------|
| `&&`     | Logical AND (both true)       | `a > 0 && b > 0`    |
| `||`     | Logical OR (at least one true)| `a > 0 || b > 0`    |
| `!`      | Logical NOT (negation)        | `!(a > 0)`          |


---

## Program Description

### Structure and Execution

- **Input Handling:** User is prompted to input variables using `cin`.
- **Variable Initialization:** Integer and float variables are defined for holding marks, coordinates, and percentages.
- **Condition Evaluation:** Each scenario uses appropriate logical and relational operators to compare inputs and decide the result.
- **Output Display:** Results are printed based on condition checks.

---

### Applications Covered in Program

#### 1. Check if a Number is Positive or Negative

- A basic condition to check the **sign of a number**.
- Demonstrates how `if` can be used without `else`.

```cpp
if (x > 0) {
    cout << "x is positive";
}
if (x < 0) {
    cout << "x is negative";
}
```
--- 

#### 2. Grading System Based on Percentage

- Uses `if-else if` ladder to categorize student performance.
- Multiple conditions are checked using **relational operators**.
- Percentage is calculated from five subjects.

```cpp
percentage = (chem + math + phy + c_prog + pyth) / 5;
if (percentage >= 90) {
    cout << "You have O grade";
}
else if (percentage >= 80) {
    cout << "You have A+ grade";
}
// continues with other grades
```
--- 

#### 3. Find Quadrant of a 2D Coordinate

- Uses nested `if-else` to determine the position of a point `(x, y)` in the coordinate plane.
- Takes into account origin and axes as special cases.

```cpp
if (x == 0 && y == 0) {
    cout << "It is Origin";
}
else if (x > 0 && y > 0) {
    cout << "1st Quadrant";
}
else if (x < 0 && y > 0) {
    cout << "2nd Quadrant";
}
// and so on
```

---

## Concepts Used

- If-Else statements and decision structures
- Nesting of conditionals
- Relational operators for numerical comparisons
- Logical operators for compound conditions

---

## Sample Output

#### Positive or Negative Number
```
The variable x is 44
The variable y is -55
x is positive
y is negative
```

#### Grading System
```
Enter your Chemistry marks out of 100: 100
Enter your Mathematics marks out of 100: 99
Enter your Physics marks out of 100: 98
Enter your C-Programming marks out of 100: 97
Enter your Python marks out of 100: 96
You have O grade :98%
```

#### Coordinate System Output
```
Enter x and y coordinates: 0 0
It is Origin
```
```
Enter x and y coordinates: -3 -3
3rd Quadrant
```
