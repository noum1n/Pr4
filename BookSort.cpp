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

	unsigned int getCount() const {
		return Count;
	}
};

void sortByAuthor(TBook books[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (books[j].getAuthor() > books[j + 1].getAuthor()) {
				TBook temp = books[j];
				books[j] = books[j + 1];
				books[j + 1] = temp;
			}
		}
	}
}



