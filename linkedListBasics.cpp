#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    };

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    };
};

Node *arrayToLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *removeHead(Node *head)
{
    Node *temp = head;
    head = temp->next;
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
        return NULL;
    if (k == 1)
    {
        Node *temp = head;
        head = temp->next;
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

Node *removeElement(Node *head, int n)
{
    if (head == NULL)
        return head;
    if (head->data == n)
    {
        Node *temp = head;
        head = temp->next;
        delete temp;
        return head;
    }
    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->next->data == n)
        {
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node *insertHead(Node *head, int n)
{
    Node *temp = new Node(n, head);
    return temp;
}

Node *insertTail(Node *head, int n)
{
    if (head == NULL)
        return new Node(n);
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new Node(n);
    return head;
}

Node *insertAtKth(Node *head, int k, int n)
{
    if (head == NULL)
    {
        if (k == 1)
            return new Node(n, head);
        else
            return NULL;
    }
    if (k == 1)
    {
        return new Node(n, head);
    }
    int count = 0;
    Node *temp = head;
    Node *prev = NULL;
    while (count != k && temp != NULL)
    {
        prev = temp;
        temp = temp->next;
        count++;
        if (count == k)
        {
            Node *newNode = new Node(n, temp);
            prev->next = newNode;
        }
    }
    return head;
}

Node *enterValBeforeElement(Node *head, int val, int n)
{
    if (head == NULL)
        return NULL;
    if (head->data == val)
        return new Node(n, head);
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            prev->next = new Node(n, temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *middleOfLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << count << endl;
    int mid = count / 2 + 1;
    cout << mid << endl;
    temp = head;
    for (int i = 0; i < mid - 1; i++)
    {
        temp = temp->next;
    }
    return temp;
}

Node *tortoiseAndHare_MiddleOfLL(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL)
    {
        if (fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        else
            break;
    }
    return slow;
}

Node *swapPairs(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *newHead = NULL;
    Node *prev = NULL;
    Node *curr = head;
    Node *front = curr->next;
    while (front != NULL) 
    {
        front->next == NULL ? curr->next = nullptr
                            : curr->next = front->next;
        prev == NULL ? newHead = front : prev->next = front;
        front->next = curr;
        prev = curr->next;
        curr = curr->next->next;
        front=curr->next;
        printLL(newHead);
    }
    return newHead;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    Node *head = arrayToLL(arr);
    printLL(head);

    // head = removeHead(head);
    // head = removeTail(head);
    // head = removeKthElement(head,2);
    // head = removeElement(head, 25);
    // head = insertHead(head, 28);
    // head = insertTail(head, 28);
    // head = insertAtKth(head, 5, 15);
    // head = enterValBeforeElement(head, NULL, 15);
    // Node *x = middleOfLL(head);
    // cout << x->data << endl;
    head = swapPairs(head);

    // printLL(head);

    return 0;
}
