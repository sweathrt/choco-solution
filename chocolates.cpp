#include <iostream>

using namespace std;

int getDollars() {
	cout << "Please, enter the amount of $ you have:\n";
	int dollars = 0; cin >> dollars;

	return (dollars >= 0) ? dollars : 0;
}

// Get an amount of chocos for covers
int getChocolates(int n) {
	if (n < 3) {
		return 0;
	}
	return n / 3 + getChocolates(n / 3 + n % 3);
}

// Just add n dollars to the amount of chocos
int solution(int n) {
	return n + getChocolates(n);
}

int main() {
	int dollars = getDollars();
	int amountOfChocos = solution(dollars);
	cout << "Amount of chocolates: " << amountOfChocos;
	return 0;
}