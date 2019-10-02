#include <iostream>

using namespace std;

int numbox(int n)
{
    for(int i = 1; i<= 2*n-1; i++){
        for(int j = 1; j<= 2*n-1; j++){
            if (i == 1 || j == 1 || i == 2*n-1 || j == 2*n-1)
                cout<<n<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i<= n; i++)
    numbox(i);
}
