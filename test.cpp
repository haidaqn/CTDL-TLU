#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};

//thêm vào node
node* makeNode(int x){
    node *newNode = new node();
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
};

// in ds
void duyet(node *head) {
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

//đếm
int count (node *head) {
    int dem = 0;
    while (head != NULL)
    {
        ++dem;
        head = head->next;
    }
    return dem;
}

// thêm vào đầu ds
void pushFront(node **head, int x) {
    node *newNode = makeNode(x); //newNode ở đây là con trỏ kiểu node
    newNode->next = (*head); // địa chỉ của node head trong dslk
    (*head) = newNode;
}

// thêm vào cuối ds
void pushBack(node **head, int x ) {
    node *temp = *head;
    node *newNode = makeNode(x);
    if(*head == NULL) {
        *head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// chèn nốt vào danh sách

void insert(node **head, int k, int x)
{
    int n = size_t(*head);
    if (k < 1 || k > n + 1)
        return;
    if (k == 1)
    {
        pushFront(head, x);
        return;
    }
    node *temp = *head;
    for (int i = 1; i <= k - 2; i++)
    {
        temp = temp->next;
    }
    // temp : k - 1
    node *newNode = makeNode(x);
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    node *head = NULL;

    for (int i = 0; i <= 5; i++) {
        pushFront(&head, i);
    };

    insert(&head, 3, 9);

    duyet(head);

    return 0;
}