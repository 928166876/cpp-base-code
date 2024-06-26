#ifndef __ARRAYTP_H__
#define __ARRAYTP_H__

#include <iostream>
#include <cstdlib>

template <class T, int n>
class ArrayTP
{
	private:
		T ar[n];
	public:
		ArrayTP() {}
		explicit ArrayTP(const T & v);
		virtual T & operator[](int i);
		virtual T operator[](int i) const;

};

template <class T, int n>
ArrayTP<T, n>::ArrayTP(const T & v)
{
	for(int i = 0; i < n; i++)
	{
		ar[i] = v;
	}
}

template <class T, int n>
T & ArrayTP<T, n>::operator[](int i)
{
	return ar[i];
}

template <class T, int n>
T ArrayTP<T, n>::operator[](int i) const
{
	return ar[i];
}


#endif
