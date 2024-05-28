#include <iostream>

using namespace std;

template <class T>
class HasFriend
{
	private:
		T item;
		static int ct;
	public:
		HasFriend(const T & i):item(i) {ct++;}
		~HasFriend() {ct--;}
		friend void counts();
		friend void reports(HasFriend<T> &);
};

template<class T>
int HasFriend<T>::ct = 0;

void counts()
{
	cout << "int count: " << HasFriend<int>::ct << "; ";
	cout << "double count: " << HasFriend<double>::ct << endl;
}

void reports(HasFriend<int> & hf)
{
	cout << "HasFriend<int>: " << hf.item << endl;
}

void reports(HasFriend<double> & hf)
{
	cout << "HasFriend<double: " << hf.item << endl;
}


int main(void)
{
	cout << "No objects declared: ";
	counts();
	HasFriend<int> hfi1(10);
	cout << "After hfi1 declares: ";
	counts();	
	HasFriend<int> hfi2(10);
	cout << "After hfi2 declares: ";
	counts();	
	HasFriend<double> hfdb(10.5);
	cout << "After hfdb declares: ";
	counts();	

	return 0;
}
