#include<iostream>
using namespace std;
class item{
    int a;
    float b;
    public:
    void putdata(int x,float y){
        a=x;
        b=y;
    }
    void getdata(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main(){
    item ob;
    ob.putdata(2,4);
    ob.getdata();
    return 0;
}