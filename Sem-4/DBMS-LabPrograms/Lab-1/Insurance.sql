show databases;
create database Insurance;
use Insurance;
create table PERSON(driver_id varchar(30) primary key, name varchar(30), address varchar(30));
create table CAR(Regno varchar(30) primary key, model varchar(30), year int);
create table ACCIDENT(report_number int primary key, adate date, location varchar(30));
create table OWNS(driver_id varchar(30), Regno varchar(30), primary key(driver_id,Regno), foreign key(driver_id) references PERSON(driver_id), foreign key(Regno) references CAR(Regno));
create table PARTICIPATED(driver_id varchar(30), Regno varchar(30), report_number int, damage_amount int, primary key(driver_id, Regno), foreign key(driver_id, Regno) references OWNS(driver_id, Regno));
show tables;
insert into PERSON values('05C','Bob','Jamaica');
insert into CAR values('1E','Hundai','2015');
insert into ACCIDENT values('5','1999/09/02','Hubli');
insert into OWNS values('05C','1E');
insert into PARTICIPATED values('01A','1A',1,96000);
select * from CAR;

-- a. Update the damage amount for the car with a specific Regno in the accident with report number 12 to
-- 25000.

update PARTICIPATED set damage_amount=25000 where Regno='01A' AND report_number=1;
select * from PARTICIPATED;


-- Add a new accident to the database.

insert into ACCIDENT values('6','1967/09/02','Kerala');
select * from ACCIDENT;

-- Find the total number of people who owned cars that involved in accidents in 2008.

select count from ACCIDENT where adate>'2007/12/31' AND adate<'2009/01/01';

-- Find the number of accidents in which cars belonging to a specific model were involved.

select count(ACCIDENT.report_number) from ACCIDENT,PARTICIPATED,CAR where ACCIDENT.report_number=PARTICIPATED.report_number AND PARTICIPATED.Regno=CAR.Regno AND CAR.model='Chevy';
