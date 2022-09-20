#include "unit_country.h"

void unit_Country_constructor()
{
    CountryImpl* c1 = new CountryImpl();
    assert(c1->getName() == "adm");

    CountryImpl* c2 = new CountryImpl("Country2", "America2");
    assert(c2->getName() == "Country2");

    CountryImpl* c3 = new CountryImpl();
    CountryImpl* c4= new CountryImpl(c2);

    *c3 = *c2;

    c3->setName("CountryFinal");
    c4->setName("CountryFinal2");

    assert(c2->getName() == "Country2");
    assert(c3->getName() == "CountryFinal");
    assert(c4->getName() == "CountryFinal2");

    delete c1;
    delete c2;
    delete c3;
    delete c4;
}

void unit_Country_destructor(){}

void unit_Country_getName()
{
    CountryImpl* c1 = new CountryImpl();
    assert(c1->getName() == "adm");
    delete c1;
}

void unit_Country_setName()
{
    CountryImpl* c1 = new CountryImpl();
    assert(!c1->setName(""));
    assert(c1->getName() == "adm");

    c1->setName("Country");

    assert(c1->getName() == "Country");

    delete c1;
}

void unit_Country_getContinent()
{
    CountryImpl* c1 = new CountryImpl();
    assert(c1->getContinent() == "adm");
    delete c1;
}

void unit_Country_setContinent()
{
    CountryImpl* c1 = new CountryImpl();
    assert(!c1->setContinent(""));
    assert(c1->getContinent() == "adm");

    c1->setContinent("Country");

    assert(c1->getContinent() == "Country");

    delete c1;
}


void unit_Country_createModality()
{
    CountryImpl* c1 = new CountryImpl();

    assert(c1->createModality("futebol"));
    assert(c1->getModalities().size() ==1);
    delete c1;
}

void unit_Country_removeModality()
{
    CountryImpl* c1 = new CountryImpl();

    assert(c1->createModality("futebol"));
    assert(c1->removeModality("futebol"));
    assert(c1->getModalities().size() ==0);
    delete c1;
}

void unit_Country_returnModality()
{
    CountryImpl* c1 = new CountryImpl();

    assert(c1->createModality("futebol"));
    assert(c1->returnModality("futebol"));
    assert(c1->getModalities().size() ==1);
    delete c1;
}

void unit_Country_getModalities()
{
    CountryImpl* c1 = new CountryImpl();

    assert(c1->createModality("futebol"));
    assert(c1->getModalities().size() ==1);
    delete c1;
}


void unit_Country_getGoldMedals()
{
    CountryImpl* c1 = new CountryImpl();

    assert(c1->createModality("futebol"));
    assert(c1->returnModality("futebol")->createMedal("Mario",1));
    assert(c1->getGoldMedals() ==1);
    delete c1;
}

void unit_Country_getSilverMedals()
{
    CountryImpl* c1 = new CountryImpl();

    assert(c1->createModality("futebol"));
    assert(c1->returnModality("futebol")->createMedal("Mario",2));
    assert(c1->getSilverMedals() ==1);
    delete c1;
}

void unit_Country_getBronzeMedals()
{
    CountryImpl* c1 = new CountryImpl();

    assert(c1->createModality("futebol"));
    assert(c1->returnModality("futebol")->createMedal("Mario",3));
    assert(c1->getBronzeMedals() ==1);
    delete c1;
}

void run_unit_tests_Country()
{
    unit_Country_constructor(); 
    unit_Country_destructor();

    unit_Country_getName();
    unit_Country_setName();

    unit_Country_getContinent();
    unit_Country_setContinent();

    unit_Country_createModality();      
    unit_Country_removeModality(); 
    unit_Country_returnModality(); 
    unit_Country_getModalities(); 

    unit_Country_getGoldMedals();    
    unit_Country_getSilverMedals();  
    unit_Country_getBronzeMedals();  
}