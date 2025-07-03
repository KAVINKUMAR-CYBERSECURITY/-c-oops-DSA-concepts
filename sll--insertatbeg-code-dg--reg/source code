#include<iostream>
using namespace std;
//class Node
class Node{
    public:
        int data;
        Node *next;
        Node(int val){
            data=val;
            next=nullptr;}};
class LinkedList{
    private:
        Node *head;
    public:
        LinkedList(){
            head=nullptr;}
        void insertAtBeg(int val){
            Node* newNode=new Node(val);
            newNode->next=head;
            head=newNode;
        }
};
int main(){
    LinkedList ll;
    ll.insertAtBeg(5);//1000
    ll.insertAtBeg(6);//2000
    ll.insertAtBeg(7);//3000
    ll.insertAtBeg(8);//4000
}