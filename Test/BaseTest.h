/*
 * BaseTest.h
 *
 *  Created on: 22 mai 2016
 *      Author: Wedge
 */

#ifndef TEST_BASETEST_H_
#define TEST_BASETEST_H_

#include <cppunit/TestCase.h>

class BaseTest: public CppUnit::TestCase {

public:
	BaseTest() {

	};
	virtual ~BaseTest() {

	};

	void runTest();

};

#endif /* TEST_BASETEST_H_ */
