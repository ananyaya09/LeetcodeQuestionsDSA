# Write your MySQL query statement below
SELECT eu.unique_id, e.name    #only this order matters 
From Employees e
left Join EmployeeUNI eu
ON eu.id=e.id