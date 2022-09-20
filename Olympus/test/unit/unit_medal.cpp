#include "unit_medal.h"

void unit_Medal_constructor()
{
    MedalImpl* medal1 = new MedalImpl();
    assert(medal1->getChampion() == "adm");

    MedalImpl* medal2= new MedalImpl("Medal2", 2);
    assert(medal2->getChampion() == "Medal2");
    assert(medal2->getValue() == 2);

    MedalImpl* medal3 = new MedalImpl();
    MedalImpl* medal4= new MedalImpl(medal2);

    *medal3 = *medal2;

    medal3->setChampion("MedalFinal");
    medal4->setChampion("MedalFinal2");

    assert(medal2->getChampion() == "Medal2");
    assert(medal3->getChampion() == "MedalFinal");
    assert(medal4->getChampion() == "MedalFinal2");

    delete medal1;
    delete medal2;
    delete medal3;
    delete medal4;
}

void unit_Medal_destructor(){}

void unit_Medal_getChampion()
{
    MedalImpl* medal1 = new MedalImpl();
    assert(medal1->getChampion() == "adm");
    delete medal1;
}

void unit_Medal_setChampion()
{
    MedalImpl* medal1 = new MedalImpl();
    assert(!medal1->setChampion(""));
    assert(medal1->getChampion() == "adm");

    medal1->setChampion("Medal");

    assert(medal1->getChampion() == "Medal");

    delete medal1;
}

void unit_Medal_getValue()
{
    MedalImpl* medal1 = new MedalImpl();
    assert(medal1->getValue() == 0);
    delete medal1;
}

void unit_Medal_setValue()
{
    MedalImpl* medal1 = new MedalImpl();
    assert(!medal1->setValue(4));
    assert(medal1->getValue() == 0);

    medal1->setValue(1);

    assert(medal1->getValue() == 1);

    delete medal1;
}



void run_unit_tests_Medal()
{
    unit_Medal_constructor(); 
    unit_Medal_destructor();
    unit_Medal_getChampion();
    unit_Medal_setChampion();
    unit_Medal_getValue();
    unit_Medal_setValue();

}