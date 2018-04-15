#include <iostream>

using namespace std;

class year {
public:
	void display() {
		cout << "year" << endl;
	};
};
class months : public year {
public:
	void display() {
		year::display();

		cout << "a year has 12 months" << endl;
	};
};
class weeks : public months {
public:
	void display() {
		months::display();

		cout << "a year has 52 weeks" << endl;
	};
};
class days : public weeks {
public:
	void display() {
		weeks::display();

		cout << "a normal year has 365 days & ";
		cout << "a leap year has 366 days" << endl;
	};
};

int main() {
	days d;
	d.display();

	return 0;
}
