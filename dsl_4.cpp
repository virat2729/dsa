#include<iostream>
using namespace std;
class sorting
{
    float m[30];
    int i,j,n;
    public:
    void insert()
    {
        cout<<"Enter no. of students :"<<endl;
        cin>>n;
        cout<<"Enter marks :"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>m[i];
        }
    }
    void display()
    {
        cout<<"Entered marks are :"<<endl;
        for(i=0;i<n;i++)
        {
        cout<<m[i]<<endl;
        }
    }
    void bubble()
    {
        float temp;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(m[j]>m[j+1])
                {
                    temp=m[j];
                    m[j]=m[j+1];
                    m[j+1]=temp;
                }
            }
        }
        cout<<"Top Five Scores :"<<endl;
        for(i=n-1;i>=n-5;i--)
        {
            cout<<m[i]<<" ";
        }
    }
    void selection()
    {
        int min ;
        float temp;
        for(i=0;i<n;i++)
        {
            min = i;
            for(j=i+1;j<n;j++)
            {
                if(m[j]<m[min])
                {
                    min=j;
                }
            }
            temp=m[i];
            m[i]=m[min];
            m[min]=temp;
       }
       cout<<"TOP FIVE MARKS ARE :"<<endl;
       for(i=n=1;i>=n-5;i--)
       {
        cout<<m[i]<<endl;
       }
    }
}s;

int main ()
{
    int ch;
    cout<<"\nInsert information :";
    s.insert();
    do{
    cout<<"\n1.Display :";
    cout<<"\n2.Top five by bubble sort :";
    cout<<"\n3.Top five by selection sort :";
    cout<<"\n4.Exit";

    cout<<"Enter your choice :";
    cin>>ch;
     
     switch(ch)
     {
        case 1 :
        s.display();
        break;

        case 2 :
        s.bubble();
        break;

        case 3 :
        s.selection();
        break;


     }
    }while(ch!=4);
    
    return 0;
    
}
