# Task 2 - Portfolio Task

## Key Info

Each of these questions must be done in **a separate sql file** which are provided in this folder.

The grader will run your SQL and compare the output, so it is vital that you use the expected columns (provided at the end of each question) - in questions with joins or aggregations, you may need to alias these using `AS`.

You can create a zip to use to submit all 5 files pasting the following line of code into the terminal:
```bash
zip submission.zip *.sql
```
This will create 'submission.zip' which you can download and submit - this will ensure your files are named correctly every time!

### Question 1

List all students who enrolled in the year 2022.

Expected Columns:
StudentId, FirstName, LastName, EnrolmentYear

### Question 2

Find the 5 youngest students in the database.

Expected Columns:
StudentId, FirstName, LastName, DateOfBirth

### Question 3

For each department, calculate the number of enrolments in its courses.

Expected Columns:
DepartmentName, TotalEnrolments

### Question 4

List all students along with the names of the courses they are enrolled in.

Expected Columns:
StudentId, FirstName, LastName, CourseName

### Question 5

For each student, calculate the total number of credits from courses they passed. Assume a passing grade is 40 or higher.

Expected Columns:
StudentId, FirstName, LastName, TotalCreditsPassed

## Diagram

![Database diagram of the Student database.](student.png)