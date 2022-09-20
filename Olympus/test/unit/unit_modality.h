#ifndef UNIT_MODALITY_H
#define UNIT_MODALITY_H

#include "utility_unit.h"

void unit_Modality_constructor(); 
void unit_Modality_destructor();

void unit_Modality_getName();
void unit_Modality_setName();


void unit_Modality_createMedal();      
void unit_Modality_removeMedal(); 
void unit_Modality_returnMedal(); 
void unit_Modality_getMedals(); 

void unit_Modality_getGoldMedals();    
void unit_Modality_getSilverMedals();  
void unit_Modality_getBronzeMedals();    


void run_unit_tests_Modality();

#endif //!UNIT_MODALITY_H