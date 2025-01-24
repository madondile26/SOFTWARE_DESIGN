# SOFTWARE DESIGN 2 - Rugby Team Management System

## Overview

This C++ program is designed to manage university rugby team registrations and player assignments based on various criteria such as age, position, and registration status. It guides users through a series of steps to collect and validate their details, determine their eligibility, and assign appropriate team roles.

## Features

- **University Selection:**
  - Users can select their university rugby team from a predefined list.
- **Student Verification:**
  - Ensures users are registered university students through ID and student number validation.
- **Age-based Team Assignment:**
  - Determines team placement (Team A, Team B, Reserve) based on birth year calculations.
- **Position Selection:**
  - Assigns players to specific rugby positions based on input.
- **User Detail Collection:**
  - Collects and validates user information including name, surname, ID number, and contact details.

## How to Run

1. Compile the program using a C++ compiler such as `g++`:
   ```
   g++ SOFTWARE_DESIGN_2.cpp -o rugby_team
   ```
2. Run the executable:
   ```
   ./rugby_team
   ```
3. Follow the on-screen instructions to input your details and receive your rugby team assignment.

## Input Validations

- Ensures the user selects a valid university.
- Validates that the student number is exactly 9 digits.
- Ensures the ID number contains 13 digits.
- Limits age to a maximum of 25 years.
- Ensures position number input is within the accepted range.

## Sample Input/Output

**Example Input:**

```
1. Please select the name of the University rugby team:
   (A) WSU ALL BLACKS.
   (B) CPUT.
   (C) UKZN.
   (D) TUT.
   (E) EXIT...
A

2. Are you a registered student of the University?
Yes

Enter your student number: 123456789
Enter your age: 22
Enter your position number: 10
```

**Example Output:**

```
WSU ALL BLACKS Province: Eastern Cape
WSU ALL BLACKS Town: East London
FLY HALF
```

## Technologies Used

- C++
- Standard Input/Output (`iostream`)
- String Handling
- Conditional Statements
- Loops for Input Validation

## Future Improvements

- Add a database connection to store player details permanently.
- Implement GUI for better user experience.
- Add error logging for tracking invalid inputs.

---

Thank you for using the Rugby Team Management System!
