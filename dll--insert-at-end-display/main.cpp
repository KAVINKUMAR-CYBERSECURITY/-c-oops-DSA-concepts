#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node *prev;
        Node(int val){//10
            data=val;//10
            prev=next=nullptr;}};
class DoublyLinkedList{
    private:
        Node *head;Node *tail;
    public:
        DoublyLinkedList(){
            head=tail=nullptr;
        }
        void insertAtBeg(int val){
            Node *newNode=new Node(val);
            if(head==nullptr){
                head=tail=newNode;}
            else{
                head->prev=newNode;
                newNode->next=head;
                head=newNode;}}
                
        void insertAtEnd(int val){
            Node *newNode=new Node(val);
            if(tail==nullptr){
                head=tail=newNode;}
            else{
                tail->next=newNode;
                newNode->prev=tail;
                tail=newNode;}}
        void display(){
            Node *temp=head;
            while(temp!=nullptr){
                cout<<temp->data<<"->";
                temp=temp->next;
            }cout<<"NULL";
        }
    
};
int main(){
    DoublyLinkedList dl;
    dl.insertAtBeg(10);
    dl.insertAtBeg(20);
    dl.insertAtBeg(30);
    dl.insertAtBeg(40);
    dl.insertAtEnd(50);dl.display();//40->30->20->10->50->NULL
}