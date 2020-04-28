#include<bits/stdc++.h>
using namespace std;

char* tokenString(char *s, char delim){
    static char* input = NULL;
    if(s!=NULL){
        input = s;
    }
    if(input==NULL){
        return NULL;
    }
    int i = 0;
    char* output = new char[strlen(input)+1];
    while(delim!=input[i]){
        output[i] = input[i];
        i++;
        if(input[i]=='\0'){
            input = NULL;
            return output;
        }
    }
    output[i] = '\0';
    input = input + i + 1;
    return output;
}

int main(){
    char s[] = "alpha is beta";
    char* ptr = tokenString(s,' ');
    cout<<ptr;
    ptr = tokenString(NULL,' ');
    cout<<endl<<ptr;
    ptr = tokenString(NULL,' ');
    cout<<endl<<ptr;
}