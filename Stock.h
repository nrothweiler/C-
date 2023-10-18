#include <iostream>
#include <string>
using namespace std;
#ifndef Stock_h
#define Stock_h

class Stock
{

    private:
        string p_name;
        string p_symbol;
        double p_price;
        static int count;

    public:
        Stock();
        Stock(string name, string symbol, double price);

    //setters
    void SetName(string name);
    void SetSymbol(string symbol);
    void SetPrice(double price);

    //getters
    string GetName();
    string GetSymbol();
    double GetPrice();
    static int GetCount();
};
#endif
