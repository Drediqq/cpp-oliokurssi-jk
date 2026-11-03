/*
Tässä tehtävässä harjoitellaan periytymistä ja metodien ylikirjoittamista C++-ohjelmoinnissa. Tavoitteena on ymmärtää, miten perivä luokka voi ylikirjoittaa kantaluokan metodin, ja nähdä polymorfismi käytännössä C++:ssa.

OHJE: https://peatutor.com/cplus/index.php#overriding

Noudata käytäntöä, että kullekin luokalle luodaan oma header-tiedosto ja oma cpp-tiedosto, joilla on sama nimi kuin luokalla. Tämä hoituu automaattisesti, kun luot luokat Qt-Creatorin toiminnolla "Add New -> C++ Class". Tutustu aluksi UML-kaavion symbooleihin kts. https://peatutor.com/cplus/index.php#uml

Harjoitus3b (perintä/ylikirjoittaminen)

Luo C++-projekti nimeltään h3b

    Lisää projektiin kantaluokka nimeltä Animal, joka sisältää virtuaalisen metodin callOut. Tämä metodi tulostaa tekstin "Eläin ääntelee."
    Luo kantaluokasta perivä luokka nimeltä Dog, joka ylikirjoittaa metodin callOut. Ylikirjoitetun metodin tulisi tulostaa teksti "Koira haukkuu!"
    Kirjoita main-funktio, jossa luodaan Animal-luokan olio ja Dog-luokan olio.
    Kutsu molemmissa tapauksissa callOut-metodia ja varmista, että oikea viesti tulostuu.
    Varmista, että luomasi oliot tuhoutuvat.

Lisätietoa
C++: Polymorfismi luokkien Animal ja Dog välillä

Kun sinulla on C++-ohjelmassa, perintäsuhde luokkien Animal ja Dog välillä, voit luoda ja käsitellä olion joko kantaluokan (Animal) tai perivänluokan (Dog) tyypin kautta. Molemmilla tavoilla on etunsa. Tarkastellaan ensin molempia tapoja:

Huom! Modernissa C++:ssa käytetään älykkäitä osoittimia (smart pointers) kuten unique_ptr tai shared_ptr raakaosoittimien sijaan. Näin muisti vapautuu automaattisesti eikä delete-komentoa tarvita.

    unique_ptr<Animal> dog = make_unique<Dog>(); (Polymorfismi)
    unique_ptr<Dog> dog = make_unique<Dog>(); (Perivänluokan käyttö suoraan)

1. Polymorfinen olio

Plolymorfinen olio voidaan luoda lauseella: unique_ptr<Animal> dog = make_unique<Dog>();, jolloin käytetään kantaluokan tyyppiä, mutta luodaan perivänluokan olio. Tämä tarjoaa monia etuja:

Huom! Tässä tapauksessa Animal luokan destruktori on määritettävä virtuaaliseksi.
1.1 Polymorfismi

Voit käsitellä Dog-oliota yleisemmällä Animal-tyypillä. Tämä mahdollistaa koodin kirjoittamisen siten, että se voi käsitellä mitä tahansa Animal-tyyppistä oliota (Dog, Cat, jne.), mikä lisää joustavuutta ja laajennettavuutta.

#include <memory>
#include <vector>

std::vector<std::unique_ptr<Animal>> animals;
animals.push_back(std::make_unique<Dog>());
animals.push_back(std::make_unique<Cat>());
animals.push_back(std::make_unique<Bird>());

for (const auto& animal : animals) {
    animal->callOut();  // Jokainen eläin toteuttaa oman luokkansa callOut-metodin
}
// Muisti vapautuu automaattisesti, kun animals-vektori tuhoutuu

1.2 Yleisemmät funktiot

Funktiot voivat käsitellä Animal-tyyppisiä olioita ilman, että niiden tarvitsee tietää perivää luokkaa:

void handleAnimal(const std::unique_ptr<Animal>& animal) {
    animal->callOut();  // Polymorfinen kutsu
}

1.3 Laajennettavuus

Voit lisätä uusia eläinlajeja (Cat, Bird, jne.) ilman, että sinun tarvitsee muuttaa vanhaa koodia, joka käyttää kantaluokkaa (Animal).
2. Perivänluokan olio

Perivänluokan olio voidaan luoda lauseella: unique_ptr<Dog> dog = make_unique<Dog>();, jolloin käytetään perivänluokan tyyppiä. Tämä voi olla hyödyllistä seuraavissa tilanteissa:

2.1 Perivänluokan ominaisuuksien käyttö

Jos haluat käyttää Dog-luokan erityisiä metodeja tai jäsenmuuttujia, jotka eivät ole kantaluokassa, sinun täytyy käyttää Dog-tyyppiä:

auto dog = std::make_unique<Dog>();
dog->getOwner();  // Ominaisuus, joka on vain Dog-luokassa, ei Animal-luokassa

2.2 Ei tarvitse virtuaalisia funktioita

Jos et tarvitse polymorfismia, suora Dog-osoitin voi olla tehokkaampi, koska se ei aiheuta ylimääräistä suorituskykykustannusta virtuaalifunktiotaulun (vtable) käytöstä (vtable on taulukko, joka sisältää osoittimet virtuaalisiin metodeihin).

 	Automaattinen 	Automaattinen
Milloin käyttää unique_ptr<Animal> ja milloin unique_ptr<Dog>?

    Käytä unique_ptr<Animal>, kun haluat hyödyntää polymorfismia ja käsitellä erilaisia eläinluokkia samalla tavalla.
    Käytä unique_ptr<Dog>, kun tiedät tarkalleen, että työskentelet vain Dog-olioiden kanssa ja haluat käyttää sen erityisiä metodeja.

Esimerkki 1: Polymorfismi

*/