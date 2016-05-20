#include "Base.h"
#include "Situation.h"

void Base::getSituation(std::string id, Situation* adS) {

	std::map<std::string, Situation*>::iterator it;

	it = _situationMap.find(id);
	if (it != _situationMap.end()) {

		adS = it->second;

	} else {

		adS->initialise();
		adS->setId(id);
		_situationMap.insert(std::pair<std::string, Situation*>(id, adS));

	}

}

Base::Base() {

}

Base::~Base() {

}
