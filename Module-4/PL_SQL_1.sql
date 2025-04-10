
-- Q.16:
/*
Lab 1: Write a PL/SQL block to print the total number of employees from the employees
table.
*/

declare
	total_employee number;
begin
	select count(*) into total_employee from employee;
	dbms_output.put_line('Total number of employee: '||total_employee);
end;


/*
Lab 2: Create a PL/SQL block that calculates the total sales from an orders table.
*/

CREATE TABLE orders (
    order_id NUMBER PRIMARY KEY,
    order_date VARCHAR(25) NOT NULL,
    customer_id NUMBER NOT NULL,
    total_amount NUMBER(10,2) NOT NULL
);

INSERT INTO orders VALUES (1,'2024-03-01',101,150.75);
INSERT INTO orders VALUES (2,'2024-03-02',102,250.50);
INSERT INTO orders VALUES (3,'2024-03-03',103,180.00);
INSERT INTO orders VALUES (4,'2024-03-04',104,120.25);

select * from orders;

DECLARE
    total_sales NUMBER(10,2);  
BEGIN
    SELECT SUM(total_amount) INTO total_sales FROM orders;
    DBMS_OUTPUT.PUT_LINE('Total Sales Amount: ' || total_sales);
END;


-- Q.17. PL/SQL Control Structures

/*
Lab 1: Write a PL/SQL block using an IF-THEN condition to check the department of an
employee.
*/

DECLARE
   v_employee_id  employees.employee_id%TYPE := 104; -- You can change this to any valid employee ID
   v_department_id employees.department_id%TYPE;
   v_department_name VARCHAR2(100);
BEGIN
   SELECT department_id INTO v_department_id FROM employees WHERE employee_id = v_employee_id;

   IF v_department_id = 1 THEN
      DBMS_OUTPUT.PUT_LINE('The employee ' || v_employee_id || ' works in the HR department.');
   ELSIF v_department_id = 2 THEN
      DBMS_OUTPUT.PUT_LINE('The employee ' || v_employee_id || ' works in the IT department.');
   ELSIF v_department_id = 3 THEN
      DBMS_OUTPUT.PUT_LINE('The employee ' || v_employee_id || ' works in the FINANCE department.');
   ELSE
      DBMS_OUTPUT.PUT_LINE('The employee ' || v_employee_id || ' works in another department.' || v_department_name);
   END IF;
END;



/*
Lab 2: Use a FOR LOOP to iterate through employee records and display their names.
*/

DECLARE
    CURSOR emp_cursor IS 
        SELECT employee_name FROM employees; -- Cursor to fetch employee names
BEGIN
    FOR emp_rec IN emp_cursor LOOP
        DBMS_OUTPUT.PUT_LINE('Employee Name: ' || emp_rec.employee_name);
    END LOOP;
END;



-- Q.18. SQL Cursors:

/*
Lab 1: Write a PL/SQL block using an explicit cursor to retrieve and display employee details.
*/

CREATE TABLE emp (
   employee_id   NUMBER PRIMARY KEY,
   employee_name VARCHAR2(100),
   department_id NUMBER
);
INSERT INTO emp VALUES (101, 'Alice', 10);
INSERT INTO emp VALUES (102, 'Bob', 20);
INSERT INTO emp VALUES (103, 'Charlie', 30);
INSERT INTO emp VALUES (104, 'Diana', 40);

select * from emp;

declare
	employee_id emp.employee_id%type;
    employee_name emp.employee_name%type;
    department_id emp.department_id%type;
cursor emp_cursor is select employee_id, employee_name, department_id from emp;
begin
    dbms_output.put_line(' ----- Employees Details  ------ ');
	open emp_cursor;
    	loop
    		fetch emp_cursor into employee_id, employee_name, department_id;
			exit when emp_cursor%notfound;
			dbms_output.put_line(' Employee id : '||employee_id||'      Employee Name : '||employee_name||'      Department Id : '||department_id);
		end loop;
	close emp_cursor;
end;



/*
Lab 2: Create a cursor to retrieve all courses and display them one by one.
*/

create table courses 
(
course_id  int primary key,
course_name varchar(25),
course_credits float not null
);

insert into courses values(101,'Graphic_designer',6);
insert into courses values(102,'Full_stack',7);
insert into courses values(103,'Backend_developer',9);
insert into courses values(104,'Digital_marketing',7);
insert into courses values(105,'Content_creator',8);
insert into courses values(106,'Lead_developer',4);
insert into courses values(107,'Social_media_manager',5);
insert into courses values(108,'Cyber_Security',3);
insert into courses values(109,'Full_stack',4);
insert into courses values(110,'Backend_developer',9);

select * from courses;

declare
	course_id courses.course_id%type;
    course_name courses.course_name%type;
    course_credits courses.course_credits%type;
cursor courses_cursor is select course_id, course_name, course_credits from courses;
begin
    dbms_output.put_line(' ----- Courses Details  ------ ');
	open courses_cursor;
    	loop
    		fetch courses_cursor into course_id, course_name, course_credits;
    			exit when courses_cursor%notfound;
    			dbms_output.put_line(' Courses id : '||course_id||'      Courses Name : '||course_name||'      Courses Credits : '||course_credits);
		end loop;
	close courses_cursor;
end;



-- Q.19 Rollback and Commit Savepoint:

/*Lab 1: Perform a transaction where you create a savepoint, insert records, then rollback to
the savepoint.
Lab 2: Commit part of a transaction after using a savepoint and then rollback the remaining
changes.
*/

BEGIN
    INSERT INTO courses (course_id, course_name, course_credits)
    VALUES (111, 'Data Structures', 4);

    INSERT INTO courses (course_id, course_name, course_credits)
        VALUES (112, 'PHP Programming', 3);

    SAVEPOINT before_third_insert;

    INSERT INTO courses (course_id, course_name, course_credits) 
    VALUES (113, 'Artificial Intelligence', 6);

    ROLLBACK TO before_third_insert;

    COMMIT;
    
    DBMS_OUTPUT.PUT_LINE('Transaction complete. Third insert rolled back.');
END;



BEGIN
    INSERT INTO courses (course_id, course_name, course_credits) 
    VALUES (114, 'Cloud Computing', 5);

    SAVEPOINT first_commit_point;

    INSERT INTO courses (course_id, course_name, course_credits) 
    VALUES (115, 'Cybersecurity', 4);

    COMMIT;

    INSERT INTO courses (course_id, course_name, course_credits) 
    VALUES (116, 'Blockchain Technology', 6);

    ROLLBACK;

    DBMS_OUTPUT.PUT_LINE('First insert committed, second insert rolled back.');
END;

