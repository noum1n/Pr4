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

int main() {
ifstream fin("books.txt");
	if (!fin.is_open()) {
		cout << "Error opening file";
		return 1;
	}

	const int size = 5;
	TBook books[size];
	cout << " Before: " << endl;
	for (int i = 0; i < size; i++) {
		string name, author;
		unsigned int count;
		fin >> name >> author >> count;
		books[i].setName(name);
		books[i].setAuthor(author);
		books[i].setCount(count);
		cout << name << " " << author << " " << count << endl;
	}

	fin.close();

	sortByAuthor(books, size);
	cout << " After: " << endl;
	for (int i = 0; i < size; i++) {
		cout << books[i].getName() << " " << books[i].getAuthor() << " " << books[i].getCount() << endl;
	}

	return 0;
}


