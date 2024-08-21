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

// for printing the length
int length(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// element presented in the list or not
bool elementPresentedOrNot(Node *head, int number)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == number)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    vector<int> arr = {23, 55, 33, 2};
    Node *head = convertToLL(arr);
    // traversing in LL
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
    // cout << length(head);
    cout << elementPresentedOrNot(head, 999);
}