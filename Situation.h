#ifndef SITUATION_H_
#define SITUATION_H_

#include <iostream>
#include <vector>
#include <array>

class Situation {
public:
	Situation() {
		setNbGagne(0);
		setNbPerdu(0);
	}
	;
	Situation(std::string id); //TODO utile??
	~Situation();

private:
	std::string _id;
	int _nbGagne;
	int _nbPerdu;

public:
	void setId(std::string id);
	void setNbGagne(int nbGagne);
	void setNbPerdu(int nbPerdu);

	void initialise();
	int score();

	std::string getId() {
		return _id;
	}
	int getNbGagne() {
		return _nbGagne;
	}

};

#endif /* SITUATION_H_ */
