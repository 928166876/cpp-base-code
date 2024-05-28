#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
	cout << "Case Study: bank of heather automatic teller" << endl;
	int qs;
	Item temp;
	int i = 0;
	int customer = 0;

	cout << "Enter maximum size of queue:";
	cin >> qs;

	Queue line(qs);

	while (!line.isfull())
	{
		temp.set(i++);
		line.enqueue(temp);
		customer++;
	}

	cout << "Customer: " << customer << endl;
	while (!line.isempty())
	{
		line.dequeue(temp);
		customer--;
	}

	cout << "Now customer: " << customer << endl;

	return 0;
}