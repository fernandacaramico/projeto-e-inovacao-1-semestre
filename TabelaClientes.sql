create table Clientes (
  idcliente int  primary key identity (100,10),
  empresa varchar (40),
  diretor varchar (40),
  endereço varchar (40)
);
select * from clientes;
insert into Clientes values
('MRV Engenharia','Rafael Nazareth','Av. Paulista 1302'),
('Direcional Engenharia','Ricardo Silva','Rua Haddok Lobo 1204'),
('Cyrela','João Andrade','Av.Brigadeiro Luís Antônio 2207'); 

