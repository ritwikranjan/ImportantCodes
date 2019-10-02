#include <iostream>

using namespace std;

class complexNo
{
	int real;
	int imaginary;
public:
	complexNo(int a, int b)
	{
		real = a;
		imaginary = b;
	}
	complexNo(complexNo &C)
	{
		real = C.real;
		imaginary = C.imaginary;
	}
	complexNo()
	{
		real = 0;
		imaginary = 0;
	}
	void print()
	{
		cout<<real<<"+"<<imaginary<<"i";
	}
	void setImg(int i)
	{
		imaginary = i;
	}
	void setReal(int r)
	{
		real = r;
	}
	int getReal()
	{
		return real;
	}
	int getImg()
	{
		return imaginary;
	}


};

inline complexNo add(complexNo C1, complexNo C2)
	{
		complexNo ans;
		ans.setReal (C1.getReal() + C2.getReal());
		ans.setImg(C1.getImg() + C2.getImg());
		return ans;
	}

complexNo operator+(complexNo C1, complexNo C2)
{
	complexNo C;
	C = add(C1,C2);
	return C;
}

istream& operator>>(istream& in,complexNo &C)
{
	int r,i;
	cin>>r>>i;
	C.setReal(r);
	C.setImg(i);
	return in;
}
ostream& operator<<(ostream &out, complexNo C)
{
	C.print();
	return out;
}

int main()
{
	complexNo C1;
	cin>>C1;
	complexNo C2(5,6);
	complexNo C3;
	C3 = C1 + C2;
	cout<<C1<<endl<<C2<<endl<<C3;
}
