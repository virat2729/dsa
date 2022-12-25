#include<iostream>
using namespace std;

class bsearch
{
    int rno[10],i,key,flag=0,lb,ub,mid;
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

        lb=1;
        ub=10;

        while(lb<=ub)
        {
            mid=(lb+ub)/2;
                if(key==rno[mid])
                {
                    cout<<"\nElement found at "<<mid<<" position.";
                    flag=1;
                    break;
                }
                else
                {
                    if(key<rno[mid])
                    {
                        ub=mid-1;
                    
                    }
                    if(key>rno[mid])
                    {
                        lb=mid+1;
                    }
                }
            }
        if(flag==0)
            {
                cout<<"\nroll number not found.";
            }
    }
}p;

int main()
{

    p.accept();
    p.search();
    return 0;
}