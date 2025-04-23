-- 1. Introduction to SQL

/*
Lab 1:Create a new database named school_db and a table called students with the
following columns: student_id, student_name, age, class, and address.
*/

create schema school_db;

create table students
(
	student_id int not null unique,
    student_name varchar(25) not null,
    age int not null,
    class varchar(25) not null,
    address varchar(100) not null 
);

/*
Lab 2:Insert five records into the students table and retrieve all records using the SELECT
statement.
*/

insert into students values(1,'Srushti',22,'IT department','Ahmedabad');

insert into students values(2,'Sravya',23,'Computer department','Rajkot');

insert into students values(3,'Heer',21,'IT department','Bhavnagar');

insert into students values(4,'Mitu',22,'IT department','Ahmedabad');

insert into students values(5,'Riddhi',22,'Electrical department','Mehsana');

insert into students values(6,'Parth',20,'IT department','Surat');

select * from students;

-- -----------------------------------------------------------------------

-- 2. SQL Syntax

/*
Lab 1: Write SQL queries to retrieve specific columns (student_name and age) from the
students table.
*/

select student_name,age from students;

/*
Lab 2: Write SQL queries to retrieve all students whose age is greater than 10.
*/

select * from students where age>10;


-- -----------------------------------------------------------------------

-- 3. SQL Constraints

/*Lab 1: Create a table teachers with the following columns: teacher_id (Primary Key),
teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE).
*/
create table teachers 
(
	teacher_id int primary key,
	teacher_name varchar(25) not null,
	subject varchar(25) not null,
	email varchar(25) unique
);
select * from teachers;

			

/* Lab 2: Implement a FOREIGN KEY constraint to relate the teacher_id from the
teachers table with the students table.
*/
drop table students;

create table students
(
student_id int not null unique,
student_name varchar(25) not null,
age int not null,
class varchar(25) not null,
address varchar(100) not null,
teacher_id int,
foreign key students(teacher_id) references teachers(teacher_id)
);

select * from students;


-- ---------------------------------------------------------------------------
-- 4. Main SQL Commands and Sub-commands(DDL)

/*
Lab 1: Create a table courses with columns: course_id, course_name, and
course_credits. Set the course_id as the primary key.
Lab 2: Use the CREATE command to create a database university_db.
*/

create schema university_db;
create table courses 
(
course_id  int primary key,
course_name varchar(25),
course_credits float not null
);

insert into courses(course_id,course_name,course_credits) values 
(101,'Graphic_designer',6),
(102,'Full_stack',7),
(103,'Backend_developer',9),
(104,'Digital_marketing',7),
(105,'Content_creator',8),
(106,'Lead_developer',4),
(107,'Social_media_manager',5),
(108,'Cyber_Security',3),
(109,'Full_stack',4),
(110,'Backend_developer',9);

select * from courses;



-- --------------------------------------------------------------------
-- 5. ALTER Command

/*
Lab 1: Modify the courses table by adding a column course_duration using the ALTER
command.
*/

alter table courses add column course_duration varchar(50);

select * from courses;


/*
Lab 2: Drop the course_credits column from the courses table.
*/

alter table courses drop column course_credits;

select * from courses;


-- ------------------------------------------------------
-- 6. DROP Command

/*
Lab 1: Drop the teachers table from the school_db database.
*/

drop table teachers;

show tables;


/*
Lab 2: Drop the students table from the school_db database and verify that the table has
been removed.
*/

drop table students;
show tables;    


-- -----------------------------------------------------------
-- 7. Data Manipulation Language (DML)

/*
Lab 1: Insert three records into the courses table using the INSERT command.
*/

insert into courses (course_id,course_name,course_duration) values 
(201,'Full_stack_development',8),
(202,'Backend_development',7),
(203,'Digital_marketing',6);

select * from courses;


/*
Lab 2: Update the course duration of a specific course using the UPDATE command.
*/
update courses set course_duration = 9 where course_id = 202;

select * from courses;


/*
Lab 3: Delete a course with a specific course_id from the courses table using the DELETE
command.
*/

delete from courses where course_id = 203;

select * from courses;


-- -------------------------------------------------------------
-- 8. Data Query Language (DQL)

/*
Lab 1: Retrieve all courses from the courses table using the SELECT statement.
*/
select * from courses;

/*
Lab 2: Sort the courses based on course_duration in descending order using ORDER BY.
*/
select * from courses order by course_duration  desc;


/*
Lab 3: Limit the results of the SELECT query to show only the top two courses using LIMIT.
*/

select * from courses limit 2;

-- -------------------------------------------------------------
-- 9. Data Control Language (DCL)

/*
Lab 1: Create two new users user1 and user2 and grant user1 permission to SELECT
from the courses table.
Lab 2: Revoke the INSERT permission from user1 and give it to user2.
*/

create user user1 identified by 'khushi@0123' default role Admin;
create user user2 identified by 'khushi@0123' default role Admin;
grant select on courses to user1;

revoke insert on courses from user1;
grant insert on courses to user2;

