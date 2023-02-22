#ifndef tree_h
#define tree_h
#include "list.h"
#include "treenode.h"

int bac = 0;
template <class T> class Tree {
private:
  TreeNode<T> *root;
  TreeNode<T> *GetTreeNodeByValue(T Value, TreeNode<T> *r) {
    if (r == NULL)
      return NULL;
    if (r->key == Value)
      return r;
    TreeNode<T> *r1 = GetTreeNodeByValue(Value, r->pChild);
    if (r1 != NULL)
      return r1;
    TreeNode<T> *r2 = GetTreeNodeByValue(Value, r->pNext);
    if (r2 != NULL)
      return r2;
    return NULL;
  }
  void PreOrder(TreeNode<T> *r) {
    if (r != 0) {
      cout << r->key << endl;
      PreOrder(r->pChild);
      PreOrder(r->pNext);
    }
  }
  void InOrder(TreeNode<T> *r) {
    if (r != 0) {
      InOrder(r->pChild);
      cout << r->key << endl;
      InOrder(r->pNext);
    }
  }
  void PostOrder(TreeNode<T> *r) {
    if (r != 0) {
      PostOrder(r->pChild);
      PostOrder(r->pNext);
      cout << r->key << endl;
    }
  }
  TreeNode<T> * GetTreeNodeParent(T val, TreeNode<T> *r)
  {
    if (r!= 0)
    {
      TreeNode<T> *p = r->pChild;
      while (p != 0)
      {
        if (p->key == val)
          return r;
        p = p->pNext;
        TreeNode<T> *r1 = GetTreeNodeParent(val, p);
        if (r1 != 0)
          return r1;
      }
    }
    return 0;
  }
public:
  Tree() { root = NULL; }
  void AddToRoot(T value) {
    if (root == NULL) {
      root = new TreeNode<T>;
      root->key = value;
      root->pChild = NULL;
      root->pNext = NULL;
      bac++;
    } else {
      root->key = value;
    }
  }
  void AddToParent(T valueChild, T valueParent) {
    TreeNode<T> *p = GetTreeNodeByValue(valueParent, root);
    if (p != 0) {
      TreeNode<T> *n = new TreeNode<T>;
      n->key = valueChild;
      n->pChild = NULL;
      n->pNext = NULL;
      if (p->pChild == NULL) {
        p->pChild = n;
        bac++;
      } else {
        TreeNode<T> *c = p->pChild;
        while (c->pNext != NULL)
          c = c->pNext;
        c->pNext = n;
      }
    }
  }
  List<T> GetChild(T valueParent) {
    List<T> r;
    TreeNode<T> *p = GetTreeNodeByValue(valueParent, root);
    if (p != NULL) {
      TreeNode<T> *c = p->pChild;
      while (c != NULL) {
        r.Add(c->key);
        c = c->pNext;
      }
    }
    return r;
  }
  int GetBac() { return bac; }
  void PreOrder() { PreOrder(root); }
  void InOrder() { InOrder(root); }
  void PostOrder() { PostOrder(root); }
  void Delete(T val)
  {
    TreeNode<T> * p = GetTreeNodeParent(val, root);
    if (p!= 0)
    {
      if (p->pChild->key == val)
      {
        TreeNode<T> *p1 = p->pChild;
        p->pChild = p->pChild->pNext;
        delete p1;
      }
      else
      {
        p = p->pChild;
        while(p->pNext->key != val)
          p = p->pNext;
        TreeNode<T> *q = p->pNext;        
        p->pNext = q->pNext;
        delete q;
      }
    }
    else
    {
      if (root != 0 && root->key == val)
      {
        TreeNode<T> *p1 = root->pChild;
        root = root->pNext;
        delete p1;
      }        
    }
  }
};

#endif