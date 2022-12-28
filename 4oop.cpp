#include<iostream>
#include<string>
using namespace std;

class book
{
    private:
    int pages;
    string title;
    float prices;
    public:
    book()
    {
        title=" ";
        prices=0.0;
        pages=0;
    }
    void getdata()
    {
        cout<<"\nEnter title: ";
        cin.ignore();
        getline(cin,title);
        cout<<"\nEnter price: ";
        cin>>prices;
        cout<<"\nEnter page count: ";
        cin>>pages;
    }

    void putdata()
    {
        cout<<"\n----------------------";
        cout<<"\nInformation: ";
        cout<<"\nTitle: "<<title;
        cout<<"\nPrice: "<<prices;
        try{
            if(pages<0)
                throw pages;
        }
        catch(int f){
            cout<<"\nPages not valid"<<f;
            pages=0;
        }

        cout<<"\nPage count: "<<pages;
    }
};

class tape
{
    private:
    string name;
    float price;
    float playtime;
    public:
    tape()
    {
        name=" ";
        price=0.0;
        playtime=0.0;
    }
    void get_data()
    {
        cout<<"\nEnter name : ";
        cin.ignore();
        getline(cin,name);
        cout<<"\nEnter price: ";
        cin>>price;
        cout<<"\nEnter playtime: ";
        cin>>playtime;

    }

    void put_data()
    {
        cout<<"\nName is: "<<name;
        cout<<"\nPrice is: "<<price;
        try{
            if(playtime<0.0)
                throw playtime;
        }
        catch(float r){
            cout<<"\nInvalid Playtime: "<<playtime;
            playtime=0.0;
        }
        cout<<"\nPlaytime is: "<<playtime;
    }
};

int main()
{
    book b[10];
    tape t[10];
    int choice,bCount=0,tCount=0;

    do{
        cout<<"\n1.Add book";
        cout<<"\n2.Add tape";
        cout<<"\n3.Display book ";
        cout<<"\n4.Display tape ";
        cout<<"\n5.Exit";
        cout<<"\nEnter a choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            b[bCount].getdata();
            bCount++;
            break;

            case 2:
            t[tCount].get_data();
            tCount++;
            break;

            case 3:
            for(int j=0;j<bCount;j++)
            {
                b[j].putdata();
            }
            break;

            case 4:
            for(int j=0;j<tCount;j++)
            {
                t[j].put_data();
            }
            break;

        }
    }while(choice!=5);
    return 0;
}