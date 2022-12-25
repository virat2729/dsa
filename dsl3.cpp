#include<iostream>
using namespace std;

class Matoper
{
    public:
    void addition(int a[3][3],int b[3][3], int c[3][3]);
    void substraction(int a[3][3],int b[3][3], int c[3][3]);
    void multiplication(int a[3][3],int b[3][3], int c[3][3]);
    void transpose(int a[3][3],int c[3][3]);
    void display(int c[3][3]);

}p;

void Matoper::addition(int a[3][3],int b[3][3], int c[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}

void Matoper::substraction(int a[3][3],int b[3][3], int c[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
}

void Matoper::multiplication(int a[3][3],int b[3][3], int c[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                 c[i][j]+=a[i][k]*b[k][j];
            }
        } 
    }
}
 
void Matoper::transpose(int a[3][3], int c[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[j][i]=a[i][j];
        }
    }
} 

void Matoper::display(int c[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
} 

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,choice,ch=1;
    cout<<"\nEnter elements for matrix 1: ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

     cout<<"\nEntered matrix 1 is: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";

        }
        cout<<"\n";
    }

     cout<<"\nEnter elements for matrix 2: ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
      cout<<"\nEntered matrix 2 is: "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";

        }
        cout<<"\n";
    }
    do{

    cout<<"\n---MENU---";
    cout<<"\n1.Addition";
    cout<<"\n2.Substraction";
    cout<<"\n3.multiplication";
    cout<<"\n4.transpose";
    cout<<"\n5.exit";
    cout<<"\nEnter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        p.addition(a,b,c);
        p.display(c);
        break;

        case 2:
        p.substraction(a,b,c);
        p.display(c);
        break;

        case 3:
        p.multiplication(a,b,c);
        p.display(c);
        break;

        case 4:
        p.transpose(a,c);
        p.display(c);
        break;

        case 5:
        cout<<"\nTHank you!!";
        break;

        default:
        cout<<"\nIncoorect Choice :(";
        break;

    }

    cout<<"\n Do you want to continue?(1/0):";
    cin>>ch;
    }while(ch!=0);

    return 0;

}