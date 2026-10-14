#include <iostream>
#include<string>
using namespace std;
class vehicle
{
protected:
    string vehiclename,vehiclenumber,modelnumber,color;

public:
    void setvehicle (string n,string v,string m,string c)
    {
        vehiclename=n;
        vehiclenumber=v;
        modelnumber=m;
        color=c;
    }
    void displayvehicle()
    {
        cout<<"VEHICLE NAME:"<<vehiclename<<endl;
        cout<<"VEHICLE NUMBER:"<<vehiclenumber<<endl;
        cout<<"MODEL NUMBER:"<<modelnumber<<endl;
        cout<<"COLOR:"<<color<< endl;

    }
};
class car: public vehicle{
int seats;
public:
    void setcar(int s){seats =s;}
    void displaycar(){
        displayvehicle();
        cout<<"seats:"<<seats<<endl;
    }
};
class bike:public vehicle{
string type;
public:
    void setbike(string t){type=t;}
    void displaybike(){
    displayvehicle();
    cout<<"bike type:"<<type<<endl;
    }
};
int main()
{
    car c;
    c.setvehicle("BMW","TN05435","330i","WHITE");
    c.setcar(5);
    c.displaycar();

    bike b;
    b.setvehicle("RM5","TN02334","c100","BLUE");
    b.setbike("sports");
    b.displaybike();

    return 0;

}
