#include<iostream>

using namespace std;

struct job
{
    char name[40];
    double salary;
    int floor;
};
template <typename T>
void Swap(T &a, T &b);
template <> void Swap<job>(job &j1, job &j2);
void show(job &j);

int main(void)
{
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j <<".\n";
    
    job sue = {"susan", 1000, 7};
    job sid = {"sidney", 1200, 8};

    cout << "Before  job swapping:\n";
    show(sue);
    show(sid);
    Swap(sue, sid);
    cout << "After job swapping: \n";
    show(sue);
    show(sid);

    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <> void Swap<job>(job &j1, job &j2)
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;

    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void show(job &j)
{
    cout << j.name << ": $" <<j.salary
         << " on floor " << j.floor << endl; 
}