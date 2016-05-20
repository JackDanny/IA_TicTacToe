#include <iostream>

void afficheGrille(std::string id) {

	for (int i = 0; i < 9; i = i + 3) {

		std::cout << id[i] << id[i + 1] << id[i + 2] << std::endl;
	}

	std::cout << std::endl;

}
