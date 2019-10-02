#include<iostream>

using namespace std;

class vectorSTL
{
    int * arr;
    int clen;
    int tlen;
public:
    vectorSTL()
    {
        clen = 0;
        tlen = 1;
        arr = new int[1];
    }
    void pushback(const int a)
    {
        if(clen==tlen){
            tlen*=2;
            int * oldarr = arr;
            arr = new int[tlen];
            for(int i = 0; i < clen; i++){
                    arr[i] = oldarr[i];
            }
            delete oldarr;
        }
        arr[clen] = a;
        clen++;
    }
    int& operator[](int i)
    {
        return *(arr + i);
    }
    void popback()
    {
        delete &arr[clen-1];
        clen--;
    }
    vsize()
    {
        return clen;
    }
    void reserve(int i)
    {
        if(tlen!=1){
            tlen = i;
            int * oldarr = arr;
            arr = new int[tlen];
            for(int i = 0; i < clen; i++){
                    arr[i] = oldarr[i];
            }
            delete oldarr;
        }
        else
            tlen = i;
    }
    int maxSize()
    {
        return tlen;
    }
    void operator=(int a)
    {

    }
};
ostream& operator<<(ostream &out, vectorSTL &v)
{
    for (int i = 0; i<v.vsize();i++)
    {
        cout<<v[i]<<endl;
    }
    return out;
}
int main()
{
    vectorSTL v;

    v.pushback(1);
    cout<<v.maxSize()<<endl;
    v.pushback(10);
    cout<<v.maxSize()<<endl;
    v.pushback(100);
    cout<<v.maxSize()<<endl;
    v.reserve(100);
    v.pushback(1000);
    cout<<v.maxSize()<<endl;
    v.popback();
    v[2]=3;
    cout<<v.maxSize()<<endl;
    cout<<v<<endl;
    cout<<v.vsize();
}
