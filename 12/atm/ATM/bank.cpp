#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

using namespace std;

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(int argc, char const *argv[])
{
	std::srand(std::time(0));

	cout << "Case Study: bank of heather automatic teller" << endl;
	cout << "Enter maximum size of queue:";
	int qs;
	cin >> qs;
	Queue line(qs);



	return 0;
}