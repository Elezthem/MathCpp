#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;



int main() {
	setlocale(LC_ALL, "RU");

	string str1 = "Hell ";
	string str2 = "Batya";

	//str1.append(str2);
	str1.pop_back();
	str1.push_back('!!!');
	str1.resize(10);
	cout << str1 << " - " << str1.length() << endl;

	cout << pow(2, 4) << endl;
	cout << abs(-3) << endl;
	cout << sin(11) << endl;
	cout << cos(111) << endl;
	cout << sqrt(111) << endl;
	cout << ceil(2.77f) << endl;
	cout << floor(0.77f) << endl;
	cout << round(2.77f) << endl;

	return 0;
}