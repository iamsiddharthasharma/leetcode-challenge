# Write your MySQL query statement below
SELECT p.product_name as product_name, s.year as year, s.price as price
FROM Product P RIGHT JOIN Sales S ON P.product_id = S.product_id;