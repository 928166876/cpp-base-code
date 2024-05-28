#include <iostream>
#include <cstring>
#include "worker0.h"

using namespace std;

const int SIZE = 3;


int main(void)
{
	Worker * lolas[SIZE];

	int i;
	for(i = 0; i < SIZE; i++)
	{
		char choice;
		cout << "Enter the employee category:" << endl
			<< "w: waiter	s: singer	"
			<< "t: singing waiter	q: quit" << endl;
		cin >> choice;
		while(strchr("wstq", choice) == NULL)
		{
			cout << "Please enter a w, s, t,  or q: ";
			cin >> choice;
		}
		if(choice == 'q')
			break;
		switch(choice)
		{
			case 'w': lolas[i] = new Waiter;
				  break;
			case 's': lolas[i] = new Singer;
				  break;
			case 't': lolas[i] = new SingingWaiter;
				  break;
		}
		cin.get();
		lolas[i]->Set();
	}

	cout << "\nHere is your staff:\n";
	int n;
	for(n = 0; n < i; n++)
	{
		cout << endl;
		lolas[n]->Show();
	}

	for(n = 0; n < i; n++)
	{
		delete lolas[n];
	}

	return 0;
}
