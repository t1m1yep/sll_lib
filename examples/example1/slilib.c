#include <stdio.h>
#include <stdlib.h>
#include "slilib.h"

void *ptrToReturn;

list *addElem(list *lst, int n) {
    list *newLst, *ptr;
    newLst = malloc(sizeof(list));
    ptr = lst->next;
    lst->next = newLst;
    newLst->value = n;
    newLst->next = ptr;
    ptrToReturn = newLst;
    return newLst;
}

list *init(int n) {
    list *lst;
    lst = malloc(sizeof(list));
    lst->value = n;
    lst->next = NULL;
    return lst;
}

list *deleteElem(list *lst, list *root) {
    list *temp;
    temp = root;
    while(temp->next != lst) {
        temp = temp->next;
    }
    temp->next = NULL;
    return temp;
}

void printList(list *root) {
    list *p;
    p = root;
    do {
        printf("%d\n", p->value);
        p = p->next;
    } while(p != NULL);
}