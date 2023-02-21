#ifndef NodeTree_h
#define NodeTree_h
template <class T>
struct NodeTree
{
    T key;
    NodeTree<T> *pChild;
    NodeTree<T> *pNext;
};

#endif