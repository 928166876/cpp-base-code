#include<iostream>
#include"stonewt.h"

using namespace std;

int main(void)
{
    Stonewt poppins(9, 2.8);
    double p_wt = poppins;
    cout << "Convert to double =>";
    cout << "Poppins: " << p_wt << " pounds." << endl;
    cout << "Convert to int =>";
    cout << "Poppins: " << int(poppins) << " pounds." << endl;
    return 0;
}
