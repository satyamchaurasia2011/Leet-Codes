# Write your MySQL query statement below

# select name as Employee from employee as e where salary > (select salary from employee where id = e.managerId);

select e1.name as Employee from employee as e1, employee as e2 where e1.managerId = e2.id and e1.salary > e2.salary;


