-- For each department, calculate the number of enrolments in its courses.
-- Expected Columns:
-- DepartmentName, TotalEnrolments
SELECT d.DepartmentName, COUNT(e.CourseId) 
AS TotalEnrolments 
FROM Enrolment AS e 
INNER JOIN Course AS c 
ON e.CourseId = c.CourseId 
INNER JOIN Department as d 
ON c.DepartmentId=d.DepartmentId 
GROUP BY DepartmentName;