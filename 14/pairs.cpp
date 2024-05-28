#include <iostream>
#include <string>

using namespace std;

template <class T1, class T2>
class Pair
{
	private:
		T1 a;
		T2 b;
	public:
		T1 & first();
		T2 & second();
		T1 first() const {return a;}
		T2 second() const {return b;}
		Pair(const T1 & aval, const T2 & bval):a(aval), b(bval){}
		Pair() {}
};

template <class T1, class T2>
T1 & Pair<T1, T2>::first()
{
	return a;
}

template <class T1, class T2>
T2 & Pair<T1, T2>::second()
{
	return b;
}


int main(void)
{
	Pair<string, int> ratings[4] =
	{
		Pair<string, int>("Duck", 5),
		Pair<string, int>("Fresco", 4),
		Pair<string, int>("Cafe", 5),
		Pair<string, int>("Eat's", 3)
	};

	int joints = sizeof(ratings) / sizeof(Pair<string, int>);
	cout << "Rating:\tEatery" << endl;
	for(int i = 0; i < joints; i++)
	{
		cout << ratings[i].second() << ":\t"
			<< ratings[i].first() << endl;
	}

	cout << "--------------------------" << endl;
	ratings[3].first() = "hahhahhahha";
	ratings[3].second() = 6;
	cout << ratings[3].second() << ":\t"
		<< ratings[3].first() << endl;

	return 0;
}
