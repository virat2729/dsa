/*2)Develop an object oriented program in C++ to create a database of the personnel
 information system containing the following information: Name, Date of Birth, Blood group, Height, Weight,
  Insurance Policy, number, Contact address, telephone number, driving license no. etc Construct the database 
  with suitable member functions for initializing and destroying the data viz constructor, default constructor, 
  copy, destructor, static member functions, friend class, this pointer, inline code and dynamic memory allocation 
  operators-new and delete as well asexception handling*/
#include<iostream>
#include<string>
#include<cstring>
#include<stdlib.h>
using namespace std;
class student
{	int roll;
	char name[30];
	float marks;
public:
	student(){ 
	roll=0;
	marks=0;
	strcpy(name,"");
    }
student(int roll,char name[30], float marks){
	this->roll=roll;
	this->marks=marks;
	strcpy(this->name,name);
	}
void accept(){
	cout<<"Enter the name";
	cin>>name;
	cout<<"Enter the rollno";
	cin>>roll;
	cout<<"Enter the marks";
	cin>>marks;
	}
void display(){
	cout<<"\n\nNAME:"<<name;
	cout<<"\n\nROLLNO:"<<roll;
	cout<<"\n\nMARKS:"<<marks;
	}
};
int main(){  
	int i,ch,n;
	student s[10];
	while(1){
	cout<<"\n1.CREATE\n2.DISPLAY\n3.EXIT";
	cout<<"\n Enter your choice ";
	cin>>ch;
	switch(ch){
	   case 1:cout<<"\n Enter how many student information you want to create";
				cin>>n;
				for(i=0;i<n;i++){
			    cout<<"enter information of"<<i+1<<"th student";
				s[i].accept();
				}
				 break;
	   case 2:cout<<"Student database is as follows";
				for(i=0;i<n;i++)
				s[i].display();
				break;
	   case 3:  exit(0);
   }
}
	return 0;
}
