#include <iostream>
#include <stack>
using namespace std;

struct Node{
    int data;
    Node* nextNode;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = NULL;
    }
    void addNode(int num, int index);
    void print();
};

void LinkedList::addNode(int num, int index) {
    Node* node = new Node;
    node->data = index;
    node->nextNode = NULL; /********/
    if(head == NULL) {
        head = node; 
        head->nextNode = NULL;
    }else {
        Node* cur = head;
        if(num == 0) {
            if(cur->nextNode) {
                Node* next = cur->nextNode;
                node->nextNode = next;
            }
            node->nextNode = head;
            head = node;
        }else {
            while(num > 1 && cur->nextNode != NULL) {
                cur = cur->nextNode;
                --num;
            }
            if(cur->nextNode) {
                Node* next = cur->nextNode;
                node->nextNode = next;
            }        
            cur->nextNode = node;
        }
    }
}

void LinkedList::print() {
    stack<int>s;
    Node* cur = head;
    while(cur!= NULL) {
        s.push(cur->data);
        cur = cur->nextNode;
    }
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

int main() {
    LinkedList list;
    int S, data;
    cin >> S;
    for(int i=0; i<S; i++) {
        cin >> data;
        list.addNode(data, i+1);
    }
    list.print();

    return 0;
}