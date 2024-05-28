#ifndef STUDENTC__H__
#define STUDENTC__H__

#include <iostream>
#include <string>
#include <valarray>

using std::valarray;
using std::string;
using std::istream;
using std::ostream;

class Student
{
	private:
		typedef valarray<double> ArrayDb;
		string name;
		ArrayDb scores;
	public:
		Student():name("Null Student"), scores() {}
		explicit Student(const string &s):name(s), scores() {}
		explicit Student(int n):name("Nully"),scores(n) {}
		Student(const string &s, const ArrayDb &a):name(s), scores(a) {}
		Student(const char * str, const double *pd, int n):name(str), scores(pd, n){}
		~Student() {}
		double Average() const;
		const string & Name() const;
		double & operator[](int i);
		double operator[](int i) const;
	
		friend istream & operator>>(istream & is , Student & stu);
		friend istream & getline(istream & is, Student & stu);
		friend ostream & operator<<(ostream & os, const Student & stu);

};



#endif
