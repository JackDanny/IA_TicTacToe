#include <cppunit/config/SourcePrefix.h>

#include "BaseTest.h"
#include "../Base.h" //TODO inclure le repertoire src
#include "../Situation.h" //TODO inclure le repertoire src
#include <iostream>
#include <map>

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(BaseTest);

// Some code to be tested.
/*void BaseTest::simpleTest() {
 CPPUNIT_ASSERT_EQUAL(1, 2);
 }*/

void BaseTest::testConstructor() {
	std::cout << "\nBaseTest::testConstructor -->" << std::endl;
	Base b;
	Situation s("0");
	//b.getSituation("0", &s);

	std::map<std::string, Situation> mSituation = b.situationMap();

	CPPUNIT_ASSERT(mSituation.empty());

	CPPUNIT_ASSERT(s.getId() == "0");

	std::cout << "<--" << std::endl;
}
;

void BaseTest::testGetSituation() {
	std::cout << "\nBaseTest::getSituation -->" << std::endl;

	Base b;
	Situation s;
	std::cout << "debug" << std::endl;
	//s = b.getSituation("0");

	std::map<std::string, Situation>::iterator it;

	//Situation* ps = &(it->second);

	std::cout << "adresse it: " << &it << std::endl;
	std::cout << "valeur it: " << it->second.getNbGagne() << std::endl;

	b.getSituation("0", it);

	std::cout << "adresse it: " << &it << std::endl;
	std::cout << "valeur it: " << it->second.getNbGagne() << std::endl;

	it->second.setNbGagne(3);

	//Situation* ps = &(it.second);
	//ps->setNbGagne(3);

	std::cout << "adresse it: " << &it << std::endl;
	std::cout << "valeur it: " << it->second.getNbGagne() << std::endl;

	//Situation s2;
	//std::cout << "adresse s2: " << &s2 << std::endl;
	//std::cout << "valeur s2: " << (s2.getNbGagne()) << std::endl;

	std::map<std::string, Situation>::iterator it2;

	b.getSituation("0", it2);

	std::cout << "adresse it2: " << &it2 << std::endl;
	std::cout << "valeur s2: " << it2->second.getNbGagne() << std::endl;

	/*std::cout << "b.getSituation(\"0\"): " << s2.getNbGagne() << std::endl;

	 CPPUNIT_ASSERT(s.getId() == "0");

	 std::map<std::string, Situation> mSituation = b.situationMap();

	 CPPUNIT_ASSERT(mSituation.size() == 1);

	 b.getSituation("1", s);

	 CPPUNIT_ASSERT(b.situationMap().size() == 2);
	 CPPUNIT_ASSERT(s.getId() == "1");

	 CPPUNIT_ASSERT(s.getNbGagne() == 0);

	 s.setNbGagne(1);
	 CPPUNIT_ASSERT(s.getNbGagne() == 1);

	 b.getSituation("0", s);
	 CPPUNIT_ASSERT(b.situationMap().size() == 2);
	 CPPUNIT_ASSERT(s.getId() == "0");
	 CPPUNIT_ASSERT(s.getNbGagne() == 0);

	 b.getSituation("1", s);
	 CPPUNIT_ASSERT(b.situationMap().size() == 2);
	 CPPUNIT_ASSERT(s.getId() == "1");
	 CPPUNIT_ASSERT(s.getNbGagne() == 1);

	 //std::map<std::string, Situation>* pmSituation = b.situationMap();

	 std::cout << "<--" << std::endl;*/
}
;

void BaseTest::testGetSituation2() {
	std::cout << "\nBaseTest::getSituation2 -->" << std::endl;

	Base b;
	//Situation& s;
	std::cout << "debug" << std::endl;
	//s = b.getSituation("0");

	//std::map<std::string, Situation>::iterator it;

	//Situation* ps = &(it->second);
	/*
	 std::cout << "adresse s: " << &s << std::endl;
	 std::cout << "valeur s: " << s.getNbGagne() << std::endl;
	 std::cout << "longueur map: " << b.situationMap().size() << std::endl;
	 */
	Situation& s = b.getSituation2("0");

	std::cout << "adresse s: " << &s << std::endl;
	std::cout << "valeur s: " << s.getNbGagne() << std::endl;
	std::cout << "longueur map: " << b.situationMap().size() << std::endl;

	s.setNbGagne(3);

	//Situation* ps = &(it.second);
	//ps->setNbGagne(3);

	std::cout << "adresse s: " << &s << std::endl;
	std::cout << "valeur s: " << s.getNbGagne() << std::endl;
	std::cout << "longueur map: " << b.situationMap().size() << std::endl;

	//Situation s2;
	//std::cout << "adresse s2: " << &s2 << std::endl;
	//std::cout << "valeur s2: " << (s2.getNbGagne()) << std::endl;

	//std::map<std::string, Situation>::iterator it2;

	//Situation& s2;

	Situation& s2 = b.getSituation2("0");

	std::cout << "adresse s2: " << &s2 << std::endl;
	std::cout << "valeur s2: " << s2.getNbGagne() << std::endl;
	std::cout << "longueur map: " << b.situationMap().size() << std::endl;

	s2 = b.getSituation2("1");

	std::cout << "adresse s2: " << &s2 << std::endl;
	std::cout << "valeur s2: " << s2.getNbGagne() << std::endl;
	std::cout << "longueur map: " << b.situationMap().size() << std::endl;

	/*std::cout << "b.getSituation(\"0\"): " << s2.getNbGagne() << std::endl;

	 CPPUNIT_ASSERT(s.getId() == "0");

	 std::map<std::string, Situation> mSituation = b.situationMap();

	 CPPUNIT_ASSERT(mSituation.size() == 1);

	 b.getSituation("1", s);

	 CPPUNIT_ASSERT(b.situationMap().size() == 2);
	 CPPUNIT_ASSERT(s.getId() == "1");

	 CPPUNIT_ASSERT(s.getNbGagne() == 0);

	 s.setNbGagne(1);
	 CPPUNIT_ASSERT(s.getNbGagne() == 1);

	 b.getSituation("0", s);
	 CPPUNIT_ASSERT(b.situationMap().size() == 2);
	 CPPUNIT_ASSERT(s.getId() == "0");
	 CPPUNIT_ASSERT(s.getNbGagne() == 0);

	 b.getSituation("1", s);
	 CPPUNIT_ASSERT(b.situationMap().size() == 2);
	 CPPUNIT_ASSERT(s.getId() == "1");
	 CPPUNIT_ASSERT(s.getNbGagne() == 1);

	 //std::map<std::string, Situation>* pmSituation = b.situationMap();
	 */
	std::cout << "<--" << std::endl;
}
;

