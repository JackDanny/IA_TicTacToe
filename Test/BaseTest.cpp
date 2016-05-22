#include "BaseTest.h"
#include "../Base.h" //TODO inclure le repertoire src
#include "../Situation.h" //TODO inclure le repertoire src
#include <iostream>

void BaseTest::runTest() {
	std::cout << "hey" << std::endl;
	Base b;
	Situation s("0");

	//b.getSituation("0", &s);

	CPPUNIT_ASSERT(s.getId() == "0");
	std::cout << "hey2" << std::endl;

}

