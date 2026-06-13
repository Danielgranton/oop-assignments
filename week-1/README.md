# Scholarship System (C++)

## Description

This is a simple C++ console program that calculates a student's scholarship eligibility based on:

- Marks
- Attendance percentage

The program collects student details and determines whether the student qualifies for:

- Full Scholarship
- Partial Scholarship
- No Scholarship

---

## Logic Used

### Scholarship Rules

- **Marks ≥ 70**
  - Attendance ≥ 80 → Full Scholarship
  - Attendance < 80 → Partial Scholarship

- **Marks 50 – 69**
  - Attendance ≥ 85 → Partial Scholarship
  - Attendance < 85 → No Scholarship

- **Marks < 50**
  - No Scholarship

---

## Input Format

The user is prompted to enter:

1. Name  
2. Marks (integer)  
3. Attendance percentage (integer)

---

## How to Run

### Compile

```bash
g++ main.cpp -o main
./main
