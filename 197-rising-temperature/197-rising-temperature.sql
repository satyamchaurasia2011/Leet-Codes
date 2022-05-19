# Write your MySQL query statement below

select t1.id from weather t1, weather t2 where to_days(t1.recordDate) - to_days(t2.recordDate) = 1 
and
t1.temperature > t2.temperature;