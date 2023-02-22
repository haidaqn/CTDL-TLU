/* // C++ code to implement Priority Queue 
// using Linked List 
#include <bits/stdc++.h> 
using namespace std; 
  
// Node 
typedef struct node 
{ 
    int data; 
  
    // Lower values indicate 
    // higher priority 
    int priority; 
  
    struct node* next; 
  
} Node; 
  
// Function to create a new node 
Node* newNode(int d, int p) 
{ 
    Node* temp = (Node*)malloc(sizeof(Node)); 
    temp->data = d; 
    temp->priority = p; 
    temp->next = NULL; 
  
    return temp; 
} 
  
// Return the value at head 
int peek(Node** head) 
{ 
    return (*head)->data; 
} 
  
// Removes the element with the 
// highest priority from the list 
void pop(Node** head) 
{ 
    Node* temp = *head; 
    (*head) = (*head)->next; 
    free(temp); 
} 
  
// Function to push according to priority 
void push(Node** head, int d, int p) 
{ 
    Node* start = (*head); 
  
    Node* temp = newNode(d, p); 
    if ((*head)->priority > p) 
    { 
          
        temp->next = *head; 
        (*head) = temp; 
    } 
    else
    { 
          
        // Traverse the list and find a 
        // position to insert new node 
        while (start->next != NULL && 
            start->next->priority < p) 
        { 
            start = start->next; 
        } 
  
        // Either at the ends of the list 
        // or at required position 
        temp->next = start->next; 
        start->next = temp; 
    } 
} 
  
// Function to check is list is empty 
int isEmpty(Node** head) 
{ 
    return (*head) == NULL; 
} 
  
// Driver code 
int main() 
{ 
      
    // Create a Priority Queue 
    // 7->4->5->6 
    Node* pq = newNode(4, 1); 
    push(&pq, 5, 2); 
    push(&pq, 6, 3); 
    push(&pq, 7, 0); 
    push(&pq, 7, 10); 
  
    while (!isEmpty(&pq)) 
    { 
        cout << " " << peek(&pq); 
        pop(&pq); 
    } 
    return 0; 
}  */
/* 
#include <bits/stdc++.h>

using namespace std;
int i = 1;
void THN(int n, string c1, string c2, string c3) {
    if( n == 1) {
        cout<<"Buoc "<<i<<" : "<<c1<<"-->"<<c3<<endl;
        i++;
    }
    else {
        THN(n-1,c1,c3,c2);
        THN(1,c1,c2,c3);
        THN(n-1,c2,c1,c3);
    }
}

void SinhThapPhan(int i, int a[100], int N) {
  if (i > N) {
    for (int x = 0; x < N; x++)
      cout << a[x];
    cout << endl;
  } else {
    for (int x = 0; x <= 9; x++) {
      a[i - 1] = x;
      SinhThapPhan(i + 1, a, N);
    }
  }
}

int main() {

    THN(8,"coc 1","coc 2","coc 3");


    return 0;
} */
/* 


#include <bits/stdc++.h>

using namespace std;

void THN(int n, string a, string b, string c) {
    if(n == 1) {
        cout << a << "  " << b << endl;
    }
    else {
        THN(n - 1, a, c, b);
        THN(1, a, b, c);
        THN(n - 1, b, a, c);
    }

}

int main() {


    return 0;
} */
/* 
#include <bits/stdc++.h>

using namespace std;

void print(int n, int arr[]) {
    for(int i =0;i < n;i++) 
        cout<<arr[i]<<"   ";
    cout<<endl;
}

void khoiTao(int n, int a[] ) {
    for(int i =0;i < n;i++) 
        a[i] = rand() % n;
}

void noibot(int n, int a[]) {
    for(int i = 0;i<n-1;i++) {
        for(int j = i+1;j<n;j++) {
            if(a[j] < a[i]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}


int main() {

    srand(time(0));

    int n = 100000;
    int arr[100000];

    khoiTao(n,arr);
    print(n,arr);
    cout<<"------------------------------------\n";
    noibot(n,arr);
    print(n,arr);

    return 0;
} */
/* 
#include <bits/stdc++.h>

using namespace std;

int main()
{

    char x = '9';


    if (x - '0' >= 0 && x - '0' <= 9)
    {
        cout << "dung";
    }

    return 0;
}
 */
 https://replit.com/@NgocThang2/tree?v=1