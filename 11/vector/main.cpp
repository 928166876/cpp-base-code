#include<iostream>
#include"vector.h"
#include<cstdlib>
#include<ctime>

using namespace std;
using namespace VECTOR;

int main()
{
    Vector result(0.0, 0.0);
    double target;
    srand(time(0));
    unsigned long steps = 0;
    Vector step;
    double direction;
    double dstep;

    cout << "Enter target distance (q to quit):";
    while(cin >> target)
    {
        cout << "Enter step length:";
        if(cin >> dstep && dstep == 0.0)
        {   
            cout << "invalid!!" << endl;
            break;
        }
        while(result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps ++;
        }

        cout << "After " << steps << " steps, the subjects "
            << "has the following location:" << endl;
        cout << result << endl;
        result.polar_mode();
        cout << result << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!" << endl;
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}
