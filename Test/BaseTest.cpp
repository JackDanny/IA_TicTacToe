#include <cppunit/config/SourcePrefix.h>

#include "BaseTest.h"
#include "../Base.h" //TODO inclure le repertoire src
#include "../Situation.h" //TODO inclure le repertoire src
#include <iostream>
#include <map>

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION (BaseTest);

// Some code to be tested.
/*void BaseTest::simpleTest() {
 CPPUNIT_ASSERT_EQUAL(1, 2);
 }*/

void BaseTest::testConstructor() {
	std::cout << "\nBaseTest::testConstructor -->" << std::endl;
	Base b;
	Situation s("0");
	//b.getSituation("0", &s);

	std::map<std::string, Situation*> mSituation = b.situationMap();

	CPPUNIT_ASSERT(mSituation.empty());

	CPPUNIT_ASSERT(s.getId() == "0");

	std::cout << "<--" << std::endl;
}
;

void BaseTest::testGetSituation() {
	std::cout << "\nBaseTest::getSituation -->" << std::endl;
	Base b;
	Situation s;

	b.getSituation("0", &s);

	CPPUNIT_ASSERT(s.getId() == "0");

	std::map<std::string, Situation*> mSituation = b.situationMap();

	CPPUNIT_ASSERT(mSituation.size() == 1);

	std::cout << "<--" << std::endl;
}
;
