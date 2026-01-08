/* Write your PL/SQL query statement below */
select class from courses group by class having count(class)>4 order by count(class) desc;
