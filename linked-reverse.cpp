#include <iostream>
using namespace std;
class Node{
	public:
    Node* prev;
    int data;
    Node* next;
};
int main(){
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();
    Node* n5 = new Node();
    n1->data = 3;
    n2->data = 5;
    n3->data = 1;
    n4->data = 4;
    n5->data = 2;
    n1->prev = NULL;
    n2->prev = n1;
    n3->prev = n2;
    n4->prev = n3;
    n5->prev = n4;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    return 0;
}
