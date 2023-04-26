#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class TBook {
private:
	string Name;
	string Author;
	unsigned int Count;
public:
	void setName(string name) {
		Name = name;
	}

	void setAuthor(string author) {
		Author = author;
	}

	void setCount(unsigned int count) {
		Count = count;
	}

	string getName() const {
		return Name;
	}

	string getAuthor() const {
		return Author;
	}



