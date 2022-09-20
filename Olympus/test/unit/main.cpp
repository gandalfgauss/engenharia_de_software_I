#include <iostream>

#include "unit_system.h"
#include "unit_country.h"
#include "unit_modality.h"
#include "unit_medal.h"
#include "unit_login.h"



int main() {

   	cout << "Start of unit tests !\n";

	cout << "\nBegin- Unit System\n";
	run_unit_tests_System();
    cout << "\nEnd- Unit System\n";

	
	cout << "\nBegin- Unit Country\n";
	//run_unit_tests_Country();
    cout << "\nEnd- Unit Country\n";


    cout << "\nBegin- Unit Modality\n";
	run_unit_tests_Modality();
    cout << "\nEnd- Unit Modality\n";

    cout << "\nBegin- Unit Medal\n";
	run_unit_tests_Medal();
    cout << "\nEnd- Unit Medal\n";

    cout << "\nBegin- Unit Login\n";
	run_unit_tests_Login();
    cout << "\nEnd- Unit Login\n";

	cout << "End of unit tests\n";

	return 0;
}