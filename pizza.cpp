#include<iostream>
using namespace std;

const int Max=5;

class Pizparl
{
    int front,rear;
    int orders[Max];
    public:
        Pizparl()
        {
            front=rear=-1;
        }
        bool addOrder(int);
        void serveOrder();
        void display();
};

bool Pizparl::addOrder(int id)
{
    if(rear==-1)
    {
        front=rear=0;
        orders[rear]=id;
        return true;
    }
    else
    {
        int pos=(rear+1)%Max;
        if(pos==front)
        {
            cout<<"Cafe is Full.";
            return false;
        }
        else
        {
            rear=pos;
            orders[rear]=id;
            return true;
        }
    }
}

void Pizparl::serveOrder()
{
    if(front==-1)
    {
        cout<<"\n Cafe is empty.";
    }
    else
    {
        cout<<"Order ID "<<orders[front]<<" is processed.";
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%Max;
        }
    }
}

void Pizparl::display()
{
    int i=0;
    if(front==-1)
    {
        cout<<"Cafe is empty.";
    }
    else
    {
        cout<<"\nOrder ID's: ";
        for(i=front;i!=rear;i=((i+1)%Max))
        {
            cout<<orders[i]<<" ";

        }
        cout<<orders[rear];
    }
}

int main()
{
    int ch,id=0;
    Pizparl p;
    do{
    cout<<"\n-----------------";
    cout<<"\n\t Pranav Cafe \t";
    cout<<"\n-----------------";
    cout<<"\n----MENU----";
    cout<<"\n1.Accept Order.";
    cout<<"\n2.Serve Order.";
    cout<<"\n3.Display Order.";
    cout<<"\n4.Exit.";
    cout<<"\nEnter Your choice: ";
    cin>>ch;

    switch(ch)
    {
        case 1:
        id++;
        if(p.addOrder(id))
        {
            cout<<"\nThank You.Order ID is: "<<id;
        }
        else
        {
            id--;
        }
        break;

        case 2:
        p.serveOrder();
        break;

        case 3:
        p.display();
        break;

    }
    }while(ch!=4);
    cout<<"\nVisit again.";
    return 0;
}