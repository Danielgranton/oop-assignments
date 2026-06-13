# Employee Salary Calculator

A simple C++ program that calculates an employee's **basic pay**, **tax**, and **net pay** based on the number of hours worked and the hourly rate.

## Description

This program allows a user to:

1. Enter the employee's name  
2. Enter the number of hours worked  
3. Enter the rate per hour  
4. Calculate:
   - Basic Pay
   - Tax Deduction
   - Net Pay

The tax is calculated using the following rules:

| Basic Pay Range | Tax Rate |
|-----------------|----------|
| Above 50,000    | 20%      |
| 20,000 - 50,000 | 10%      |
| Below 20,000    | 0%       |

---

### 1. Compile the Program

```bash
g++ main.cpp -o main && ./main
