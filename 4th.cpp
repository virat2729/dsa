/*Write a C++ program that creates an output file, writes information to it, closes the file and open
it again as an input file and read the information from the file.*/
/*#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, roll_no[10];
    string name[30];
    cout << "Enter the number of students whose data is to be saved: " << endl;
    cin >> n;

    ofstream outf;
    outf.open("stud_data.txt",ios::trunc); 

    for(int i=0;i<n;i++)
    {
        cout << "Enter the name of the student: " << endl;
        cin >> name[i];
        outf << name[i] << "\n";

        cout << "Enter Roll number: " << endl;
        cin >> roll_no[i];
        outf << roll_no[i] << "\n";
    }
    outf.close();

    ifstream inf;
    inf.open("stud_data.txt");
    for(int i=0;i<n;i++)
    {
        while(inf)
        {
            inf >> name[i];
            inf >> roll_no[i];
            if(inf.eof()!=0)
            {
                cout << "End of file" << endl;
                exit(1);
            }
            cout<<"\n"; 
            cout << "Name: " << name[i] << endl;
            cout << "Roll number: " << roll_no[i] << endl;
        }
    }
inf.close();

return 0;

}