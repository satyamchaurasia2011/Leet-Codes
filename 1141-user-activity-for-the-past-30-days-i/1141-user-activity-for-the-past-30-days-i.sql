# Write your MySQL query statement below

select distinct activity_date as day, count(distinct user_id) as active_users from activity where activity_date > "2019-06-27" and activity_date < "2019-07-28"
group by activity_date