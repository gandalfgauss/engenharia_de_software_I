#include <iostream>
#include "funcional_tests.h"
#include "funcionalTests_simple.h"
#include "funcionalTests_complex.h"

using namespace std;

void runFuncionalTests()
{
	//--------------------------------------
	cout <<"\n\nRun Simple Test.";

	runSimpleTests();

	cout <<"\nEnd Simple Tests.\n";

	//--------------------------------------

	//--------------------------------------
	cout <<"\nRun Complex Tests.";

	runComplexTests();

	cout <<"\nEnd Complex Tests.\n";
	//--------------------------------------


}
