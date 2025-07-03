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
        void insertAtEnd(int val){
            Node* newNode=new Node(val);
            Node *temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;//4k->3k->2k->1k
            }//temp=1000
            temp->next=newNode;
        }
        void insertAtPos(int val, int pos){
            Node* newNode=new Node(val);
            Node *temp=head;//pos 2
            for(int i=0;i<pos-1;i++){//4k->3k->2k-
                temp=temp->next;
            }newNode->next=temp->next;
            temp->next=newNode;
        }
        void deleteAtBeg(){
            Node *temp=head;
            head=head->next;
            delete(temp);
        }
        void deleteAtEnd(){
            Node* temp=head;//3000
            while(temp->next->next!=nullptr){
                temp=temp->next;//4k->3k->2k->1k
            }delete(temp->next);
            temp->next=nullptr;
        }
        void display(){
            Node *temp=head;
            while(temp!=nullptr){
                cout<<temp->data<<"->";
                temp=temp->next;//4k->3k->2k->1k
            }//temp=1000 
            cout<<"NULL";
        }
        
};
int main(){
    LinkedList ll;
    ll.insertAtBeg(5);//1000
    ll.insertAtBeg(6);//2000
    ll.insertAtBeg(7);//3000
    ll.insertAtBeg(8);//4000
    ll.insertAtEnd(9);//5000
    ll.display();//8->7->6->5->9->NULL
    //ll.deleteAtBeg();//4000->8
   // cout<<endl;ll.display();//7->6->5->9->NULL
    //ll.deleteAtEnd();
    ll.insertAtPos(10,3);
    cout<<endl;ll.display();//8->7>6->10->5->9->NULL
}