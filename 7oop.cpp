#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Record{
		public:
		int item_code, quantity;
		float cost;
		string name;
		bool operator == (const Record &o1){
			if (name == o1.name)
				return 1;
			 return 0;
		 }
		bool operator < (const Record & o1){
				if(item_code < o1.item_code)
					return 1;
				return 0;
			}
};                          
vector <Record>r1;
void insert();
void display();
void print1(Record &r1);
void search();
void del();
void insert(){		Record o1;
			cout<<"\nEnter name: ";   
			cin>>o1.name;
			cout<<"\nEnter item code: ";     
			cin>>o1.item_code;
			cout<<"\nEnter required quantity: ";       
			cin>>o1.quantity;
			cout<<"\nEnter cost: ";    
			cin>>o1.cost;
			r1.push_back(o1);                          
			}
void display(){
		 for_each(r1.begin(), r1.end(), print1);
}
void print1(Record &r1){
	cout<<"\nName is: "<<r1.name<<endl;
	cout<<"Item_code is: "<<r1.item_code<<endl;
	cout<<"Quantity: "<<r1.quantity<<endl;
	cout<<"Cost: "<<r1.cost<<endl;                
		}
void search(){		
		Record o1;
		vector <Record>::iterator i;
		cout<<"\nEnter name to be searched: ";    
		cin>>o1.name;
		i=find(r1.begin(),r1.end(),o1);
		if(i==r1.end()){
			cout<<"\n Not found";
		}
		else{
      			cout<<"\n Record found";
			}

}
bool compare(const Record &r1,const Record &r2){
			return r1.item_code<r2.item_code;
}
void del(){
	vector<Record>::iterator i;
	Record o1;
	cout<<"\n Enter name of record to be delete: ";
	cin>>o1.name;
	i=find(r1.begin(),r1.end(),o1);
	if(i==r1.end()){
		cout<<"\n Not found";
     }
	else{
		r1.erase(i);
		cout<<"\n Deleted";
		}
}
int main(){
	int ch;
	do{
	cout<<"\n...MENU...";
	cout<<"\n 1.INSERT";
	cout<<"\n 2.DISPLAY";
	cout<<"\n 3.SEARCH";
	cout<<"\n 4.SORT";
	cout<<"\n 5.DELETE";
	cout<<"\n 6.EXIT";
	cout<<"\n ENTER YOUR CHOICE:- ";
	cin>>ch;
	switch(ch){
			case 1: cout<<"\n Enter datails of item: ";
					insert();
			break;
			case 2: cout<<"\n Display details of item: ";
					display();
			break;
			case 3:
					search();
			break;
			case 4:	sort(r1.begin(),r1.end(),compare);
					cout<<"\n Sorted order on roll number";
					display();
			break;
			case 5: del();
			break;                                       
			case 6: cout<<"\n Wrong choice";
			break;
 		 }
	}while(ch!=6);
	return 0;
}
