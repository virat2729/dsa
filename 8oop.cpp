#include<iostream>
#include<string>
#include <map>
using namespace std;
 
int main()
{
    typedef map<string,int>mapType;
    mapType population;

    population.insert(pair<string,int>("Maharashtra",12600000));
    population.insert(pair<string,int>("Gujarat",1200000));
    population.insert(pair<string,int>("Bihar",2600000));
    population.insert(pair<string,int>("Delhi",126000));
    population.insert(pair<string,int>("Karnataka",51651651));

    cout<<"\n******Population Map******";
    cout<<"\nSize of population map is: "<<population.size();

    string statename;
    cout<<"\nEnter a state name: ";
    cin>>statename;

    

    mapType::iterator itr;
    itr=population.find(statename);
    if(itr!=population.end())
    {
        cout<<statename<<"'s population is: "<<itr->second;

    }    
    else
    {
        cout<<"\nStatename not found.";
    }
    population.clear();

    return 0;

}
