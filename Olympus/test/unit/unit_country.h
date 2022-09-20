#ifndef UNIT_COUNTRY_H
#define UNIT_COUNTRY_H

#include "utility_unit.h"

void unit_Country_constructor(); 
void unit_Country_destructor();

void unit_Country_getName();
void unit_Country_setName();

void unit_Country_getContinent();
void unit_Country_setContinent();

void unit_Country_createModality();      
void unit_Country_removeModality(); 
void unit_Country_returnModality(); 
void unit_Country_getModalities(); 

void unit_Country_getGoldMedals();    
void unit_Country_getSilverMedals();  
void unit_Country_getBronzeMedals();    


void run_unit_tests_Country();

#endif //!UNIT_COUNTRY_H