-- List all students along with the names of the courses they are enrolled in.
-- Expected Columns:
-- StudentId, FirstName, LastName, CourseName
SELECT s.StudentId, s.FirstName,s.LastName, c.CourseName 
FROM Student AS s 
INNER JOIN Enrolment AS e 
ON s.StudentId=e.StudentId 
INNER JOIN Course AS c 
ON e.CourseId = c.CourseId 
INNER JOIN Department as d 
ON c.DepartmentId=d.DepartmentId;