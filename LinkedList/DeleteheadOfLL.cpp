#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    // cout << head->data << " ";
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
        // cout << mover->data << " ";
    }
    return head;
}

Node *DeleteHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node *removeKthElement(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        count++;
        if (count == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// remove element based on the linked list element
Node *removeElement(Node *head, int element)
{
    if (head == NULL)
        return head;
    if (element == head->data)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == element)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 3, 4, 5, 9};
    Node *head = convertToLL(arr);
    // head = removeTail(head);
    // head = removeKthElement(head, 1);
    head = removeElement(head, 5);
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}
