#pragma once
class ChocoShop
{
private:
    static int chocoPrice;     // the price of a chocolate (in money currency)
    static int wrapsForChoco; // amount of covers to get one free chocolate
public:
    // getter
    int getPrice();
    int getCoversForChoco();

    // setter
    static void setPrice(int);
    static void setCoversForChoco(int);

    // getChocolates
    static int getFreeChocos(int);
    static int getMaxChocos(Customer);
    //static int getDesiredChocos(Customer);
};

class Customer
{
private:
    int money,               // the number of money a customer already has
        wraps,               // the number of wraps a customer already has
        desiredChocosNumber; // the number of chocolates a customer wants to buy
public:
    // constructors
    Customer(int money = 0, int wraps = 0, int desiredChocosNumber = 0);
    Customer(int money, int wraps);
    Customer(int money);

    // getters
    int getMoney();
    int getWraps();
    int getDesiredChocosNumber();
    Customer& getCustomer();

    // setters
    void setMoney(int);
    void setWraps(int);
    void setDesiredChocosNumber(int);
    void setCustomer(int, int, int);
};
