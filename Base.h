/*
 * Base.h
 *
 *  Created on: 11 mai 2016
 *      Author: veysseired
 */

#ifndef BASE_H_
#define BASE_H_

#include "Situation.h"
#include <map>

class Base {
public:
	Base();
	~Base();

private:
	std::map<std::string, Situation> _situationMap;

public:
	void getSituation(const std::string& id,std::map<std::string, Situation>::iterator& it);
	Situation& getSituation2(const std::string& id);

	std::map<std::string, Situation> situationMap(void);

};

#endif /* BASE_H_ */
