#include <iostream>
#include "queue.h"


using namespace std;

int main(void)
{
	Queue<string> cs(5);
	string temp;

	while(!cs.isfull())
	{
		cout << "Please enter your name.name: ";
		getline(cin, temp);
		cs.enqueue(temp);
	}

	cout << "The queue is full!" << endl;

	while(!cs.isempty())
	{
		cs.dequeue(temp);
		cout << "Now proessing " << temp << "...\n";
	}

	return 0;
}
