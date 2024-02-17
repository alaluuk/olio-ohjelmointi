# olio-ohjelmointi

Tässä repositoryssä on **Olio-ohjelmointi** kurssin esimerkkejä.

## functionExample1

Esimerkissä ei vielä olio-ohjelmointia, vaan kertausta yksinkertaisesta funktiosta.

## functionExample2

Esimerkissä ei vielä olio-ohjelmointia, vaan kertausta funktiosta. 

Funktiolle **doubleNumbers1** viedään argumentteina muuttujien arvot, jolloin funktio ei voi muokata noiden muuttujien arvoja.

Funktiolle **doubleNumbers2** viedään argumentteina muuttujien osoitteet, jolloin funktio voi muokata noiden muuttujien arvoja.

## randomExample

Esimerkissä ei vielä olio-ohjelmointia, vaan tutkitaan satunnaislukujen generointia.

## classExample1

Esimerkissä luodaan luokka **Student** ja siitä kaksi oliota pinomuistiin (stack) ja yksi kekoon (heap). Kekoon luodut oliot pitää muistaa tuhota itse.

## constructorExample

Esimerkissä havainnollistetaan konstruktorin merkitystä ja ylikuormittamista luomalla luokalle Vehicle kolme konstruktoria
<ul>
<li>Vehicle();</li>
<li>Vehicle(int value);</li>
<li>Vehicle(int value1, int value2);</li>
</ul> 

## inheritanceExample1

Esimerkissä luodaan luokka **Animal** ja luokat **Cat** ja **Bear**, jotka molemmat perivät Animal-luokan.

Tässä esimerkissä voidaan siis sanoa, että "Kissa on Eläin" ja "Karhu on eläin", joten tähän sopii perintä.

## Maailma

Esimerkissä on luokka **Maa**, jossa sisältää muuttujat nimi ja vakiluku sekä niille getterit ja setterit. Tästä luokasta periytetään luokat Monarkia ja Tasavalta. Monarkialla on erityisominaisuus hallitsija ja Tasavallalla presidentti.

## composition (kooste)

Lisätään edelliseen esimerkkiin luokka Person. Laitetaan Person luokkaan Cat-luokan olio.

Tässä esimerkissä voidaan sanoa, että "Henkilöllä on Kissa", joten tähän sopii kooste.

## GuiExample

QtWidget sovellus, jossa tutkitaan kuinka dataa välitetään ikkunasta toiseen.

## SQLite tietokantaa käyttävät sovellukset

Tein esimerkiksi kolme sovellusta, joissa käytetään SQLite tietokantaa:
<ol>
<li>sqliteConsoleApp (https://github.com/alaluuk/sqliteConsoleApp) </li>
<li>sqliteORM (https://github.com/alaluuk/sqliteORM)</li>
<li>QmlSqlite (https://github.com/alaluuk/QmlSqlite)</li>
</ol>

<ol>
<li>sqliteConsoleApp (Qt-konsolisovellus, jossa SQLite tietokanta) </li>
<li>sqliteORM (Qt-konsolisovellus, jossa havainnollistetaan ORMien toimintaa)</li>
<li>QmlSqlite (Qt-quick sovellus, jossa SQLite tietokanta)</li>
</ol>

ORM=Object Relational Mapper ja yleensä käytetään jotain valmista ORM:ia, jolloin sovellukseen ei tarvitse kirjoittaa SQL-koodia vaan tietokantaa hallitaan olioiden avulla.

QmlSqlite sovelluksessa kannattaa tutkia main.qml tiedostoa. Siinä siis luodaan sovelluksen käyttöliittymä.