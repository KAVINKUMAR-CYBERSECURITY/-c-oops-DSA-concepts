include<iostream>
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
                
        void deleteAtBeg(){
            Node *temp=head;
            if(head==tail){
                head=tail=nullptr;
            }else{
                head=head->next;
                head->prev=nullptr;
            }delete temp;
        }
        void deleteAtEnd(){
            Node *temp=tail;
            if(head==tail){
                head=tail=nullptr;
            }else{
                tail=tail->prev;
                tail->next=nullptr;
            }delete temp;
        }
        void display(){
            Node *temp=head;
            while(temp!=nullptr){
                cout<<temp->data<<"->";
                temp=temp->next;
            }cout<<"NULL";
        }void displayRev(){
            Node *temp=tail;
            while(temp!=nullptr){
                cout<<temp->data<<"->";
                temp=temp->prev;
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
    cout<<endl;dl.displayRev();//50->10->20->30->40->NULL
    dl.deleteAtBeg();cout<<endl;
    dl.display();//30->20->10->50->NULL
    dl.deleteAtEnd();cout<<endl;
    dl.display();//30->20->10->NULL
    
}