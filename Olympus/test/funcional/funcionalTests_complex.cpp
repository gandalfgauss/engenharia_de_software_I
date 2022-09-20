#include "funcionalTests_complex.h"

void runComplexTests()
{
    System* sys1 = System::createSystem("system");

    assert(sys1->getName() == "system");
    assert(sys1->getCountries().size() == 0);
    assert(sys1->getModalities().size() == 0);
    assert(sys1->getLogins().size() == 0);

    assert(!sys1->removeCountry("brazil"));
    assert(!sys1->removeLogin("gauss"));
    assert(!sys1->removeModality("futebol"));

    assert(!sys1->returnCountry("brazil"));
    assert(sys1->returnLogin("gauss") == nullptr);
    assert(!sys1->returnModality("futebol"));


    assert(sys1->createLogin("gauss", "123"));
    assert(sys1->createLogin("gauss2", "1234"));
    assert(sys1->getLogins().size() == 2);
    assert(sys1->returnLogin("gauss") != nullptr);
    assert(sys1->removeLogin("gauss2"));
    assert(!sys1->createLogin("gauss", "x"));
    assert(sys1->createLogin("gauss2", "1234"));
   

    assert(sys1->createCountry("brasil", "america"));
    assert(sys1->getCountries().size() == 1);
    assert(sys1->returnCountry("brasil") != nullptr);
    assert(sys1->removeCountry("brasil"));
    assert(sys1->createCountry("brasil", "america"));
    assert(sys1->createCountry("argentina", "america"));
    assert(!sys1->createCountry("brasil", "america"));
    assert(sys1->removeCountry("argentina"));
    assert(sys1->returnCountry("brasil") != nullptr);
    assert(sys1->returnCountry("argentina") == nullptr);

    assert(sys1->createModality("futebol"));
    assert(sys1->getModalities().size() == 1);
    assert(sys1->returnModality("futebol") != nullptr);
    assert(sys1->removeModality("futebol"));
    assert(sys1->createModality("futebol"));
    assert(!sys1->createModality("futebol"));

    Country* c1 = sys1->returnCountry("brasil");

    assert(c1->getName() == "brasil");
    assert(c1->getContinent() == "america");

    assert(c1->createModality("futebol"));
    assert(c1->returnModality("futebol")->createMedal("gabriel medina", 1));
    assert(c1->returnModality("futebol")->createMedal("gabriel medina2", 2));
    assert(c1->returnModality("futebol")->createMedal("gabriel medina3", 3));
    assert(c1->getGoldMedals() == 1);
    assert(c1->getSilverMedals() == 1);
    assert(c1->getBronzeMedals() == 1);

    assert(c1->createModality("volei"));
    assert(c1->returnModality("volei")->createMedal("lucarelli", 1));
    assert(c1->getGoldMedals() == 2);
    assert(c1->returnModality("volei")->getGoldMedals() ==1);

    assert(sys1->removeModality("futebol"));
    assert(c1->getGoldMedals() == 1);

    assert(c1->returnModality("volei")->removeMedal("lucarelli"));
    assert(c1->getGoldMedals() == 0);
    assert(c1->getSilverMedals() == 0);
    assert(c1->getBronzeMedals() == 0);
    
    delete sys1;
}