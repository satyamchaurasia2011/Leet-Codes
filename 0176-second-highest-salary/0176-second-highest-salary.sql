# Write your MySQL query statement below

# select salary as SecondHighestSalary from employee order by (select salary from employee order by salary limit 2) desc limit 1;

select max(salary) as SecondHighestSalary from employee where salary < (select max(salary) from employee);