#include "studentc.h"

using namespace std;


double Student::Average() const
{
	if(scores.size() > 0)
		return scores.sum()/scores.size();
	else
		return 0;
}


const string & Student::Name() const
{
	return name;
}

double & Student::operator[](int i)
{
	return scores[i];
}

double Student::operator[](int i) const
{
	return scores[i];
}


istream & operator>>(istream & is, Student & stu)
{
	is >> stu.name;
	return is;
}


istream & getline(istream & is, Student & stu)
{
	getline(is, stu.name);
	return is;
}

ostream & operator<<(ostream & os, const Student & stu)
{
	os << "Scores for " << stu.name << ":\n";
	int i;
	int lim = stu.scores.size();
	if(lim > 0)
	{
		for(i = 0; i < lim; i++)
		{
			os << stu.scores[i] << " ";
			if(i % 5 == 4)
				os << endl;
		}
		if(i % 5 != 0)
			os << endl;
	}
	else
		os << "empty array ";
	return os;
}
