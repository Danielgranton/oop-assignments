# Week 11 Activity: Encapsulation

## Description

This project demonstrates the concept of **Encapsulation** in C++ by implementing two systems that protect sensitive data using private data members and public member functions.

The project consists of:

- **Task 1:** Employee Data Protection System
- **Task 2:** Student Fee Security System

Encapsulation ensures that important data cannot be accessed or modified directly from outside the class, improving security and data integrity.

---

# Task 1: Employee Data Protection System

## Description

This program demonstrates encapsulation by protecting employee information using private data members.

The `Employee` class stores:

- Employee Name
- Employee ID
- Basic Salary

The class provides public member functions to:

- Input employee details
- Calculate the net salary
- Display employee information

The net salary is calculated using:

```
Net Salary = Basic Salary + (10% × Basic Salary)
```

---

## Concepts Used

- Classes and Objects
- Encapsulation
- Private Data Members
- Public Member Functions
- Member Functions

---

## Class Members

### Private Data Members

```cpp
string employeeName;
int employeeID;
double basicSalary;
```

### Public Member Functions

```cpp
setEmployeeDetails()
calculateSalary()
displayEmployeeDetails()
```

---

## Expected Output

```
Enter Employee Name: John Doe
Enter Employee ID: 101
Enter Basic Salary: 50000

===== Employee Details =====
Employee Name: John Doe
Employee ID: 101
Basic Salary: 50000
Net Salary: 55000
```

---

## Conclusion

This program demonstrates encapsulation by keeping employee information private and allowing access only through public member functions.

---

# Task 2: Student Fee Security System

## Description

This program demonstrates encapsulation by protecting student fee information.

The `Student` class stores:

- Student Name
- Admission Number
- Fee Balance

The fee balance cannot be accessed or modified directly because it is declared as a private data member.

Public member functions allow users to:

- Input student information
- Make fee payments
- Display the remaining fee balance

---

## Concepts Used

- Classes and Objects
- Encapsulation
- Private Data Members
- Public Member Functions
- Data Security

---

## Class Members

### Private Data Members

```cpp
string studentName;
string admissionNumber;
double feeBalance;
```

### Public Member Functions

```cpp
inputStudentData()
makePayment()
displayStatus()
```

---

## Expected Output

```
Enter Student Name: Jane Smith
Enter Admission Number: ADM12345
Enter Fee Balance: 30000
Enter Payment Amount: 10000

===== Student Fee Status =====
Student Name: Jane Smith
Admission Number: ADM12345
Remaining Fee Balance: 20000
```

---

## Conclusion

This program demonstrates encapsulation by protecting the student's fee balance from direct access. All modifications are performed through public member functions, ensuring secure and controlled access to the data.

---

# Overall Conclusion

This project demonstrates the importance of **Encapsulation** in Object-Oriented Programming.

- Sensitive information is declared as **private**.
- Data can only be accessed or modified through **public member functions**.
- Encapsulation improves data security, prevents unauthorized access, and makes programs easier to maintain.

These two programs illustrate how encapsulation is used in real-world applications such as employee management systems and student fee management systems.