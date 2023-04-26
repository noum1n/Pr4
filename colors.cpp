#include <iostream>
#include <string>

class TPen {
public:
	std::string Fcolor;
	TPen(std::string color) {
		Fcolor = color;
	};
};

	int main() {
		TPen pen("FFFFFF");
		std::cout <<" Colour = "<< pen.Fcolor<<std::endl;
	
	return 0;
}
