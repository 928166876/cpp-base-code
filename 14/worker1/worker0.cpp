#include <iostream>
#include "worker0.h"

using namespace std;


//Worker::~Worker() {}

void Worker::Get()
{
	cout << "Enter worker's name: ";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while(cin.get() != '\n')
		continue;
}

void Worker::Data() const
{
	cout << "Name: " << fullname << "\n";
	cout << "Employee ID: " << id << "\n";
}



void Waiter::Get()
{
	cout << "Enter waiter's panache rating: ";
	cin >> panache;
	while(cin.get() != '\n')
		continue;
}

void Waiter::Data() const
{
	cout << "Panache rating: " << panache << endl;
}

void Waiter::Set()
{
	cout << "Enter waiter's name: ";
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	Worker::Data();
	Data();
}


const char * Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
	cout << "Enter singer's name: ";
	Worker::Get();
	Get();
}

void Singer::Show() const
{
	Worker::Data();
	Data();
}



void Singer::Get()
{
	cout << "Enter number for singer's vocal range:" << endl;
	int i;
	for(i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << "	";
		if(i % 4 == 3)
			cout << endl;
	}
	if(i % 4 != 0)
		cout << endl;
	while(cin >> voice && (voice < 0 || voice >= Vtypes))
		cout << "Please enter a value >= 0 and < " << Vtypes <<endl;
	while(cin.get() != '\n')
		continue;
}

void Singer::Data() const
{
	cout << "Vocal range: " << pv[voice] << endl;
}


void SingingWaiter::Set()
{
	Worker::Get();
	Waiter::Get();
	Singer::Get();
}


void SingingWaiter::Show() const
{
	Worker::Data();
	Waiter::Data();
	Singer::Data();
}
