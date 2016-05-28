#include "Base.h"
#include "Situation.h"

std::map<std::string, Situation*> Base::situationMap(void) {
	return _situationMap;
}

void Base::getSituation(const std::string& id, Situation* adS) {

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
