#include "Stock.h"
#include <vector>
#include <string>

class StockList
{

    private:
        vector<Stock> stock;

    public:
        void AddStock(Stock s);
        void PrintStock();
        double CalcAveragePrice();
};
