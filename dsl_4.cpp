#include<iostream>
using namespace std;
class sort
{
 float m[30];
 int i,j,n;
public:
 void insert()
 {
  cout<<"\nENTER NUMBER OF STUDENTS:"<<endl;
  cin>>n;
  cout<<"\nENTER MARKS:"<<endl;
  for(i=0;i<n;i++)
  {
   cin>>m[i];
  }
 }
 void display()
 {
  cout<<"\nENTERED MARKS ARE:"<<endl;
  for(i=0;i<n;i++)
  cout<<m[i]<<endl;
 }

 void bubble()
 {
  float temp;
  for(i=0;i<n-1 ;i++)
  {
   for(j=0;j<(n-1)-i;j++)
   {
    if(m[j]>m[j+1])
    {
     temp=m[j];
     m[j]=m[j+1];
     m[j+1]=temp;
    }
   }
  }
cout<<"TOP FIVE:"<<endl;
  for(i=n-1;i>=0;i--)
  {
   cout<<m[i]<<endl;

  }
 }
 void selection()
 {
  int min;
  float temp;
  for(i=0;i<(n-1);i++)
  {
   min=i;
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
  cout<<"TOP FIVE:"<<endl;
  for(i=n-1;i>=0;i--)
  {
   cout<<m[i]<<endl;
  }
 }
};
int main()
{
 sort s;
 int ch,x;
 cout<<"LIST OF TOP FIVE STUDENTS:"<<endl;
 
 cout<<"\nInsert elemets in array!!!";
 s.insert();
do{
 cout<<"\n1.DISPLAY\n2.TOP FIVE BY BUBBLE SORT\n3.TOP FIVE BY SELECTION SORT\n4,EXIT\nENTER CHOICE:"<<endl;
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
 cout<<"\nDo you want to continue?\n1.YES\n2.NO";
  cin>>x;
}while(x==1);

 return 0;
}