#include<iostream>
#include"stock20.h"

int main(void)
{
    {
        using std::cout;
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        Stock stock2("Boffo Object", 2, 2.0);
        stock2.show();
        
        Stock top;
        top = stock1.topval(stock2);
        top = stock2.topval(stock1);
        top.show();
    }
    return 0;
}
