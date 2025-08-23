# Write your MySQL query statement below
DELETE laterEmail
FROM Person laterEmail
JOIN Person initialEmail 
ON laterEmail.email = initialEmail.email
AND initialEmail.id < laterEmail.id;