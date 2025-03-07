#include <iostream>

int main() {
	int x; // declaration

	x = 5;

	int y = 6;
	
	int sum = x + y;

	std::cout << x << '\n';
	std::cout << y << '\n';

	std::cout << sum << '\n';

	
	// integer (whole number)
	int age = 21;
	int year = 2025;
	int days = 7.5; // this will only return 7 excluding the decimal value

	std::cout << days << '\n';


	// double (number including decimal)
	double price = 10.99;
	double gpa = 9.5;
	double temperature = 25.1;

	std::cout << temperature << '\n';

	// single character 
	char grade = 'A';
	char initial = 'B';
	// char initial = 'BC'; // overflow error
	char symbol = '$';

	std::cout << initial << '\n';

	// boolean (true or false)
	bool student = false;
	bool power = true;
	bool forSale = true;

	// string (objects that represents a sequence of text)
	//
	std::string name = "Dhairya";
	std::cout << name << '\n';


	return 0;
}
