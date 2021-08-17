/*
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createLinkedList(int n)
{
    node *phead = nullptr;
    node *pv,*p;
    while (n){
        if (!phead){
            phead = new node;
            cin >> phead->data;
            phead->next = nullptr;
            n--;
        }
        else {
            p = phead;
            while (p){
                pv = p;
                p = p->next;
            }
            p= new node;
            cin >> p->data;
            pv->next = p;
            p->next = nullptr;
            n--;
        }
    }
    return phead;
    // TO DO
}
bool isEqual(node *head1, node *head2)
{
    node *p1 = head1, *p2 = head2;
    while (p1 && p2){
        if (p1->data != p2->data){
            return false;
            break;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    if (p1 || p2){
        return false;
    }
    return true;
    // TO DO
}
int countNode(node* head)
{
    node *p = head;
    int c=0;
    while (p){
        c++;
        p=p->next;
    }
    return c;
    //TODO
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{
    int n = 0;
    cin >> n;
    node *head = createLinkedList(n);
    print(head);
    cout<<endl;
    cout<<countNode(head);
    return 0;
}
*/
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createLinkedList(int n)
{
    node *phead = nullptr;
    node *pn,*p;
    while (n){
        if (!phead){
            phead = new node;
            cin >> phead->data;
            phead->next = nullptr;
            n--;
        }
        else {
            p = phead;
            pn = new node;
            cin >> pn->data;
            pn->next = p;
            phead = pn;
            n--;
        }
    }
    return phead;
    // TO DO
}
bool isEqual(node *head1, node *head2)
{
    node *p1 = head1, *p2 = head2;
    while (p1 && p2){
        if (p1->data != p2->data){
            return false;
            break;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    if (p1 || p2){
        return false;
    }
    return true;
    // TO DO
}
int countNode(node* head)
{
    node *p = head;
    int c=0;
    while (p){
        c++;
        p=p->next;
    }
    return c;
    //TODO
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{
    int n = 0;
    cin >> n;
    node *head = createLinkedList(n);
    print(head);
    cout<<endl;
    cout<<countNode(head);
    return 0;
}
