#include<iostream>

using namespace std;

extern double warming;
void update(double dt);

void update(double dt)
{
    extern double warming;
    warming += dt;
    cout << "Update global warming to " << warming;
    cout << " degress." << endl;
}

void local(void)
{
    double warming = 0.8;
    cout << "Local warming = " << warming << " degress." << endl;
    cout << "But global warming = " << ::warming << " degress." << endl;
}