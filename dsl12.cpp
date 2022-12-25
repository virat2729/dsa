#include<iostream>
using namespace std;

class lsearch
{
    int rno[10],i,key,flag=0;
    public:
    void accept()
    {
        cout<<"\nEnter roll numbers of students: ";
        for(int i=1;i<=10;i++)
        {
            cin>>rno[i];
        }
    }

    void search()
    {
        cout<<"\nEnter a roll number you want to search: ";
        cin>>key;
        for(int i=1;i<=10;i++)
        {
            if(key==rno[i])
            {
                cout<<"Roll number found at "<<i<<"'th position.";
                flag=1;
                break;
            }
            
        }

        if(flag==0)
        {
            cout<<"\nKey not found.";
        }
        
    }
    
};

int main()
{
  
    lsearch l;

    l.accept();
    l.search();

    return 0;
}
