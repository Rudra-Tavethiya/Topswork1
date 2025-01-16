create database school_db;
create table students(student_id int, student_name varchar(20), age int, class varchar(2), address varchar(50));
describe students;
insert into students values (101,"rudra",20,"A","surat");
insert into students values (102,"harshad",19,"A","surat"),(103,"karan",18,"B","vapi"),(104,"raj",20,"C","ahemdabad"),(105,"ravi",19,"B","rajkot");
select * from students;