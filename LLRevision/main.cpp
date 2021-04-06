#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* head; //global variable - pointer to head node.

Node* GetNewNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}
void DeleteData(int data){
    Node* tmp = head;
    Node* p1 = nullptr;
    Node* p2;
    while (tmp != nullptr) {
        while (tmp->data != data) {
            p1 = tmp;
            tmp = tmp->next;
        }
        p2 = tmp->next;
        if (p2!= nullptr){
            p2->prev = p1;
            p1->next = p2;
        }
        else {
            p1->next = nullptr;
        }
        delete tmp;
        tmp = p1->next;
    }
}
void DeleteHead (){
    Node* tmp;
    tmp = head;
    if (head == nullptr) return;
    head = tmp->next;
    head->prev = nullptr;
    delete tmp;
}
void DeleteEnd (){
    Node* tmp = head;
    Node* p = nullptr;
    if (head = nullptr) return;
    while (tmp != nullptr){
        p = tmp;
        tmp = tmp->next;
    }
    tmp = p->prev;
    tmp->next= nullptr;
    delete p;
}
void InsertAtHead(int data){
    Node* newNode = GetNewNode(data);
    if (head == nullptr){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;

}
void InsertAtEnd(int data){
    Node* newNode = GetNewNode(data);
    Node* tmp = head;
    if(head == nullptr){
        head = newNode;
        return;
    }
    while (tmp->next != nullptr){
        tmp = tmp->next;
    }
    tmp->next=newNode;
    newNode->prev=tmp;
}
void InsertAtn(int data, int pos){
    int count = 0;
    Node* newNode = GetNewNode(data);
    Node* tmp = head;
    Node* p;
    if (head == nullptr){
        head = newNode;
        return;
    }
     while(tmp->next != nullptr && pos != count){
         p = tmp;
        tmp = tmp->next;
        count++;
    }
     newNode->next = tmp;
     tmp->prev = newNode;
     newNode->prev = p;
     p->next = newNode;
}
void Print(){
    Node* tmp = head;
    printf("Forward: ");
    while(tmp != nullptr){
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

void ReversePrint(){
    Node* tmp = head;
    if (tmp == nullptr) return; //emty list, exit
    //Going to the last Node
    while(tmp->next != nullptr){
        tmp = tmp->next;
    }
    //Traversing backward using prev pointer
    printf("Reverse: ");
    while(tmp != nullptr){
        printf("%d ", tmp->data);
        tmp = tmp->prev;
    }
    printf("\n");
}

int main() {
    head = nullptr;
    InsertAtHead(2); Print(); ReversePrint();
    InsertAtHead(4); Print();
    InsertAtHead(10); Print();
    InsertAtn(11,2); Print();
    InsertAtEnd(16); Print(); ReversePrint();
    InsertAtEnd(4); Print();
    DeleteData(4); Print();
    DeleteHead();Print();
    DeleteEnd();Print();
}