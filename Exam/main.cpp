/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int**a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i==j && (i != (n-1)) && (j != (n-1))){
                cout << a[i][j]/2 << " ";
                break;
            }
            else if ((i == (n-1)) && (j == (n-1))){
                cout << a[i][j]/2;
            }
        }
    }
    return 0;
}
*//*
*/
/*
*//*

*/
/*

// another helpful function
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int countTrue(string fileName){

    //TODO
}
int main(){
    return 0;
};*//*
*/
/*

#include <iostream>
#include <vector>
using namespace std;
class Node
{
    int data;
    Node* next;
public:
    Node(): data(0), next(nullptr){}

    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }

    int getData()
    {
        return this->data;
    }

    void setData(int data)
    {
        this->data = data;
    }

    Node* getNext()
    {
        return this->next;
    }

    void setNext(Node* next)
    {
        this->next = next;
    }
};
void reduceDuplicate(Node *root, vector<int>arr){
    //TODO
    Node *p = root;
    Node *pn = p->getNext();
    while (p && pn){
        for (unsigned int i = 0; i < arr.size(); i++) {
            if (pn->getData() == arr[i]){
                p=pn->getNext();
                delete pn;
                pn = p->getNext();
            }
            else if (p->getData() == arr[i]){
                root = pn;
                delete p;
                p = pn;
                pn = p->getNext();
            }
        }
        p = pn;
        pn = pn->getNext();
    }
}
int main(){
    Node* node1 = new Node(1, nullptr);
    Node* node2 = new Node(2, node1);
    Node* root= new Node(0, node2);
    vector<int> arr{2};
    reduceDuplicate(root, arr);
    Node *p = root;
    while (p){
        cout << p->getData() << " ";
        p = p->getNext();
    }
    return 0;
}*//*

#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Tower;
class Monster;

class GameManager{
public:
    vector<Tower*> towerSet;
    vector<Monster*> monsterSet;
    GameManager(){}
    Tower* createTower(string type, int id, int x, int y);
    Monster* createMonster(string type, int id, int x, int y);
};
class Monster{
private:
    int x,y;
    int id;
    int hp;

public:
    void inputMonster(int x, int y, int ID, int HP){
        this->x= x;
        this->y=y;
        this->id = ID;
        this->hp = HP;
    }
    void setPosition(int x, int y){
        this->x=x;
        this->y=y;
    };
    void move(string direction){
        for (unsigned int i = 0; i < direction.size(); i++) {
            switch (direction[i]) {
                case 'U':
                    this->y +=2;
                    break;
                case 'D':
                    this->y -=2;
                    break;
                case 'L':
                    this->x -=2;
                    break;
                case 'R':
                    this->x -= 2;
                    break;
            }
        }
    };
    //TODO
};
class Tower{
private:
    int x,y;
    int id;
public:
    void setPosition(int x, int y){
        this->x=x;
        this->y=y;
    };

    // TODO
};
// class, functions,... if needed
Tower* GameManager:: createTower(string type, int id, int x, int y){
    // TODO
}
Monster* GameManager:: createMonster(string type, int id, int x, int y){
    // TODO
    Monster *a = new Monster;
    a->inputMonster(x,y,id,)

}*/
#include <iostream>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
int SizeList (ListNode *list){
    ListNode *p = list;
    int count=0;
    while (p){
        count++;
        p=p->next;
    }
    return count;
}
void Insert (ListNode *list,int x){
    if (SizeList(list) == 1 && list->val==0){
        list->val = x;
    }
    else {
        ListNode *p = list;
        while (p->next){
            p=p->next;
        }
        ListNode *a = new ListNode;
        a->val = x;
        p->next = a;
    }
}
void Print (ListNode *list){
    ListNode *p = list;
    while (p){
        cout << p->val;
        p=p->next;
    }
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *sumhead= nullptr;
        ListNode *p1 = l1;
        ListNode *p2 = l2;
        int rem=0;
        while (p1 && p2){
            if (!sumhead){
                ListNode *a = new ListNode;
                a->val = p1->val + p2->val + rem;
                rem = 0;
                if ((a->val >= 10)){
                    rem = a->val / 10;
                    a->val = a->val % 10;
                }
                sumhead = a;
            }
            else {
                ListNode *p = sumhead;
                while(p->next){
                    p = p->next;
                }
                ListNode *a = new ListNode;
                a->val = p1->val + p2->val + rem;
                rem = 0;
                if ((a->val >= 10)){
                    rem = a->val / 10;
                    a->val = a->val % 10;
                }
                p->next = a;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        if (p1){
            while (p1) {
                ListNode *p = sumhead;
                while (p->next) {
                    p = p->next;
                }
                ListNode *a = new ListNode;
                a->val = p1->val + rem;
                rem = 0;
                if ((a->val >= 10)) {
                    rem = a->val / 10;
                    a->val = a->val % 10;
                }
                p->next = a;
                p1 = p1->next;
            }
        }
        if (p2){
            while (p2) {
                ListNode *p = sumhead;
                while (p->next) {
                    p = p->next;
                }
                ListNode *a = new ListNode;
                a->val = p2->val + rem;
                rem = 0;
                if ((a->val >= 10)) {
                    rem = a->val / 10;
                    a->val = a->val % 10;
                }
                p->next = a;
                p2 = p2->next;
            }
        }
        if (rem){
            ListNode *p = sumhead;
            ListNode *a = new ListNode;
            while (p->next){
                p=p->next;
            }
            a->val = rem;
            p->next = a;
        }
        return sumhead;
    }
int main(){
    ListNode *l1 = new    ListNode;
    ListNode *l2 = new    ListNode;
    Insert(l1,5);
    Insert(l1,6);
    Print(l1);
    cout << endl;
    Insert(l2,5);
    Insert(l2,4);
    Insert(l2,9);
    Print(l2);
    cout << endl;
    ListNode *p = addTwoNumbers(l1,l2);
    Print(p);
    return 0;
}