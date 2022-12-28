#include<iostream>
using namespace std;

class Queue
{
	public:
		int front,rear,n,arr[1000],size; 
		void setdata()
		{
			cout<<"\n Enter the Maximum Number of Jobs : ";
			cin>>size;
			int arr[size];
		}	
		void enqueue()
		{
			cout<<"Enter Job Data : ";
			cin>>n;
			if(rear==size-1)
			{
				cout<<"Overflow.";
			}
			else
			{
				rear++;
				arr[rear]=n;
			}
		}
		int dequeue()
		{
			if(front==rear)
			{
				cout<<"Underflow.";
				return 0;
			}
			else
			{
				front++;
				n=arr[front];
				arr[front]=0;
				cout<<"The deleted element is : "<<n;
				return n;
			}
		}
		void display()
		{
			if(front==rear)
			{
				cout<<"Queue is Empty.";
			}
			else
			{
				cout<<"The Job Queue is : ";
				for(int i=0;i<=rear;i++)
				{
					cout<<arr[i]<<" ";
				}
			}
		}
};

int main()
{
	Queue q;
	q.front=-1;
	q.rear=-1;
	int choice;
	q.setdata();
	do
	{
		cout<<"\n 1. Insert Job.\n 2. Delete Job.\n 3. Display Jobs.\n 4. Exit \n Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1: q.enqueue();
			break;
			case 2: q.dequeue();
			break;
			case 3: q.display();
			break;
			case 4:
			break;
			default : cout<<"Invalid Input. Please Try Again.";
			break;
		}
	}
	while(choice!=4);
	return 0;
}
