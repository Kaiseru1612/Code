#include <iostream>
using namespace std;
//Functions used to manage Singly Linked List
struct Soldier{
    Soldier(): HP(-1), isSpecial(false), ID("") {}
    Soldier(int HP, int isSpecial, string ID): HP(HP), isSpecial(isSpecial), ID(ID) {}

    int HP;
    bool isSpecial;
    string ID;
};

struct SoldierNode{
    SoldierNode(): data(Soldier()), next(NULL) {}
    SoldierNode(Soldier data, SoldierNode* next): data(data), next(next) {}

    Soldier data;
    SoldierNode* next;
};

struct SLinkedList{
    SLinkedList(): head(NULL), size(0) {}
    SLinkedList(SoldierNode* head, int size): head(head), size(size) {}

    SoldierNode* head;
    int size;
};
void print(SLinkedList& list){
    if (!list.size) {
        std::cout << "List is empty" << endl;
        return;
    }
    SoldierNode* head = list.head;
    while (head){
        std::cout << head->data.ID << "->";
        head = head->next;
    }
    std::cout << "NULL"<<endl;
}

bool insertAt (SLinkedList& list, Soldier element, int pos){
    //Insert element into a pos in the SLL
    //Return true if insert successfully, false otherwise
    //TODO
    if (pos){
        SoldierNode *pPrev = list.head;
        while (pPrev->next && pos > 1){
            pos--;
            pPrev = pPrev->next;
        }
        SoldierNode *p = new SoldierNode();
        p->data = element;
        p->next = pPrev->next;
        pPrev->next=p;
        return true;
    }
    else {
        SoldierNode *p = new SoldierNode;
        p->data = element;
        p->next = list.head;
        list.head = p;
        return true;
    }
    return false;
}

bool removeAt (SLinkedList& list, int idx){
    //Remove element at index idx in the SLL
    //Return true if remove successfully, false otherwise
    //TODO
    if (!list.head) return false;
    if (idx){
        SoldierNode *pPrev = list.head;
        while (pPrev->next && idx > 1){
            idx--;
            pPrev = pPrev->next;
        }
        SoldierNode *p = pPrev->next;
        if (p) pPrev->next = p->next;
        delete p;
        return true;
    }
    else {
        SoldierNode *p = list.head;
        list.head = p->next;
        delete p;
        return true;
    }
    return false;
}

bool removeFirstItemWithHP (SLinkedList& list, int HP){
    //Remove the first element with HP equals to HP
    //Return true if remove successfully, false otherwise
    //TODO
    if (!list.head) return false;
    SoldierNode *p = list.head;
    while (p){
        if (p->data.HP == HP) return true;
        p = p->next;
    }
    return false;
}

int indexOf(SLinkedList& list, Soldier soldier){
    //Find index of soldier (start from 0)
    //Return -1 if the soldier does not exist
    //TODO
    int idx=0;
    SoldierNode *p= list.head;
    if (list.head== nullptr) return -1;
    while (p){
        if (p->data.ID == soldier.ID && p->data.ID == soldier.ID && soldier.isSpecial){
            return idx;
        }
        idx++;
        p = p->next;
    }
    return -1;
}

int size(SLinkedList& list){
    //Return size of the list
    //TODO
    int count=0;
    if (list.head == nullptr) return 0;
    SoldierNode *p = list.head;
    while (p){
        p=p->next;
        count++;
    }
    return 0;
}

bool empty(SLinkedList& list){
    //Check whether the list is empty
    //TODO
    if (!list.head) return true;
    return false;
}

void clear(SLinkedList& list){
    //Delete all of the elements in list
    //TODO
    while (list.head) removeAt(list, 0);
}

string getIDAt(SLinkedList& list, int pos){
    //Get ID of the Soldier at pos
    //TODO
    if (!list.head) return "-1";
    SoldierNode* p = list.head;
    while (pos && list.head){
        p = p->next;
        pos--;
    }
    if (list.head) return p->data.ID;
    return "-1";
}

int getHPAt(SLinkedList& list, int pos){
    //Get HP of the Soldier at pos
    //TODO
    if (!list.head) return -1;
    SoldierNode* p = list.head;
    while (pos && list.head){
        p = p->next;
        pos--;
    }
    if (list.head) return p->data.HP;
    return -1;
}

bool setHPAt(SLinkedList& list, int HP, int pos){
    //Set value of HP at pos
    //TODO
    //Return true if set successfully, false otherwise
    if (list.head== nullptr) return false;
    SoldierNode* p = list.head;
    if (pos){
        while (p && pos>1){
            p = p->next;
            pos--;
        }
        p->data.HP = HP;
        return true;
    }
    else {
        p->data.HP = HP;
        return true;
    }
    return false;
}

bool contains (SLinkedList& list, Soldier soldier){
    //Check if array contains soldier
    //TODO
    SoldierNode *p= list.head;
    if (list.head== nullptr) return false;
    while (p){
        if (p->data.ID == soldier.ID && p->data.ID == soldier.ID && soldier.isSpecial){
            return true;
        }
        p = p->next;
    }
    return false;
}

int main() {
    SLinkedList * pList = nullptr;
    Soldier a ={1,12,"32"};
    for (int i = 0; i < 8; i++) {
        insertAt(*pList,a,0);
    }
    print(*pList);
    return 0;
}
