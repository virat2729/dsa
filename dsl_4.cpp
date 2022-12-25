#include<iostream>
using namespace std;

class sort 
{
    float arr[30];
    int i,j,n;
    public:
    void insert()
    {
        cout<<"\nEnter number of students: ";
        cin>>n;
        cout<<"\nEnter marks of "<<n<<" students";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }

    void display()
    {
        cout<<"\nMarks of "<<n<<" students are: ";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    void bubble()
    {
        float temp;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

        cout<<"\nTop five marks are: ";
        for(i=n-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    }

    void selection()
    {
        int min;
        float temp;
        for(i=0;i<n;i++)
        {
            min=i;
            for(j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min])
                {
                    min=j;
                }
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        cout<<"\nTop five marks are: ";
        for(i=n-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    }
}s;

int main()
{
    int ch;
    cout<<"\nInsert information: ";
    s.insert();
do{
    cout<<"\n1.Display";
    cout<<"\n2.Top five by bubble sort";
    cout<<"\n3.Top five by selection sort";
    cout<<"\n4.Exit";

    cout<<"\nEnter your choice.";
    cin>>ch;

    switch(ch)
    {
        case 1:
        s.display();
        break;

        case 2:
        s.bubble();
        break;

        case 3:
        s.selection();
        break;
    }
}while(ch!=4);
}
