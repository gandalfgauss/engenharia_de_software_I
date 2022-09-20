#include "unit_modality.h"

void unit_Modality_constructor()
{
    ModalityImpl* modality1 = new ModalityImpl();
    assert(modality1->getName() == "adm");

    ModalityImpl* modality2= new ModalityImpl("Modality2");
    assert(modality2->getName() == "Modality2");

    ModalityImpl* modality3 = new ModalityImpl();
    ModalityImpl* modality4= new ModalityImpl(modality2);

    *modality3 = *modality2;

    modality3->setName("ModalityFinal");
    modality4->setName("ModalityFinal2");

    assert(modality2->getName() == "Modality2");
    assert(modality3->getName() == "ModalityFinal");
    assert(modality4->getName() == "ModalityFinal2");

    delete modality1;
    delete modality2;
    delete modality3;
    delete modality4;
}

void unit_Modality_destructor(){}

void unit_Modality_getName()
{
    ModalityImpl* modality1 = new ModalityImpl();
    assert(modality1->getName() == "adm");
    delete modality1;
}

void unit_Modality_setName()
{
    ModalityImpl* modality1 = new ModalityImpl();
    assert(!modality1->setName(""));
    assert(modality1->getName() == "adm");

    modality1->setName("Modality");

    assert(modality1->getName() == "Modality");

    delete modality1;
}

void unit_Modality_createMedal()
{
    ModalityImpl* modality1 = new ModalityImpl();

    assert(modality1->createMedal("Mario", 1));
    assert(modality1->getMedals().size() ==1);
    delete modality1;
}

void unit_Modality_removeMedal()
{
    ModalityImpl* modality1 = new ModalityImpl();

    assert(modality1->createMedal("Mario", 1));
    assert(modality1->removeMedal("Mario"));
    assert(modality1->getMedals().size() ==0);
    delete modality1;
}

void unit_Modality_returnMedal()
{
    ModalityImpl* modality1 = new ModalityImpl();

    assert(modality1->createMedal("Mario", 1));
    assert(modality1->returnMedal("Mario"));
    assert(modality1->getMedals().size() ==1);
    delete modality1;
}

void unit_Modality_getMedals()
{
    ModalityImpl* modality1 = new ModalityImpl();

    assert(modality1->createMedal("Mario", 2));
    assert(modality1->getMedals().size() ==1);
    delete modality1;
}


void unit_Modality_getGoldMedals()
{
    ModalityImpl* modality1 = new ModalityImpl();

    assert(modality1->createMedal("Mario",1));
    assert(modality1->getGoldMedals() ==1);
    delete modality1;
}

void unit_Modality_getSilverMedals()
{
    ModalityImpl* modality1 = new ModalityImpl();

    assert(modality1->createMedal("Mario", 2));
    assert(modality1->getSilverMedals() ==1);
    delete modality1;
}

void unit_Modality_getBronzeMedals()
{
    ModalityImpl* modality1 = new ModalityImpl();

    assert(modality1->createMedal("Mario", 3));
    assert(modality1->getBronzeMedals() ==1);
    delete modality1;
}

void run_unit_tests_Modality()
{
    unit_Modality_constructor(); 
    unit_Modality_destructor();

    unit_Modality_getName();
    unit_Modality_setName();


    unit_Modality_createMedal();      
    unit_Modality_removeMedal(); 
    unit_Modality_returnMedal(); 
    unit_Modality_getMedals(); 

    unit_Modality_getGoldMedals();    
    unit_Modality_getSilverMedals();  
    unit_Modality_getBronzeMedals(); 
}