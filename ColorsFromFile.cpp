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
std::ifstream input("colors.txt");
	TPen pens[3];

	for (int i = 0; i < 3; i++) {
		int r, g, b;
		input >> r >> g >> b;
		pens[i].set(r, g, b);
	}
	input.close();

	for (int i = 0; i < 3; i++) {
		pens[i].get();
	}


	return 0;
}

