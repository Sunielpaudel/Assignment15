#include<iostream>
using namespace std;

void pattern();

int main() {

	pattern();

	return 0;
}

void pattern() {

	int row;
	cout << "Enter row" << endl;
	cin >> row;

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

}