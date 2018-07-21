//Simple program that allows user to enter name program returns string containing name
#include<iostream>
using namespace std;

string read() {

	string name;

	cout << "Enter your name: " << endl;
	cin >> name;
	cout << endl;

	return name;
}

int main() {

	string userName;
	userName = read();

	cout << "Hello " << userName << "!\n";

	system("pause");

	return 0;

}