#include<iostream>

using namespace std;

int tom = 3;
int disk = 30;
static int harry = 300;

void remote_access();

int main(void)
{
    cout << "main(), report the following address: " << endl;
    cout << "tom = " << tom << " "<< &tom << " = &tom, " << "disk = " << disk << " " << &disk << " = &disk, ";
    cout << "harry = " << harry << " " << &harry << " = &harry." << endl;

    remote_access();

    return 0;
}