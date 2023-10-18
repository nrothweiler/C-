#include "Stock.h"
using namespace std;

//set count 0
int Stock::count = 0;

//No argument
Stock::Stock()
{
    p_name = "Microsoft";
    p_symbol = "MSFT";
    p_price = 46.87;
}

//Three prameter
Stock::Stock(string name, string symbol, double price)
{
    SetName(name);
    SetSymbol(symbol);
    SetPrice(price);
    count++;
} 

//sets name
void Stock::SetName(string name)
{
    p_name = name;
}

//sets symbol
void Stock::SetSymbol(std::string symbol)
{
    p_symbol = symbol;
}

//sets price
void Stock::SetPrice(double price)
{
    //checks if negative
    if (price<0)
    {
        //sets price to 0 if negative
        p_price = 0;
    }
    else p_price = price;
}

//return name
string Stock::GetName()
{
    return p_name;
}

//return symbol
string Stock::GetSymbol()
{
    return p_symbol;
}

//returns price
double Stock::GetPrice()
{
    return p_price;
}

//returns count
int Stock::GetCount()
{
    return count;
}
