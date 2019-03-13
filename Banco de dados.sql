create table Sensores (
    idSensor int primary key,
    nomeCliente varchar(30),    
    localInstalado varchar(30),
    empresa varchar(30)
);
select * from Sensores;
insert into Sensores values
    (100,'Rafael Nazareth','Jardins','MRV Engenharia'),
    (101,'Ricardo Silva','Itaquera','Direcional Engenharia'),
    (102,'João Andrade','Imirim','Cyrela');
create table MRV (
    idCliente int primary key,
    umidade int,
    temperatura int,
    DataMedicao date
);
insert into MRV values 
    (100,20,30,'2018-06-19');
select * from MRV;
drop table MRV;
create table Direcional(
    idCliente int primary key,
    umidade int,
    temperatura int,
    DataMedicao date
);
insert into Direcional values
    (110,15,28,'2017-05-09');
select * from Direcional;
create table Cyrela (
    idCliente int primary key,
    umidade int,
    temperatura int,
    DataMedicao date
);
insert into Cyrela values
    (120,13,25,'2018-04-03');
select * from Cyrela;
select * from Direcional;
select * from Sensores;
