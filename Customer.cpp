#include "ChocoShop.h"

// Buying nothing or being very specific while shopping
Customer::Customer(int money, int wraps, int desiredChocosNumber) :
    money(money), wraps(wraps), desiredChocosNumber(desiredChocosNumber) {}

// Buying as much chocolates as we can having money and wraps
Customer::Customer(int money, int wraps) : Customer::Customer(money, wraps, 0) {}

// Buying as much chocolates as we can having only money
Customer::Customer(int money) : Customer::Customer(money, 0, 0) {}

int Customer::getMoney() { return this->money; }

int Customer::getWraps() { return this->wraps; }

int Customer::getDesiredChocosNumber() { return this->desiredChocosNumber; }

// Get all info necessary info a bout the customer
Customer& Customer::getCustomer() {
    Customer customerCopy(*this);
    return customerCopy;
}

void Customer::setMoney(int money) { this->money = money; }

void Customer::setWraps(int wraps) { this->wraps = wraps; }

void Customer::setDesiredChocosNumber(int desiredChocosNumber) { this->desiredChocosNumber = desiredChocosNumber; }

void Customer::setCustomer(int money, int wraps, int desiredChocosNumber) {
    setMoney(money); setWraps(wraps); setDesiredChocosNumber(desiredChocosNumber);
}
