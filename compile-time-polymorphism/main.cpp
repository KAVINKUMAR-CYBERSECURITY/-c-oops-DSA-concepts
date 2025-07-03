#include<iostream>
using namespace std;
class Polymorphing{
    public:
        void add(int a,int b){
            cout<<"Function-1="<<a+b;
        
    }
        void add(int a,int b,int c){
            cout<<"Function-2="<<a+b+c;
    
}
        void add(double a,double b){
            cout<<"Function-3="<<a+b;
        
    }

};
int main(){
    Polymorphing p1;
    p1.add(5,6);
    p1.add(5,6,7);
    p1.add(4.5,6.6);
}