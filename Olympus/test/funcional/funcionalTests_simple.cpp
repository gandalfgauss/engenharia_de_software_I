#include "funcionalTests_simple.h"

void runSimpleTests()
{
    System* sys2 = System::createSystem("system2");

    assert(sys2->createCountry("brasil", "america"));
    assert(sys2->createModality("golf"));
    
    assert(sys2->returnCountry("brasil")->createModality("golf"));
    assert(sys2->returnCountry("brasil")->returnModality("golf")->createMedal("Mario", 2));

    assert(sys2->returnCountry("brasil")->returnModality("golf")->getSilverMedals() ==1);
    assert(sys2->returnCountry("brasil")->getSilverMedals() == 1);

    assert(sys2->returnCountry("brasil")->returnModality("golf")->removeMedal("Mario"));
    assert(sys2->returnCountry("brasil")->returnModality("golf")->getSilverMedals() ==0);

    assert(sys2->returnCountry("brasil")->returnModality("golf")->createMedal("Mario", 2));
    assert(sys2->returnCountry("brasil")->getSilverMedals() == 1);
    assert(sys2->returnCountry("brasil")->removeModality("golf"));
    assert(sys2->returnCountry("brasil")->getSilverMedals() == 0);

    assert(sys2->returnCountry("brasil")->createModality("golf"));
    assert(sys2->returnCountry("brasil")->returnModality("golf")->createMedal("Mario", 2));
    assert(sys2->returnCountry("brasil")->getSilverMedals() == 1);

    assert(sys2->removeModality("golf"));
    assert(sys2->returnCountry("brasil")->getSilverMedals() == 0);

    delete sys2;

}