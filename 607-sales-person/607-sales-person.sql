# Write your MySQL query statement below

select name from salesperson where not sales_id  in  (select sales_id from orders where com_id in
(select com_id from company where name = "red"));