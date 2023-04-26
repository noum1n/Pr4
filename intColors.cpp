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
	TPen pen("FFFFFF");
	std::cout << "  Color: #" << pen._color << std::endl;
	std::cout << "  Color in RGB format: "
		<< (pen.Fcolor >> 16) << " "
		<< ((pen.Fcolor >> 8) & 0xFF) << " "
		<< (pen.Fcolor & 0xFF) << std::endl;
	return 0;
}
