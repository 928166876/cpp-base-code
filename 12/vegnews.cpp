#include <iostream>
#include "strngbad.h"

using namespace std;

int main()
{
    {
        cout << "Starting an inner block.\n";
        Stringbad headline1("Celery Stalks at Midnight");
        Stringbad headline2("Lettuce Prey");
        Stringbad sports("Spinach Leaves Bow1 for Dollars");

        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
    }
    return 0;
}