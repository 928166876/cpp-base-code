#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;
const int LIMIT = 5;

void file_it(ostream & os, double fo, const double fe[], int n);
int main(void)
{
    ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if(!fout.is_open())
    {
        cout << "Can't open " << fn <<".bye" <<endl;
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "Enter the focal length of your"
         << "telescope objective in mm:";
    cin >> objective;
    cout << "Enter the focal lengths, in mm, of " << LIMIT << " eyepieces:" <<endl;
    double eps[LIMIT];
    for(int i = 0; i < LIMIT; i++)
    {
        cout << "Eyepiece #" << i+1 << ": ";
        cin >> eps[i];
    }

    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "Done." << endl;
    return 0;
}

void file_it(ostream & os, double fo, const double fe[], int n)
{
    os << "Focal length of objective: " << fo << " mm" << endl;
    os <<"f.l. eyepiece";
    os << "\tmagnification" <<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        os <<"\t" << fe[i] << "\t";
        os << int(fo/fe[i] + 0.5) <<endl;
    }
    
}