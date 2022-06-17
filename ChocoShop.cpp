#include "ChocoShop.h"

int ChocoShop::chocoPrice = 1;
int ChocoShop::wrapsForChoco = 3;

int ChocoShop::getPrice() { return ChocoShop::chocoPrice; }

int ChocoShop::getCoversForChoco() { return ChocoShop::wrapsForChoco; }

void ChocoShop::setPrice(int chocoPrice) { ChocoShop::chocoPrice = chocoPrice; }

void ChocoShop::setCoversForChoco(int wraps) { ChocoShop::wrapsForChoco = wraps; }

int ChocoShop::getFreeChocos(int wraps) {
	if (wraps < wrapsForChoco) {
		
		return 0;
	}
	return wraps / wrapsForChoco + getFreeChocos(wraps / wrapsForChoco + wraps % wrapsForChoco);
}

int ChocoShop::getMaxChocos(Customer cs) {
	int chocosForMoney = cs.getMoney() / chocoPrice;
	int chocosForWraps = getFreeChocos(chocosForMoney + cs.getWraps());

	// change customer's parameters
	cs.setMoney(cs.getMoney() % chocoPrice);
	cs.setWraps(chocosForWraps % wrapsForChoco);
	
	// total amount of chocos
	return chocosForMoney + chocosForWraps;
}

// int ChocoShop::getDesiredChocos(int money, int wraps, int desiredChocosNumber) {
// 	if (money / chocoPrice >= desiredChocosNumber) {
// 		return desiredChocosNumber;
// 	}
// }
