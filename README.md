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

## composition (kooste)

Lisätään edelliseen esimerkkiin luokka Person. Laitetaan Person luokkaan Cat-luokan olio.

Tässä esimerkissä voidaan sanoa, että "Henkilöllä on Kissa", joten tähän sopii kooste.