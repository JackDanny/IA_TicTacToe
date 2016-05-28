#include "Test/BaseTest.h"
#include "Situation.h"
#include "Base.h"
#include "Grille.h"
#include "FonctionStandard.h"

#include <cppunit/TestSuite.h>
#include <cppunit/TestResult.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char* argv[]) {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	cout << "hey!ho" << endl;

	//CppUnit::TextUi::TestRunner runner;
	//runner.addTest(new BaseTest());

	//runner.run();

//	CppUnit::TextUi::TestRunner runner;
//	runner.addTest(BaseTest::suite());
//	runner.run();
	int a = 2;

	const std::string& sTest = "-t";

	cout << "argv[1]: " << argv[1] << endl;

	if (sTest.compare(argv[1]) == 0) {

		cout << "debug 1" << endl;

		CPPUNIT_NS::TextUi::TestRunner runner;   //the runner
		// Get the top level suite from the registry
		CPPUNIT_NS::Test* suite =
				CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest();
		// Adds the test to the list of test to run
		runner.addTest(suite);
		// Run the test.
		bool wasSucessful = runner.run();
		// Return error code 1 if the one of test failed.
		return wasSucessful ? 0 : 1;
	}
	Base bSituation;

	//pointeur sur une situation

	//Situation* s = new Situation("000000000");

	//bSituation.getSituation(0, s);

	//std::string id = "012210012";

	//std::vector<std::string> vCoups = g.calculeCoupsPossible('1');

	Situation* s = new Situation("0000000001");

	Grille g("0000000001");
	//boucle

	char premierJoueur = '1';

	char jActu;

	std::string id;

	while (true) {

		id = "0000000000";

		g.setId(id);

		jActu = premierJoueur;

		while (g.joueurGagnant() == '0') {

			if (jActu == '1') {

				s = g.meilleurCoup(jActu, bSituation);

				id = s->getId();

				afficheGrille(id);

				g.setId(s->getId());

				std::cout << "coup : " << id << std::endl;

				jActu = '2';
			} else {
				std::string coup;

				std::cout << "quel coup jouer?" << std::endl;

				std::cin >> coup;

				std::cout << coup << std::endl;

				s = g.joueCoup(coup, jActu, bSituation);

				id = s->getId();

				afficheGrille(id);

				g.setId(id);

				std::cout << "coup : " << id << std::endl;

				jActu = '1';
			}

			//stockage dans coupsJoues
		}

		std::cout << "le joueur " << g.joueurGagnant() << " a gagne!"
				<< std::endl;

		if (premierJoueur == '1') {
			premierJoueur = '2';
		} else {
			premierJoueur = '1';
		}

	}
//  char res = g.getCase(0, 0);
//  res = g.getCase(0, 1);
//  res = g.getCase(0, 2);
//  res = g.getCase(1, 0);
//  res = g.getCase(1, 1);
//  res = g.getCase(1, 2);
//  res = g.getCase(2, 0);
//  res = g.getCase(2, 1);
//  res = g.getCase(2, 2);

	return 0;
}
