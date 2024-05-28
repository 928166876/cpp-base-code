#include<iostream>
#include<string>

using namespace std;

struct free_throws{
    string name;
    int made;
    int attempts;
    float percent;
};

void set_pc(free_throws & ft);
void display(free_throws & ft);
free_throws & accumulate(free_throws & target, free_throws & source);

int main(void)
{
    free_throws one = {"tom", 7, 8};
    free_throws two = {"jack", 1, 4};
    free_throws three = {"jerry", 2, 3};
    free_throws four = {"jony", 7, 4};
    free_throws five = {"rich", 9, 8};
    free_throws team = {"total",0, 0};
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);
    display(accumulate(team, two));
    accumulate(accumulate(team,three), four);
    display(team);
    dup = accumulate(team, five);

    cout << "Displaying team:\n";
    display(team);
    cout << "Display dup after assigment:\n";
    display(dup);
    accumulate(team, five) = four;
    cout << "Display dup after ill-advise assignment:\n";
    display(team);
    return 0;
}

void set_pc(free_throws & ft)
{
    if(ft.attempts != 0)
        ft.percent = 100 * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}

void display(free_throws & ft)
{
    cout << "Name: " << ft.name << endl;
    cout << "Made: " << ft.made << "\t";
    cout << "Attempts: " << ft.attempts << "\t";
    cout << "Percent: " << ft.percent << endl;
}

free_throws & accumulate(free_throws & target, free_throws & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target; 
}