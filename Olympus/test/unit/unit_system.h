#ifndef UNIT_SYSTEM_H
#define UNIT_SYSTEM_H

#include "utility_unit.h"

void unit_System_constructor(); 
void unit_System_destructor();

void unit_System_getName();
void unit_System_setName(); 

void unit_System_createModality();      
void unit_System_removeModality(); 
void unit_System_returnModality(); 
void unit_System_getModalities(); 

void unit_System_createLogin();      
void unit_System_removeLogin(); 
void unit_System_returnLogin(); 
void unit_System_getLogins();

void unit_System_createCountry();      
void unit_System_removeCountry(); 
void unit_System_returnCountry(); 
void unit_System_getCountries(); 

void unit_System_createSystem(); 
void unit_System_deleteSystem();
void unit_System_Login(); 

void run_unit_tests_System();




#endif //!UNIT_SYSTEM_H