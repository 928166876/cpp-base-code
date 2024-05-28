#include<iostream>
#include"mytime2.h"

using namespace std;

int main()
{
    Time planning;
    Time coding(3, 40);
    Time fixing(2, 30);
    Time total;
    Time diff;
    Time adjusted;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    cout << "coding + fixing =  ";
    total.Show();
    cout << endl;

    Time morefixing(3, 28);
    cout << "more fixing time = ";
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;

    diff = coding - fixing;
    cout << "coding - fixing = ";
    diff.Show();
    cout << endl;

    adjusted = coding * 1.5;
    cout << "adjusted coding time = ";
    adjusted.Show();
    cout << endl;

    cout << endl;

    return 0;
}
