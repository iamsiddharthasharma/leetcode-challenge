# Write your MySQL query statement below
SELECT EU.UNIQUE_ID AS UNIQUE_ID, E.NAME AS NAME
FROM Employees E LEFT JOIN EmployeeUNI EU ON EU.ID = E.ID;