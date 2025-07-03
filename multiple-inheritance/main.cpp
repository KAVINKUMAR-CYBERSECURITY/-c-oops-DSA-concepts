#include<iostream>
using namespace std;
class GrandFather{
    public:
        GrandFather(){cout<<"GF-Cnstr";}
        void farm_house(){
            cout<<"Grand. father's farm house"<<endl;
        }
};
class Father:public GrandFather{
    public:
        Father(){cout<<"Fr cnstr";}
        int cash=5000;//var
        void house(){//beh
            cout<<"Father's house"<<endl;}
    private:
        int savings=50000;
    protected:
        void bike(){
            cout<<"Father's bike"<<endl;}};
class Child:public Father{//public mode 
    public:
        Child(){cout<<"Ch cnstr";}
        int packet_money=1000;
        void mobile(){
            cout<<"Child's mobile"<<endl;
            bike();//father : proected
        }};
int main(){
    //Father fr;fr.house();cout<<fr.cash;
    Child ch;
    ch.mobile();cout<<ch.packet_money;
    ch.house();cout<<ch.cash;ch.farm_house();
}//object sharing 
