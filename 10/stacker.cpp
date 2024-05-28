#include<iostream>
#include<cctype>
#include"stack.h"

using namespace std;

int main()
{
    Stack st;
    unsigned long po;
    char ch;
    cout << "Please enter A to add"
        << " P to po, or Q to qiut." << endl;

    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n')
            continue;
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a PO number to add：";
                cin >> po;
                if(st.isfull())
                    cout << "full!" << endl;
                else
                    st.push(po);
                break;
            case 'P':
            case 'p': if(st.isempty())
                        cout << "stack already empty" << endl;
                    else
                    {
                        st.pop(po);
                        cout << "PO # " << po << " popped" << endl;
                    }
                    break;
        }
        cout << "Please enter A to add"
            << " P to po, or Q to qiut." << endl;
    }
    return 0;
}
