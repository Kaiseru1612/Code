//
// Created by DELL on 4/19/2021.
//
#include <iostream>
#include <iomanip>
using namespace std;
#ifndef UNTITLED6_LOL_H
#define UNTITLED6_LOL_H
template <typename T>
    struct LLItem{
        T         data;
        LLItem      *pNext;
};

template <typename T>
void removeLL(LLItem<T> * &pHead, int idx){
    if (!pHead) return;
    if (idx){
        LLItem<T> *pPrev = pHead;
        while (pPrev->pNext && idx > 1){
            idx--;
            pPrev = pPrev->pNext;
        }
        LLItem<T> *p = pPrev->pNext;
        if (p) pPrev->pNext = p->pNext;
        delete p;
    }
    else {
        LLItem<T> *p = pHead;
        pHead = pHead->pNext;
        delete p;
    }
}
//template <typename T>
//LLItem<typename T> * removeLL(LLItem<typename T> * pHead, int idx);
template <typename T>
void insertLL(LLItem<T> * &pHead, int idx,const T &a){
    if (idx){
        LLItem<T> *pPrev = pHead;
        while (pPrev->pNext && idx > 1){
            idx--;
            pPrev = pPrev->pNext;
        }
        //pPrev->pNext = new LLItem<T> (a, pPrev->pNext);
        LLItem<T> *p = new LLItem<T>;
        p->data = a;
        p->pNext = pPrev->pNext;
        pPrev->pNext=p;
    }
    else {
        //pHead = new LLItem<T>(a, pHead);
        LLItem<T> *p = new LLItem<T>;
        p->data = a;
        p->pNext = pHead;
        pHead = p;
    }
}

template <typename T>
void reversetLL(LLItem<T> * &pHead){
/*    LLItem<T> *pNL = nullptr;
    while (pHead){
        LLItem<T> *p = pHead;
        pHead = p->pNext;
        p->pNext = pNL;
        pNL = p;
    }
    pHead = pNL;*/
    if (!pHead) return;
    LLItem<T> *p = pHead;
    LLItem<T> *p1 = pHead->pNext;
    p->pNext= nullptr;
    while (p1){
        p = p1;
        p1 = p1->pNext;
        p->pNext=pHead;
        pHead = p;
    }
}

template <typename T>
void sortLL(LLItem<T> * &pHead, bool (*lt)(T& , T& ) ){
    LLItem<T> *pNL = nullptr;
    while (pHead){
        LLItem<T> *p = pHead;
        pHead = p->pNext;
        LLItem<T> **pp = &pNL;
        while (*pp && lt((*pp)->data , p->data)){
            pp = &((*pp)->pNext);
        }
        p->pNext = (*pp);
        *pp = p;
    }
    pHead = pNL;
}

template <typename T>
void cloneLL(LLItem<T> * &pHead);

/*template <typename T>
T atLL(LLItem<T> * &pHead, int idx);*/

template <typename T>
T* atLL(LLItem<T> * pHead, int idx,const T &a){
    if (!pHead) return nullptr;
    while (idx && pHead){
        pHead = pHead->pNext;
        idx--;
    }
    if (pHead) return &pHead->data;
    return nullptr;
}

/*template <typename T>
T& insertLL(LLItem<T> * &pHead, int idx,const T &a);

template <typename T>
const T* insertLL(LLItem<T> * &pHead, int idx,const T &a);

template <typename T>
const T& insertLL(LLItem<T> * &pHead, int idx,const T &a);*/

template <typename T>
void destroyLL(LLItem<T> * &pHead){
    while (pHead) removeLL(pHead, 0);
}

template <typename T>
void printLL(LLItem<T> * pHead){
    while (pHead){
        cout<< setw(5) << pHead->data;
        pHead = pHead->pNext;
    }
    cout << '\n';
}
#endif //UNTITLED6_LOL_H
