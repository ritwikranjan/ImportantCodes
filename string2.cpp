#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string  s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    int l1 = s1.length(), l2 = s2.length(), alpha[1000] = {0}, beta[1000] = {0};
    if (l1 == l2){
        for (int i = 0; i < s1.length(); i++){
            for (int j = 'A'; j<= 'z'; j++){
                if (s1[i] == j){
                    alpha[j]++;
                }
            }
        }
        for (int i = 0; i < s2.length(); i++){
            for (int j = 'A'; j<= 'z'; j++){
                if (s2[i] == j){
                    beta[j]++;
                }
            }
        }
        for (int j = 'A'; j<= 'z'; j++){
            if (alpha[j] != beta [j] && alpha[j] == 0){
                cout<<"false";
                break;
            }
            else if(j == 122){
                cout<<"true";
            }
        }
    }
    else{
        cout<<"false \n";
    }
}
