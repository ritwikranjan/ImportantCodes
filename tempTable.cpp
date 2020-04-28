#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float cal,far,kel;
    cout<<setw(12)<<"Farenheit"<<setw(10)<<"Celcius"<<setw(10)<<"Kelvin"<<endl;
    for(int i = 0; i <= 15; i++){
        far = i*20;
        cal = (far - 32) * 5/9;
        kel = cal + 273.15;
        cout<<setw(12)<<far<<setw(10)<<cal<<setw(10)<<kel<<endl;
    }
    return 0;
}