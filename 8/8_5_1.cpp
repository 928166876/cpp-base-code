#include<iostream>

using namespace std;
double cube(double a);
double reference(const double &b);

int main(void)
{
    double x = 3.0;
    const double y = 5.0;
    cout << cube(5 + x);
    cout << " = cube of " << "5 + x " << endl;
    cout << reference(y);
    cout << " = cube of " << y << endl;
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double reference(const double &b)
{
    return b * b * b;
}