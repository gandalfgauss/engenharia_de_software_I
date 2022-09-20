#include "unit_system.h"

void unit_System_constructor()
{
    SystemImpl* sys1 = new SystemImpl();
    assert(sys1->getName() == "adm");

    SystemImpl* sys2 = new SystemImpl("system2");
    assert(sys2->getName() == "system2");

    SystemImpl* sys3 = new SystemImpl();
    SystemImpl* sys4= new SystemImpl(sys2);

    *sys3 = *sys2;

    sys3->setName("systemFinal");
    sys4->setName("systemFinal2");

    assert(sys2->getName() == "system2");
    assert(sys3->getName() == "systemFinal");
    assert(sys4->getName() == "systemFinal2");

    delete sys1;
    delete sys2;
    delete sys3;
    delete sys4;
}

void unit_System_destructor(){}

void unit_System_getName()
{
    SystemImpl* sys1 = new SystemImpl();
    assert(sys1->getName() == "adm");
    delete sys1;
}

void unit_System_setName()
{
    SystemImpl* sys1 = new SystemImpl();
    assert(!sys1->setName(""));
    assert(sys1->getName() == "adm");

    sys1->setName("system");

    assert(sys1->getName() == "system");

    delete sys1;
}

void unit_System_createModality()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->createModality("futebol"));
    assert(sys1->getModalities().size() ==1);
    delete sys1;
}

void unit_System_removeModality()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->createModality("futebol"));
    assert(sys1->removeModality("futebol"));
    assert(sys1->getModalities().size() ==0);
    delete sys1;
}

void unit_System_returnModality()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->createModality("futebol"));
    assert(sys1->returnModality("futebol"));
    assert(sys1->getModalities().size() ==1);
    delete sys1;
}

void unit_System_getModalities()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->createModality("futebol"));
    assert(sys1->getModalities().size() ==1);
    delete sys1;
}

void unit_System_createLogin()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->createLogin("admin", "1234"));
    assert(sys1->getLogins().size() ==1);
    delete sys1;
}

void unit_System_removeLogin()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->createLogin("admin", "1234"));
    assert(sys1->removeLogin("admin"));
    assert(sys1->getLogins().size() ==0);
    delete sys1;
}

void unit_System_returnLogin()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->createLogin("admin", "1234"));
    assert(sys1->returnLogin("admin"));
    assert(sys1->getLogins().size() ==1);
    delete sys1;
}

void unit_System_getLogins()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->getLogins().size() ==0);
    delete sys1;
}

void unit_System_createCountry()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->createCountry("brasil", "america"));
    assert(sys1->getCountries().size() ==1);
    delete sys1;
}

void unit_System_removeCountry()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->createCountry("brasil", "america"));
    assert(sys1->removeCountry("brasil"));
    assert(sys1->getModalities().size() ==0);
    delete sys1;
}

void unit_System_returnCountry()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->createCountry("brasil", "america"));
    assert(sys1->returnCountry("brasil"));
    assert(sys1->getCountries().size() ==1);
    delete sys1;
}

void unit_System_getCountries()
{
    SystemImpl* sys1 = new SystemImpl();

    assert(sys1->createCountry("brasil", "america"));
    assert(sys1->getCountries().size() ==1);
    delete sys1;
}

void unit_System_createSystem()
{
  System* sys1 = System::createSystem("System1");
  assert(sys1->getName() == "System1");
  delete sys1;

}

void unit_System_deleteSystem()
{
  System* sys1 = System::createSystem("System1");
  System:: deleteSystem("System1");
  assert(sys1 != nullptr);

}

void unit_System_Login()
{
  System* sys1 = System::createSystem("System1");

  sys1->createLogin("user", "123");

  assert(sys1->login("user", "123"));
  assert(!sys1->login("user" , "12"));

  delete sys1;

}


void run_unit_tests_System()
{
    unit_System_constructor(); 
    unit_System_destructor();

    unit_System_getName();
    unit_System_setName(); 

    unit_System_createModality();      
    unit_System_removeModality(); 
    unit_System_returnModality(); 
    unit_System_getModalities(); 

    unit_System_createLogin();      
    unit_System_removeLogin(); 
    unit_System_returnLogin(); 
    unit_System_getLogins();

    unit_System_createCountry();      
    unit_System_removeCountry(); 
    unit_System_returnCountry(); 
    unit_System_getCountries(); 

    unit_System_createSystem(); 
    unit_System_Login();
    unit_System_deleteSystem(); 
   
    
}