-- ----------------------------------------------------------------
-- 10. Transaction Control Language (TCL)

/*
Lab 1: Insert a few rows into the courses table and use COMMIT to save the changes.
Lab 2: Insert additional rows, then use ROLLBACK to undo the last insert operation.
Lab 3: Create a SAVEPOINT before updating the courses table, and use it to roll back
specific changes.
*/

insert into courses (course_id,course_name,course_duration) values 
(204,'Full_stack',9),
(205,'Backend_developer',6),
(206,'Cyber_Security',3);
commit; 
select * from courses;


insert into courses (course_id,course_name,course_duration) values 
(207,'UI_UX_Designer',5),
(208,'Software_Engineering',8);
select * from courses;
rollback;
select * from courses;


savepoint s1;
update courses set course_name='Software_Developer' where course_id=107;
select * from courses;


savepoint s2;
update  courses set course_name='Graphic_Designer' where course_id=206;
select * from courses;


rollback to s2;
select * from courses;

-- --------------------------------------------------------------
-- 11. SQL Joins

/*
Lab 1: Create two tables: departments and employees. Perform an INNER JOIN to
display employees along with their respective departments.
Lab 2: Use a LEFT JOIN to show all departments, even those without employees.
*/
create table departments
(
department_id int primary key,
department_name varchar(100) not null
);

create table employees
(
employee_id int primary key,
employee_name varchar(100) not null,
employee_salary int not null,
department_id int,
foreign key (department_id)  references departments(department_id)
);


insert into departments values(1,'HR');
insert into departments values(2,'IT');
insert into departments values(3,'Finance');
insert into departments values(4,'Marketing');
select * from departments;


insert into employees values(101,'Alice',30.000,1);
insert into employees values(102,'Bob',21.000,2);
insert into employees values(103,'Charlie',15.000,2);
insert into employees values(104,'David',32.000,3);
select * from employees;


select employees.employee_id, employees.employee_name, departments.department_name
from employees
inner join departments on employees.department_id = departments.department_id;

select departments.department_id, departments.department_name, employees.employee_name
from departments
left join employees on departments.department_id = employees.department_id;



-- ---------------------------------------------------------------
-- 12. SQL Group By

/*
Lab 1: Group employees by department and count the number of employees in each
department using GROUP BY.
Lab 2: Use the AVG aggregate function to find the average salary of employees in each
department.
*/

select department_id ,count(*) as employee_count from employees group by department_id;

update employees set employee_salary = 20000 where employee_id = 101;
update employees set employee_salary = 10000 where employee_id = 102;
update employees set employee_salary = 25000 where employee_id = 103;
update employees set employee_salary = 15000 where employee_id = 104;
select * from employees;

select department_id, avg(employee_salary) as average_salary from employees group by department_id;


-- --------------------------------------------------------------
-- 13. SQL Stored Procedure

/*
Lab 1: Write a stored procedure to retrieve all employees from the employees table based
on department.
Lab 2: Write a stored procedure that accepts course_id as input and returns the course
details.
*/

delimiter &&
create procedure get_emp_by_dept(depr_id int)
begin
	select emp_id,emp_name,dept_id from employees where dept_id = dept_id;
end &&
call get_emp_by_dept(5);
select * from employees;
-- drop procedure get_emp_by_dept;

-- ---------------------------------------------------------------
-- 14. SQL View

/*
Lab 1: Create a view to show all employees along with their department names.
Lab 2: Modify the view to exclude employees whose salaries are below $50,000.
*/

create view emp_dept_view as select e.emp_name,e.emp_id,d.dept_name from employees e join departments d on e.dept_id = d.dept_id;
select * from emp_dept_view;


create view viewempdept as select e.emp_name,e.emp_id,d.dept_name,e.salary from employees e join departments d on e.dept_id = d.dept_id 
where e.salary >= 50000;
-- drop view emp_dept_view;
select * from viewempdept;

-- ----------------------------------------------------------------
-- 15. SQL Triggers

/*
Lab 1: Create a trigger to automatically log changes to the employees table when a new
employee is added.
Lab 2: Create a trigger to update the last_modified timestamp whenever an employee
record is updated.
*/

create table emp_log
(
log_id int auto_increment primary key,
action varchar(50),
emp_id int,
emp_name varchar(50),
action_date timestamp 
);
create trigger emp_log
after insert on employees
for each row
insert into emp_log(action,emp_id,emp_name) values ('insert',new.emp_id,new.emp_name,current_timestamp());
select * from employees;
insert into employees(emp_id,emp_name,salary,dept_id) values
(211,'Aryan Patel',20000,101),(212,'Ronak Patel',15000,102);
select * from emp_log;

alter table employees add last_modified timestamp  default current_timestamp on update current_timestamp;
create trigger before_emp_update
before update on employees
for each row
set new.last_modified = current_timestamp;
update employees set salary = 12000 where emp_id = 211;
select emp_id,emp_name,salary,last_modified from employees where emp_id=211;

