#ifndef STUDENTC__H__
#define STUDENTC__H__

#include <iostream>
#include <string>
#include <valarray>

using std::valarray;
using std::string;
using std::istream;
using std::ostream;

class Student:private string, private valarray<double>
{
	private:
		typedef valarray<double> ArrayDb;
		//string name;
		//ArrayDb scores;
		ostream & arr_out(ostream & os) const;
	public:
		Student():string("Null Student"), ArrayDb() {}
		explicit Student(const string &s):string(s), ArrayDb() {}
		explicit Student(int n):string("Nully"),ArrayDb(n) {}
		Student(const string &s, const ArrayDb &a):string(s), ArrayDb(a) {}
		Student(const char * str, const double *pd, int n):string(str), ArrayDb(pd, n){}
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
