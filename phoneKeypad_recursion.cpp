#include<iostream>

using namespace std;

void phoneKey(char *in, char *out, int i, int j)
{
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<", ";
        return;
    }
    switch(in[i]%48)
    {
	case 0:
	case 1:
		phoneKey(in,out,i+1,j);
		break;
	case 2:
		out[j] = 'A';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'B';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'C';
		phoneKey(in,out,i+1,j+1);
		break;
	case 3:
		out[j] = 'D';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'E';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'F';
		phoneKey(in,out,i+1,j+1);
		break;
	case 4:
		out[j] = 'G';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'H';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'I';
		phoneKey(in,out,i+1,j+1);
		break;
	case 5:
		out[j] = 'J';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'K';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'L';
		phoneKey(in,out,i+1,j+1);
		break;
	case 6:
		out[j] = 'M';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'N';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'O';
		phoneKey(in,out,i+1,j+1);
		break;
	case 7:
		out[j] = 'P';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'Q';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'R';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'S';
		phoneKey(in,out,i+1,j+1);
		break;
	case 8:
		out[j] = 'T';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'U';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'V';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'W';
		phoneKey(in,out,i+1,j+1);
		break;
	case 9:
		out[j] = 'X';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'Y';
		phoneKey(in,out,i+1,j+1);
		out[j] = 'Z';
		phoneKey(in,out,i+1,j+1);
		break;
    }
    return;
}

int main()
{
    char a[100];
    char b[100];
    cin>>a;
    phoneKey(a,b,0,0);
    return 0;
}
