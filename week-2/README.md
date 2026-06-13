# Library Fine System (C++)

## Description

This is a simple C++ console program that calculates library book fines based on:

- Book ID
- Due date
- Return date

The program determines how many days a book is overdue and calculates the fine based on predefined rules.

---

## How It Works

The program:

1. Takes user input for:
   - Book ID
   - Due date (number of days)
   - Return date (number of days)

2. Calculates overdue days using:
   - `overdue = returnDate - dueDate`

---

## How to Run

### Compile

```bash
g++ main.cpp -o main
./main
