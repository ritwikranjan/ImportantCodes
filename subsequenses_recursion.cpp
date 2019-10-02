#include<iostream>

using namespace std;

void subsequences(char *in, char *out, int i, int j)
{
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<", ";
        return;
    }
    out[j]=in[i];
    subsequences(in,out,i+1,j+1);
    subsequences(in,out,i+1,j);
    return;
}

int main()
{
    char a[100];
    char b[100];
    cin>>a;
    subsequences(a,b,0,0);
    return 0;
}
