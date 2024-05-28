#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "stacktp.h"


using namespace std;

const int Num = 10;

int main(void)
{

	srand(time(0));
	cout << "Please enter stack size: ";
	int stacksize;
	cin >> stacksize;

	Stack<const char *> st(stacksize);

	const char * in[Num] = {
		"1: Hank",	"2: Kiki",
		"3: Betty",	"4: Ian", 
		"5: Kibble", 	"6: Koop",
		"7: Joy", 	"8: Xaverie",
		"9: Juan", 	"10: Misha"
	};

	const char * out[Num];

	int processed = 0;
	int nextin = 0;
	while(processed < Num)
	{
		if(st.isempty())
			st.push(in[nextin++]);
		else if(st.isfull())
			st.pop(out[processed++]);
		else if(rand() % 2 && nextin < Num)
			st.push(in[nextin++]);
		else
			st.pop(out[processed++]);
	}

	for(int i = 0; i < Num; i++)
	{
		cout << out[i] << endl; 
	}
	cout << "Bye!" << endl;
	return 0;
}
