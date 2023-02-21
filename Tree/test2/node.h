#ifndef node_h
#define node_h
template <class T>
struct Node
{
    T key;
    Node<T> *pLeft;
    Node<T> *pRight;
};


#endif