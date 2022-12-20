#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};

node* makeNode(int x){
    node *newNode = new node();
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
};

void duyet(node *head) {
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int count (node *head) {
    int dem = 0;
    while (head != NULL)
    {
        ++dem;
        head = head->next;
    }
    return dem;
}

void pushFront(node **head, int x) {
    node *newNode = makeNode(x); //newNode ở đây là con trỏ kiểu node
    newNode->next = (*head); // địa chỉ của node head trong dslk
    (*head) = newNode;
}

void pushBack(node **head, int x ) {
    node *temp = *head;
    node *newNode = makeNode(x);
    if(temp == NULL) {
        temp = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main() {
    node *head = NULL;

    for (int i = 0; i <= 5; i++) {
        pushFront(&head, i);
    };

    pushBack(&head, 19);

    pushFront(&head, 99);

    duyet(head);

    return 0;
}