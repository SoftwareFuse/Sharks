#include <iostream>
#include "sharks.hpp"

Shark::Shark(std::string s, std::string h, std::string a, std::string r, std::string k) {
	name = s;
	size = h;
	area = a;
	location = r;
	food = k;
}
void Shark::printName() {
	std::cout << name << "\n";
}
void Shark::printSize() {
	std::cout << "I am a " << size << " shark.\n";
}
void Shark::printArea() {
	std::cout << "I swim in " << area << " waters.\n";
}
void Shark::printLocation() {
	std::cout << "I live in " << location << ".\n";
}
void Shark::printFood() {
	std::cout << "I like to eat " << food << "!\n";
}
void Shark::splash() {
	std::cout << "🦈 Splash! 🦈\n";
}
void Shark::showMethods() {
	std::cout << "\n\n";
	Shark::splash();
	Shark::printName();
	Shark::printSize();
	Shark::printArea();
	Shark::printLocation();
	Shark::printFood();
	Shark::splash();
	std::cout << "\n\n";
}