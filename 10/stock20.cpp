#include<iostream>
#include"stock20.h"

Stock::Stock(const std::string &co, long n, double pr)
{
    company = co;
    if(n < 0)
    {
        std::cout << "Number of share can't be negative; "
                  << company << "shares set to 0." << std::endl;
        shares = 0;  
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::Stock()
{
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::~Stock()
{
}

void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << "Number of share purchased can't be negative."
                << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if(num < 0)
    {
        std::cout << "Number of share purchased can't be negative."
                << "Transaction is aborted.\n";
    }
    else if(num > shares)
    {
        cout << "You can't sell more than you have! "
                << "Transaction is aborted." << std::endl;
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    using std::cout;
    cout << "Company: " << company << std::endl;
    cout << "shares: " << shares << std::endl;
    cout << "Share Price: $" << share_val << std::endl;
    cout << "Total Worth: $" << total_val << std::endl;    
}

const Stock & Stock::topval(const Stock &s) const
{
    if(s.total_val > total_val)
    {
        return s;
    }
    else
    {
        return *this;
    }
}
