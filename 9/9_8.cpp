#include<iostream>

using namespace std;

extern int tom;

static int disk = 10;
int harry = 200;

void remote_access()
{
    cout << "remote_access() report the following address: " << endl;
    //cout << "main(), report the following address: " << endl;
    cout << "tom = " << tom << " "<< &tom << " = &tom, " << "disk = " << disk << " " << &disk << " = &disk, ";
    cout << "harry = " << harry << " " << &harry << " = &harry." << endl;
}