SELECT e.name , b.bonus 
FROM Employee as e LEFT JOIN Bonus as b
ON e.empId = B.empId
WHERE bonus < 1000 OR bonus IS NULL;