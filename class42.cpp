#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void sorted_LL(Node *head)
{
    Node *temp = head;
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zerocount++;
        }
        else if (temp->data == 1)
        {
            onecount++;
        }
        else if (temp->data == 2)
        {
            twocount++;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zerocount != 0)
        {
            temp->data = 0;
            zerocount--;
        }
        else if (onecount != 0)
        {
            temp->data = 1;
            onecount--;
        }
        else if (twocount != 0)
        {
            temp->data = 2;
            twocount--;
        }
        temp = temp->next;
    }
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void sortedLL(Node *&head)
{
    Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;
    Node *onehead = new Node(-1);
    Node *onetail = onehead;
    Node *twohead = new Node(-1);
    Node *twotail = twohead;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            insertAtTail(zerotail, 0);
        }
        else if (temp->data == 1)
        {
            insertAtTail(onetail, 1);
        }
        else if (temp->data == 2)
        {
            insertAtTail(twotail, 2);
        }
        temp = temp->next;
    }
    if (onehead->next != NULL)
    {
        zerotail->next = onehead->next;
    }
    else
    {
        zerotail->next = twohead->next;
    }
    onetail->next = twohead->next;
    twotail->next = NULL;
    head = zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
}

int main()
{
    Node *node1 = new Node(2);
    Node *node2 = new Node(0);
    Node *node3 = new Node(0);
    Node *node4 = new Node(1);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    Node *head = node1;
    print(head);
    sortedLL(head);
    print(head);
}