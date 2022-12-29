#include<iostream>
using namespace std;

class student;
class person{
    private:
        string name,blo,add,tele,dlo,dob;
    
    public:
    friend class student;

    person(){
        //this->name=name;
        name="",blo="",tele="",dlo="",dob="";
    }

    person(const person &p){
        name=p.name;
        blo=p.blo;
        add=p.add;
        tele=p.tele;
        dlo=p.dlo;
        dob=p.dob;
    }

};

class student{
    private:
        int roll;
        string cn;
        char *div;
        char d;

    public:
        static int count; //How many objects are created is count by count
        student(){
            roll=0;
            cn="";
            div=NULL;
            count++;
        }

        void acceptStudent(person p){
            cout<<"Enter your Name : "<<endl;
            cin>>p.name;
            cout<<"Enter your BloodGroup : "<<endl;
            cin>>p.blo;
            cout<<"Enter your address : "<<endl;
            cin>>p.add;
            cout<<"Enter your Telephone number : "<<endl;
            cin>>p.tele;
            cout<<"Enter your Driving License No : "<<endl;
            cin>>p.dlo;
            cout<<"Enter your Date of Birth  : "<<endl;
            cin>>p.dob;
            cout<<"Enter your Roll No : "<<endl;
            cin>>roll;
            // cout<<"Enter your Class Name : "<<endl;
            // cin>>cn;
            // cout<<"Enter your Division : "<<endl;
            // cin>>div;
            // div=&d;
        }

        inline void displayStudent(person &p){
            cout<<"Name:"<<p.name<<"|";
            cout<<"Blood:"<<p.blo<<"|";
            cout<<"Address:"<<p.add<<"|";
            cout<<"Phone:"<<p.tele<<"|";
            cout<<"Liscense:"<<p.dlo<<"|";
            cout<<"Birthdate:"<<p.dob<<"|";
            cout<<"Roll Number:"<<roll<<"|";
            // cout<<"Div:"<<div<<"|";
            // cout<<"Class Name:"<<cn;
            cout<<endl;
        }
        ~student(){
            delete(div);
        }
        static int get(){
            return count;
        }
};
int student::count=0;

int main(){
    person p;
    student s;
    s.acceptStudent(p);
    s.displayStudent(p);
   
}
