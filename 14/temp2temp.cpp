#include <iostream>

using namespace std;

template <class T>
void counts();

template <class U>
void reports(U &);

template <class V>
class HasFriend
{
	private:
		V item;
		static int ct;
	public:
		HasFriend(const V & i):item(i) {ct++;}
		~HasFriend() {ct--;}
		friend void counts<V>();
		friend void reports<>(HasFriend<V> &);
};


template<class T>
int HasFriend<T>::ct = 0;


template <class T>
void counts()
{
	cout << "template counts(): " << HasFriend<T>::ct << endl;
}


template <class U>
void reports(U & hf)
{
	cout << hf.item << endl;
}



int main(void)
{
	counts<int>();
	HasFriend<int> hfi1(10);		// V = int; T = V = int; U = HasFriend<int>
	HasFriend<int> hfi2(10);		// same up;
	HasFriend<double> hfdb(10.5);
	
	reports(hfi1);
	reports(hfi2);
	reports(hfdb);

	cout << "counts<int>() output: ";
	counts<int>();
	cout << "counts<double>() output: ";
	counts<double>();
	
	return 0;
}
