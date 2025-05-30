create database sql_assessment;

use sql_assessment;

create table bank(branch_id int primary key, 
	branch_name varchar(100), 
    branch_city varchar(100)
);

create table Account_Holder (
    acc_holder_id INT primary key,
    account_no varchar(20) UNIQUE,
    acc_holder_name varchar(100),
    city varchar(100),
    contact varchar(15),
    date_created date,
    acc_status varchar(20),
    acc_type varchar(50),
    balance DECIMAL(12, 2)
);

create table Loan (
    loan_no int primary key,
    branch_id int,
    acc_holder_id int,
    loan_amount DECIMAL(12, 2),
    loan_type varchar(50),
    FOREIGN KEY (branch_id) REFERENCES Bank(branch_id),
    FOREIGN KEY (acc_holder_id) REFERENCES Account_Holder(acc_holder_id)
);

insert into Bank (branch_id, branch_name, branch_city) values
(1, 'Downtown Branch', 'New York'),
(2, 'Uptown Branch', 'New York'),
(3, 'Midtown Branch', 'Chicago'),
(4, 'South Side Branch', 'Chicago'),
(5, 'East End Branch', 'Los Angeles');

insert into Account_Holder 
(acc_holder_id, account_no, acc_holder_name, city, contact, date_created, acc_status, acc_type, balance) 
values
(101, 'A001', 'Alice Smith', 'New York', '1234567890', '2024-03-14', 'active', 'savings', 5000.00),
(102, 'A002', 'Bob Johnson', 'New York', '2345678901', '2024-03-20', 'active', 'current', 3000.00),
(103, 'A003', 'Charlie Lee', 'Chicago', '3456789012', '2024-02-10', 'terminated', 'savings', 200.00),
(104, 'A004', 'Diana Ross', 'Chicago', '4567890123', '2024-04-18', 'active', 'savings', 15000.00),
(105, 'A005', 'Evan Wright', 'Los Angeles', '5678901234', '2024-01-16', 'active', 'current', 2500.00),
(106, 'A006', 'Fiona Green', 'New York', '6789012345', '2024-04-02', 'active', 'savings', 10000.00),
(107, 'A007', 'George Hill', 'Los Angeles', '7890123456', '2024-03-25', 'terminated', 'current', 4000.00),
(108, 'A008', 'Hannah Lee', 'Chicago', '8901234567', '2024-02-20', 'active', 'savings', 6500.00),
(109, 'A009', 'Ian Clarke', 'New York', '9012345678', '2024-03-16', 'active', 'savings', 1200.00),
(110, 'A010', 'Jane Foster', 'Chicago', '9123456789', '2024-04-17', 'active', 'current', 2200.00);

insert into Loan (loan_no, branch_id, acc_holder_id, loan_amount, loan_type) values
(201, 1, 101, 10000.00, 'home'),
(202, 2, 102, 5000.00, 'personal'),
(203, 3, 104, 15000.00, 'education'),
(204, 4, 108, 7000.00, 'vehicle'),
(205, 5, 105, 8000.00, 'home'),
(206, 2, 106, 6000.00, 'personal'),
(207, 1, 109, 4000.00, 'education');



-- Consider an example where there’s an account holder table where we are doing an intra bank transfer
--             i.e. a person holding account A is trying to transfer $100 to account B.

--         for this you have to make a transaction in sql which can transfer fund from account A to B  

--         Make sure after the transaction the account information have to be updated for both the 
--         credit account and the debited account

START TRANSACTION;

update Account_Holder
set balance = balance - 100
where account_no = 'A001';

update Account_Holder
set balance = balance + 100
where account_no = 'A002';

COMMIT;



-- Also fetch the details of the account holder who are related from the same city  

select *
from Account_Holder AH1
where EXISTS (
    select 1
    from Account_Holder AH2
    where AH1.city = AH2.city
);



-- Write a query to fetch account number and account holder name, whose accounts were created after 15th of any month

select account_no, acc_holder_name
from Account_Holder
where DAY(date_created) > 15;



-- Write a query to display the city name and count the branches in that city. 
-- Give the count of branches an alias name of Count_Branch. 

select branch_city AS City, COUNT(*) AS Count_Branch
from Bank
GROUP BY branch_city;



-- Write a query to display the account holder’s id, account holder’s name, branch id, 
-- and loan amount for people who have taken loans. (NOTE : use sql  join concept to solve the query) 

select 
    AH.acc_holder_id,
    AH.acc_holder_name,
    L.branch_id,
    L.loan_amount
from Account_Holder AH
JOIN Loan L ON AH.acc_holder_id = L.acc_holder_id;