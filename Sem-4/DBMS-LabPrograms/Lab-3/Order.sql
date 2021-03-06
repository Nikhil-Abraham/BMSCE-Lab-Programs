create database order_processing1;
use order_processing1;
create table customer(cust int primary key,cname varchar(20),city varchar(20));
create table order_(order_no int primary key,odate date,cust int ,ord_amt int,
foreign key(cust) references customer(cust) on delete cascade);
create table item(item_no int primary key,unit_price int);
create table order_item(order_no int,item_no int ,qty int,
foreign key(order_no) references order_(order_no)on delete cascade,
foreign key(item_no) references item(item_no)on delete cascade);
create table warehouse(warehouse_no int primary key,city varchar(20));
create table shipment(order_no int,warehouse_no int ,ship_date date,
foreign key(order_no) references order_(order_no) on delete cascade,
foreign key(warehouse_no) references warehouse(warehouse_no) on delete cascade);
show tables;
drop table order_item;
insert into customer values(771,"pushpa k","bangalore");
insert into customer values(772,"suman","mumbai");
insert into customer values(773,"sourav","calicut");
insert into customer values(774,"laila","hyderabad");
insert into customer values(775,"faizal","bangalore");
select * from customer;

insert into order_ values(111,'2002-01-22',771,18000);
insert into order_ values(112,'2002-07-30',774,6000);
insert into order_ values(113,'2003-04-03',775,9000);
insert into order_ values(114,'2003-11-03',775,29000);
insert into order_ values(115,'2003-12-10',773,29000);
insert into order_ values(116,'2004-08-19',772,56000);
insert into order_ values(117,'2004-09-10',771,20000);
insert into order_ values(118,'2004-11-20',775,29000);
insert into order_ values(119,'2005-02-13',774,29000);
insert into order_ values(120,'2005-10-13',775,29000);
select * from order_;

insert into item values(5001,503);
insert into item values(5002,750);
insert into item values(5003,150);
insert into item values(5004,600);
insert into item values(5005,890);
select * from item;

insert into order_item values(111,5001,50);
insert into order_item values(112,5003,20);
insert into order_item values(113,5002,50);
insert into order_item values(114,5005,60);
insert into order_item values(115,5004,90);
insert into order_item values(116,5001,10);
insert into order_item values(117,5003,80);
insert into order_item values(118,5005,50);
insert into order_item values(119,5002,10);
insert into order_item values(120,5004,45);
select * from order_item;

insert into warehouse values(1,"delhi");
insert into warehouse values(2,"bombay");
insert into warehouse values(3,"chennai");
insert into warehouse values(4,"bangalore");
insert into warehouse values(5,"bangalore");
insert into warehouse values(6,"delhi");
insert into warehouse values(7,"bombay");
insert into warehouse values(8,"chennai");
insert into warehouse values(9,"delhi");
insert into warehouse values(10,"bangalore");
select * from warehouse;

insert into shipment values(111,1,'2002-02-10');
insert into shipment values(112,5,'2002-09-10');
insert into shipment values(113,8,'2003-02-10');
insert into shipment values(114,3,'2003-12-10');
insert into shipment values(115,9,'2004-01-19');
insert into shipment values(116,1,'2004-09-20');
insert into shipment values(117,5,'2004-09-10');
insert into shipment values(118,7,'2004-11-30');
insert into shipment values(119,7,'2005-04-30');
insert into shipment values(120,6,'2005-12-21');
select * from shipment;


-- iii) Produce a listing: CUSTNAME, #oforders, AVG_ORDER_AMT, where the middle column is the total
-- numbers of orders by the customer and the last column is the average order amount for that
-- customer.
select c.cname,count(o.order_no) as total_orders,avg(o.ord_amt) as average_amount from customer c,order_ o
where c.cust=o.cust group by o.cust;

-- iv) List the order# for orders that were shipped from all 
-- warehouses that the company has in a specific city.
select s.order_no from shipment s,warehouse w 
where s.warehouse_no=w.warehouse_no and w.city="delhi";

-- select s.order_no from shipment s where s.warehouse_no in(select w.warehouse_no from warehouse w where w.city="delhi");




-- v) Demonstrate how you delete item# 10 from the ITEM table and 
-- make that field null in theORDER_ITEM table.
delete from item where item_no=5005;
select * from order_item;