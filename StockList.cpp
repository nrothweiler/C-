#include "StockList.h"
#include <iostream>
#include <string>
using namespace std;

void StockList::AddStock(Stock s)
{
    stock.push_back(s);
}

void StockList::PrintStock()
{
    for (int a=0; a<stock.size(); a++)
    {
        cout << stock[a].GetName() << endl;
        cout << stock[a].GetSymbol() << endl;
        cout << stock[a].GetPrice() << endl;
        cout << endl;
    }

}

double StockList::CalcAveragePrice()
{
    double sum = 0;
    for(int b=0; b<stock.size(); b++)
    {
        sum = sum + stock[b].GetPrice();
    }
    sum = (sum/stock.size());
    return sum;
}
