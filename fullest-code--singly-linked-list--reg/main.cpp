#include <iostream>

using namespace std;


class Node {

public:

    int data;

    Node* next;


    Node(int val) {

        data = val;

        next = nullptr;

    }

};


class LinkedList {

private:

    Node* head;


public:

    LinkedList() {

        head = nullptr;

    }


    // 1. Insert at beginning

    void insertAtBeginning(int val) {

        Node* newNode = new Node(val);

        newNode->next = head;

        head = newNode;

    }


    // 2. Insert at end

    void insertAtEnd(int val) {

        Node* newNode = new Node(val);

        if (head == nullptr) {

            head = newNode;

            return;

        }

        Node* temp = head;

        while (temp->next != nullptr)

            temp = temp->next;

        temp->next = newNode;

    }


    // 3. Insert at specific position (0-based index)

    void insertAtPosition(int val, int pos) {

        if (pos == 0) {

            insertAtBeginning(val);

            return;

        }

        Node* temp = head;

        for (int i = 0; i < pos - 1 && temp != nullptr; i++)

            temp = temp->next;


        if (temp == nullptr) {

            cout << "Position out of range!" << endl;

            return;

        }


        Node* newNode = new Node(val);

        newNode->next = temp->next;

        temp->next = newNode;

    }


    // 4. Delete from beginning

    void deleteAtBeginning() {

        if (head == nullptr) {

            cout << "List is empty!" << endl;

            return;

        }

        Node* temp = head;

        head = head->next;

        delete temp;

    }


    // 5. Delete from end

    void deleteAtEnd() {

        if (head == nullptr) {

            cout << "List is empty!" << endl;

            return;

        }

        if (head->next == nullptr) {

            delete head;

            head = nullptr;

            return;

        }


        Node* temp = head;

        while (temp->next->next != nullptr)

            temp = temp->next;


        delete temp->next;

        temp->next = nullptr;

    }


    // 6. Delete at position

    void deleteAtPosition(int pos) {

        if (head == nullptr) {

            cout << "List is empty!" << endl;

            return;

        }

        if (pos == 0) {

            deleteAtBeginning();

            return;

        }


        Node* temp = head;

        for (int i = 0; i < pos - 1 && temp->next != nullptr; i++)

            temp = temp->next;


        if (temp->next == nullptr) {

            cout << "Position out of range!" << endl;

            return;

        }


        Node* del = temp->next;

        temp->next = del->next;

        delete del;

    }


    // 7. Display list

    void display() {

        if (head == nullptr) {

            cout << "List is empty!" << endl;

            return;

        }

        Node* temp = head;

        while (temp != nullptr) {

            cout << temp->data << " -> ";

            temp = temp->next;

        }

        cout << "NULL" << endl;

    }

};


// Driver Code

int main() {

    LinkedList list;


    list.insertAtBeginning(10);

    list.insertAtEnd(20);

    list.insertAtEnd(30);

    list.insertAtPosition(25, 2);

    list.display();  // 10 -> 20 -> 25 -> 30 -> NULL


    list.deleteAtBeginning();

    list.deleteAtEnd();

    list.deleteAtPosition(1);

    list.display();  // 20 -> NULL


    return 0;

}

