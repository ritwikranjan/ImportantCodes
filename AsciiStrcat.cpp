
#include <iostream>
#include <string>

using namespace std;

int main() {
    long int N,X = 0,Su = 0;

    cin>>N;
    string S;
    for(int i = 0; i <= N; i++){
        char alpha[500];
        cin.getline(alpha,500);
        S = S + alpha;
    }
    for(int j= 1; j<=N*500; j++){
        X=int(S[j]);
        Su = Su + X;
    }
    cout<<Su<<S;
    return 0;
}

