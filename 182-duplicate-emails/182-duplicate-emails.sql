# Write your MySQL query statement below

#select all elements from the coulmn "Email"
SELECT Email
#from the Person table
FROM Person
#groupped by the Email field
GROUP BY Email
#having a value more than 1
HAVING COUNT(*) > 1;