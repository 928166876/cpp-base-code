#include<iostream>
#include"namesp.h"

void other(void);
int main(void)
{
    using debts::Debt;
    using debts::showDebt;

    Debt golf = {{"Benny", "Goatsniff"}, 120.0};
    showDebt(golf);
    other();
    return 0;
}

void other(void)
{
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"zy", "jack"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        getDebt(zippy[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        /* code */
        showDebt(zippy[i]);
    }
    cout << "Total debt: $" <<sumDebts(zippy, 3) << endl;
}