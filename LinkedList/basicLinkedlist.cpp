#include <bits/stdc++.h>
using namespace std;

struct Node // we can declare it as class Node as well like --->> class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1) // constructor
    {
        data = data1;
        next = next1;
    }
    // we can have a single constructor as well

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {2, 44, 56, 3};
    Node *y = new Node(arr[2], nullptr);
    Node *x = new Node(arr[3]);
    cout << y->data << " ";
    cout << x->data;
}