#ifndef NodeTree_h
#define NodeTree_h
template <class T>
struct TreeNode
{
    T key;
    TreeNode<T> *pChild;
    TreeNode<T> *pNext;
};

#endif