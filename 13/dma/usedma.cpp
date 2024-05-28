#include <iostream>
#include "dma.h"

int main(void)
{
	baseDMA shirt("Portabelly", 8);
	cout << "Displaying baseDMA object:\n";
	cout << shirt << endl;
	cout << "----------------------------"<< endl;
	lackDMA balloon("Blimpo", 4, "red");
	cout << "Displaying lackDMA object:\n";
	cout << balloon << endl;	

	cout << "----------------------------"<< endl;
	lackDMA balloon2(balloon);
	cout << "Displaying lackDMA object:\n";
	cout << balloon2 << endl;	
	
	hasDMA map("keys", 5, "Mercator");	
	cout << "----------------------------"<< endl;
	cout << "Displaying hasDMA object:\n";
	cout << map << endl;	
	
	hasDMA map2;
	map2 = map;
	cout << "----------------------------"<< endl;
	cout << "Displaying hasDMA object:\n";
	cout << map2 << endl;	
	
	return 0;
}
