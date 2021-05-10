create database Book;
use Book;
create table AUTHOR( author_id int primary key, name varchar(30), city varchar(20), country varchar(20));
create table PUBLISHER( publisher_id int primary key, name varchar(30), city varchar(20), country varchar(20));
create table CATALOG( book_id int, title varchar(30), author_id int, publisher_id int, category_id int, year int, price int, primary key(book_id), foreign key(author_id) references AUTHOR(author_id), foreign key(publisher_id) references PUBLISHER(publisher_id), foreign key(category_id) references CATEGORY(category_id));
create table CATEGORY( category_id int, description varchar(50), primary key(category_id));
create table ORDER_DETAILS( order_no int primary key, book_id int, quantity int, foreign key(book_id) references CATALOG(book_id));

insert into AUTHOR values(1005,'WILLIAMS STALLINGS','LAS VEGAS','USA');
insert into PUBLISHER values(5,'MGH','NEW YORK','USA');
insert into CATEGORY values(1005,'OPERATING SYSTEMS');
insert into CATALOG values(17,'COBOL Handbook',1005,4,1001,2000,658);
insert into ORDER_DETAILS values(2,17,10);


select A.name,C.title,C.price from AUTHOR A,CATALOG C where C.author_id=A.author_id and C.year>=2000 and A.name=(select A.name from AUTHOR A,CATALOG C where A.author_id=C.author_id group by C.author_id having count(*)>=2);



select A.name from AUTHOR A,CATALOG C,ORDER_DETAILS O where O.book_id=C.book_id and A.author_id=C.author_id and O.book_id=(select book_id from ORDER_DETAILS where quantity=(select max(quantity) from ORDER_DETAILS));


update CATALOG set price=1.10*price;
select * from CATALOG;