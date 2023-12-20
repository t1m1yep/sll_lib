//
// Created by Timofey on 20.12.2023.
//

#ifndef SLI_LIB_SLILIB_H
#define SLI_LIB_SLILIB_H

typedef struct list {
    __attribute__((unused)) int value;
    __attribute__((unused)) struct list *next;
}
list;

void *ptrToReturn;

list *addElem(list *lst, int n);
list *init(int n);
list *deleteElem(list *lst, list *root);
void printList(list *root);

#endif //SLI_LIB_SLILIB_H
