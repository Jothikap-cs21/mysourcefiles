create table student_details( std_id int,std_name text,std_class text,std_address text);                                                            
sqlite> insert into student_details(std_id,std_name,std_class,std_address) values('1','jothika','cs','sathyamangalam');
sqlite> select *from student_details;

┌────────┬──────────┬───────────┬────────────────┐
│ std_id │ std_name │ std_class │  std_address   │
├────────┼──────────┼───────────┼────────────────┤
│ 1      │ jothika  │ cs        │ sathyamangalam │
└────────┴──────────┴───────────┴────────────────┘

