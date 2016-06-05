#include "Base.h"
#include "Situation.h"

std::map<std::string, Situation> Base::situationMap(void) {
	return _situationMap;
}

void Base::getSituation(const std::string& id,
		std::map<std::string, Situation>::iterator& it) {

	it = _situationMap.find(id);
	if (it != _situationMap.end()) {

		//&ptS = (it->second);

	} else {
		Situation s;
		s.initialise();
		s.setId(id);

		it =
				(_situationMap.insert(std::pair<std::string, Situation>(id, s))).first;
		//&ptS = &(it->second);

	}

}

Situation& Base::getSituation2(const std::string& id) {
	//l'opérateur [] recupere l'element ou en construit un avec le constructeur
	return _situationMap[id];

}

Base::Base() {

}

Base::~Base() {

}
