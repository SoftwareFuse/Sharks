class Shark {
	std::string name;
	std::string size;
	std::string location;
	std::string area;
	std::string food;

	public:
		Shark(std::string s, std::string h, std::string a, std::string r, std::string k);
		void splash();
		void printName();
		void printSize();
		void printLocation();
		void printArea();
		void printFood();
		void showMethods();
};