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
        Node *head;
    public:
        DoublyLinkedList(){
            head=nullptr;
        }
        void insertAtBeg(int val){
            Node *newNode=new Node(val);
            if(head!=nullptr){
                head->prev=newNode;
                newNode->next=head;}
            head=newNode;
        }
};
int main(){
    DoublyLinkedList dl;
    dl.insertAtBeg(10);
    dl.insertAtBeg(20);
    dl.insertAtBeg(30);
}