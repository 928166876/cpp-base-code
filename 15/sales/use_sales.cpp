#include <iostream>
#include "sales.h"


int main(void)
{
	double vals1[12] = {
		1000, 1001, 1002, 1003, 1004, 1005, 1006,
		1007, 1008, 1009, 1010, 1011
	};

	double vals2[12] = {
		10, 11, 12, 13, 14, 15,
		16, 17, 18, 19, 20, 21
	};

	Sales sales1(2011, vals1, 12);
	LabeledSales sales2("Blogstar", 2012, vals2, 12);

	cout << "Fisrt try block: \n";
	try
	{
		int i;
		cout << "Year = " << sales1.Year() << endl;
		for(i = 0; i < 12; i++)
		{
			cout << sales1[i] << "	";
			if(i % 6 == 5)
				cout << endl;
		}
		cout << "Year = " << sales2.Year() << endl;
		cout << "Label = " << sales2.Label() << endl;
		for(i = 0; i < 12; i++)
		{
			cout << sales2[i] << "	";
			if(i % 6 == 5)
				cout << endl;
		}
		cout << "End of try block 1.\n";
	}
	catch(LabeledSales::nbad_index & bad)
	{
		cout << bad.what();
		cout << "Company: " << bad.label_val() << endl;
		cout << "bad index: " << bad.bi_val() << endl;
	}
	catch(Sales::bad_index & bad)
	{
		cout << bad.what();
		cout << "bad index: " << bad.bi_val() << endl;
	}
	try
	{
		sales2[2] = 37.5;
		sales1[20] = 23345;
		cout << "End of try block2.\n";		
	}
        catch(LabeledSales::nbad_index & bad)
        {
                cout << bad.what();
                cout << "Company: " << bad.label_val() << endl;
                cout << "bad index: " << bad.bi_val() << endl;
        }
        catch(Sales::bad_index & bad)
        {
                cout << bad.what();
                cout << "bad index: " << bad.bi_val() << endl;
        }
	cout << "done\n";

	return 0;
}
