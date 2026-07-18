# Week 10 Activity: Polymorphism

## Description

This project demonstrates the two main types of polymorphism in C++:

1. **Compile-time Polymorphism** using **Function Overloading**
2. **Run-time Polymorphism** using **Function Overriding** and **Virtual Functions**

The project consists of two tasks:

- **Task 1:** Payment System (Function Overloading)
- **Task 2:** Shape Drawing System (Function Overriding)

---

## Task 1: Payment System (Compile-time Polymorphism)

## #Description

This program demonstrates **compile-time polymorphism** in C++ using **function overloading**.

A `Payment` class is created with three overloaded `processPayment()` functions that process different payment methods:

- Cash payment
- Card payment
- Mobile payment

Each function calculates and displays the final payment amount based on the parameters provided.

---

## Concepts Used

- Classes and Objects
- Function Overloading
- Compile-time Polymorphism
- Member Functions

---

## Functions

### Cash Payment

```cpp
processPayment(int amount)
```

Calculates the payment amount for cash transactions.
**Final Payment = Amount**

---

### Card Payment

```cpp
processPayment(int amount, double fee)
```

Calculates the payment amount by adding the transaction fee.
**Final Payment = Amount + Transaction Fee**

---

### Mobile Payment

```cpp
processPayment(int amount, double fee, double discount)
```

Calculates the payment amount by adding the transaction fee and subtracting the discount.
**Final Payment = Amount + Fee − Discount**

---

## Expected Output

```text
Cash Payment
Amount Paid: 1000

Card Payment
Amount: 1000
Transaction Fee: 50
Final Payment: 1050

Mobile Payment
Amount: 1000
Transaction Fee: 20
Discount: 30
Final Payment: 990
```

---

## Conclusion

This task demonstrates **compile-time polymorphism** through **function overloading**. The same function name, `processPayment()`, performs different operations depending on the number of arguments passed by the user.

---

## Task 2: Shape Drawing System (Run-time Polymorphism)

## Description

This program demonstrates **run-time polymorphism** in C++ using **function overriding** and **virtual functions**.

A base class named `Shape` contains a virtual function called `draw()`. Three derived classes (`Circle`, `Rectangle`, and `Triangle`) override the `draw()` function to display different messages.

A base class pointer is used to access different derived class objects, demonstrating runtime polymorphism.

---

# Concepts Used

- Classes and Objects
- Inheritance
- Virtual Functions
- Function Overriding
- Run-time Polymorphism
- Pointers

---

## Class Structure

### Base Class

```cpp
class Shape
```

Contains the virtual function:

```cpp
virtual void draw();
```

### Derived Classes

- Circle
- Rectangle
- Triangle

Each derived class overrides the `draw()` function with its own implementation.

---

## Runtime Polymorphism

A base class pointer is declared:

```cpp
Shape *shape;
```

The pointer is then assigned to different derived class objects:

```cpp
shape = &circle;
shape->draw();

shape = &rectangle;
shape->draw();

shape = &triangle;
shape->draw();
```

Although the same pointer and the same function call are used, different outputs are produced because `draw()` is declared as a **virtual function**. The program determines which version of `draw()` to execute at runtime based on the object the pointer references.

---

## Expected Output

```text
Drawing Circle
Drawing Rectangle
Drawing Triangle
```

---

## Conclusion

This task demonstrates **run-time polymorphism** through **function overriding**. A base class pointer references different derived class objects, allowing the appropriate overridden `draw()` function to be executed during program execution.

---

# Overall Conclusion

This project demonstrates both forms of polymorphism in C++:

- **Compile-time polymorphism** is achieved through **function overloading**, where multiple functions share the same name but differ in their parameter lists.
- **Run-time polymorphism** is achieved through **function overriding** using **virtual functions**, allowing a base class pointer to invoke different implementations of the same function depending on the object it references.

Together, these concepts illustrate how polymorphism improves code flexibility, reusability, and maintainability in object-oriented programming.
