#include<iostream>
#include<cstring>
using namespace std;
class car
{
public:
    int price;
    int model_no;
    char *name;
public:
    setname(char *n)
    {
        if(name == NULL){
            name = new char[strlen(n)+1];
            strcpy(name,n);
        }
        else{
            delete name;
            name = new char[strlen(n)+1];
            strcpy(name,n);
        }
    }
    setprice(int p)
    {
        price = p;
    }
    setmodel(int m)
    {
        model_no = m;
    }
    getname()
    {
        cout<<name<<endl;
    }
    getprice()
    {
        cout<<price<<endl;
    }
    getmodel()
    {
        cout<<model_no<<endl;
    }
    car()
    {
        cout<<"the constructor"<<endl;
    }
    car(char *n,int m, int p)
    {
        cout<<"parametrized constructor"<<endl;
        price = p;
        model_no = m;
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }
    car(car &x)
    {
        cout<<"deep copy constructor"<<endl;
        price = x.price;
        model_no = x.model_no;
        name = new char[strlen(x.name)+1];
        strcpy(name,x.name);
    }
    print()
    {
        cout<<name<<endl;
        cout<<model_no<<endl;
        cout<<price<<endl;
    }
    ~car()
    {
        cout<<"destructor is called "<<name<<endl;
        if(name != NULL){
            delete name;
        }
    }
};

int main()
{
    car c;
    c.setname("BMW");
    c.setprice(1000);
    c.setmodel(11);
    c.getname();
    c.getprice();
    c.getmodel();

    car D("Ferrari",2000,22);


    car E = D;
    E.name[0]='G';
    D.print();
    E.print();
}
