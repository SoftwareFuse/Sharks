#include <iostream>
#include "sharks.hpp"

int main() {



	Shark sharky("Sharky", "big", "deep", "mexico", "everything");
	sharky.showMethods();

	Shark gillsey("Gillsey", "smol", "shallow", "North America", "smol shrimp and fishes");
	gillsey.showMethods();

	Shark fluffy("Fluffy", "big", "deep", "places everywhere", "rays and big fishes");
	fluffy.showMethods();

	Shark stripeseys("Stripeseys", "big and smol", "shallow", "nice places", "crabs and smol fishes");
	stripeseys.showMethods();


	bool likeSharks;
	std::string likeSharksYesNo;

	std::cout << "do you like sharks? (yes, no)\n";
	std::cin >> likeSharksYesNo;

	if (likeSharksYesNo == "yes") {
		likeSharks = true;
	} else if (likeSharksYesNo == "no") {
		likeSharks = false;
	} else {
		std::cout << "that is not yes or no... try again please:";
		std::cin >> likeSharksYesNo;
	}



	while (!likeSharks) {
		std::cout << "\nsharks are legit.\n";
		std::cout << "since you don't like sharks, read this website: https://europe.oceana.org/en/importance-sharks-0\n";
		std::cout << "now do you like sharks? (yes, no)\n";
		std::cin >> likeSharksYesNo;
		if (likeSharksYesNo == "yes") {
			std::cout << "\nYay!!! you are a shark person!\n";
			std::cout << "You understand the importance of sharks!\n";
			std::cout << "Have a nice day!\n";

			break;
		}
	}

	if (likeSharks) {
		std::cout << "\nYay!!! you are a shark person!\n";
		std::cout << "You understand the importance of sharks!\n";
		std::cout << "Have a nice day!\n";
	}




}