#ifndef SITUATION_H_
#define SITUATION_H_

#include <iostream>
#include <vector>
#include <array>

class Situation {
public:
	Situation(std::string id);
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

};

#endif /* SITUATION_H_ */
