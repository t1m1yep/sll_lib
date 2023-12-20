//
// Created by Timofey Abashichev on 20.12.2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "slilib.c"

int main(void) {
    list *root; // эт корень
    list *lst;
    root = init(10);
    lst = root;
    lst = addElem(lst, 20);
    lst = addElem(lst, 30);
    lst = addElem(lst, 40);
    lst = addElem(lst, 50);
    printf("output of list: \n");
    printList(root);
    printf("deleting one elem. new output of list: \n");
    lst = deleteElem(lst, root);
    printList(root);
    printf("deleting one elem. new output of list: \n");
    lst = deleteElem(lst, root);
    printList(root);

    free(root);
    free(lst);
    free(ptrToReturn);
    return 0;
}