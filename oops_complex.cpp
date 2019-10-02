#include<iostream>

using namespace std;

class complex_no
{
    int real;
    int img;

public:
    complex_no()
    {
        real = 0;
        img = 0;
    }
    complex_no(const int r, const int i)
    {
        real = r;
        img = i;
    }
    void setReal(const int r)
    {
        real = r;
    }
    void setImg(const int i)
    {
        img = i;
    }
    int getReal() const
    {
        return real;
    }
    int getImg() const
    {
        return img;
    }
    void print()
    {
        if(img>0)
            cout<<real<<" + "<<img<<"i"<<endl;
        else
            cout<<real<<" - "<<-img<<"i"<<endl;
    }
    complex_no operator+(const complex_no &X)
    {
        real += X.real;
        img += X.img;
        complex_no C(real,img);
        return C;
    }
    void operator-(const complex_no X)
    {
        real -= X.real;
        img -= X.img;
    }
    void operator!()
    {
        img = - img;
    }
};
istream& operator>>(istream &is, complex_no &c)
{
    int r,i;
    cin>>r>>i;
    c.setReal(r);
    c.setImg(i);
    return is;
}
ostream& operator<<(ostream &os, complex_no &c)
{
    c.print();
    return os;
}
int main()
{
    complex_no C1(1,3);
    complex_no C2(2,4);
    complex_no c;
    C1.print();
    C2.print();
    cin>>c;
    C1 + C2 + c;
    cout<<C1;

}
