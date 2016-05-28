#ifndef TEST_BASETEST_H_
#define TEST_BASETEST_H_

//#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class BaseTest: public CPPUNIT_NS::TestFixture {
	CPPUNIT_TEST_SUITE (BaseTest);
	CPPUNIT_TEST (testConstructor);
	CPPUNIT_TEST (testGetSituation);

	CPPUNIT_TEST_SUITE_END()
	;

	//;
	//static CppUnit::Test *suite();

public:
	void testConstructor();
	void testGetSituation();

};

#endif /* TEST_BASETEST_H_ */
