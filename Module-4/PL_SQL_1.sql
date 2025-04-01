
-- 16. Introduction to PL/SQL

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
    total_sales NUMBER(10,2);  -- Variable to store total sales amount
BEGIN
    SELECT SUM(total_amount) INTO total_sales FROM orders;
    DBMS_OUTPUT.PUT_LINE('Total Sales Amount: ' || total_sales);
END;


-- 17. PL/SQL Control Structures

/*
Lab 1: Write a PL/SQL block using an IF-THEN condition to check the department of an
employee.
*/

/*
Lab 2: Use a FOR LOOP to iterate through employee records and display their names.
*/

-- 18. SQL Cursors

/*
Lab 1: Write a PL/SQL block using an explicit cursor to retrieve and display employee details.
*/

/*
Lab 2: Create a cursor to retrieve all courses and display them one by one.
*/


-- 19. Rollback and Commit Savepoint

/*
Lab 1: Perform a transaction where you create a savepoint, insert records, then rollback to
the savepoint.
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


/*
Lab 2: Commit part of a transaction after using a savepoint and then rollback the remaining
changes.
*/
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



