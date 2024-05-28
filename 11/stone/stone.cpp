#include<iostream>
#include"stonewt.h"

using namespace std;

int main(void)
{
    Stonewt stone1 = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    stone1.show_stn();
    wolfe.show_stn();
    taft.show_lbs();
    
    stone1 = 276.8;
    taft = 325;

    stone1.show_stn();
    taft.show_lbs();

    return 0;
}
