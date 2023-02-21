#include"BSTNode.h"
#include<iostream>

using namespace std;

template<class T>
class BST{
    private:
        BSTNode<T> *root;
        void AddToRoot(BSTNode<T> *&r,T value){
            BSTNode<T> *n = new BSTNode<T>;
            n->data=value;
            n->pLeft=0;
            n->pRight=0;
            if(r==0){
                r=n;
            }
            if(r->data==value) return;
            if(r->data > value){
                AddToRoot(r->pLeft,value);
            }
            if(r->data<value){
                AddToRoot(r->pRight,value);
            }
        }
        bool SearchFromRoot(BSTNode<T> *r,T value){
            if(r==0) return false;
            if(r->data==value) return true;
            if(value < r->data)
                return SearchFromRoot(r->pLeft,value);
            
            else
                return SearchFromRoot(r->pRight,value);
        }
        void PrintFromRoot(BSTNode<T> *r){ // tien thu tu , trung thu tu 
            if(r!=0){
                cout<<r->data<<" ";
                PrintFromRoot(r->pLeft);
                PrintFromRoot(r->pRight);
            }
        }
        int height(BSTNode<T> *r)
        {
            if (r == nullptr || (r->pLeft == nullptr && r->pRight == nullptr))
                return 0;
            else
            {
                int leftHeight = height(r->pLeft);
                int rightHeight = height(r->pRight);
                return 1 + max(leftHeight, rightHeight);
            }
        }
    public:
        BST(){
            root=0;
        }
        void Add(T value){
            AddToRoot(root,value);
        }
        bool Search(T value){
            return SearchFromRoot(root,value);
        }
        void Print(){
            PrintFromRoot(root);
        }
        void chieucao() {
            cout << height(root) << endl;
        }
       
};
