#include <iostream>
#include <fstream>
#include <string>

class TPen {
public:
	int Fcolor[3];

	void set(int r, int g, int b) {
		Fcolor[0] = r;
		Fcolor[1] = g;
		Fcolor[2] = b;
	}

void get() {
		std::cout << "	Color: " << Fcolor[0] << " " << Fcolor[1] << " " << Fcolor[2] << std::endl;
	}
};


int main() {


	return 0;
}

