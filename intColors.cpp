#include <iostream>
#include <string>

class TPen {
public:
	int Fcolor;
	std::string _color;
	TPen(std::string color) {
		_color = color;
		Fcolor = std::stoi(color, nullptr, 16);
	};
};

int main() {
	
	return 0;
}
