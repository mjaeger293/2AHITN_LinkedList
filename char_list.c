#include "char_list.h"
#include <stdio.h>
#include <stdlib.h>

TCharNode createNode(char val) {
    TCharNode pElement = NULL;

    pElement = malloc(sizeof(TCharListNode));

    if (pElement != NULL) {
        pElement->value = val;
        pElement->pNext = NULL;
        // gleichbedeutend mit
        // (*pElement).value = val;
    }

    return pElement;
}


/**
 * Fügt ein Listenelement an das Listenende
 * @param head Ausgangspunkt für das Durchsuchen
 * @param insert Element das eingefügt werden soll
 * @return Listenkopf
 */
TCharNode addToEnd(TCharNode head, TCharNode insert) {
    TCharNode actualElem = NULL;

    if (head == NULL) { // Es gibt derzeit noch keinen Listenkopf
        head = insert; // Das einzufügende Element ist also mein Listenkopf
    } else {
        actualElem = head;

        // Laufe an das Listenende (= jenes Element, das keinen Nachfolger hat)
        while (actualElem->pNext != NULL) {
            actualElem = actualElem->pNext;
        }

        actualElem->pNext = insert;
    }

    return head;
}


void printList(TCharNode head) {
    TCharNode actualElement;

    actualElement = head;

    printf("\n");

    while (actualElement != NULL) {
        printf(" %c ->", actualElement->value);
        actualElement = actualElement->pNext;
    }

    printf(" NULL\n\n");
}

TCharNode removeElement(TCharNode head, char value) {
    if (head == NULL) {
        return NULL;
    }

    TCharNode actualElement = head;
    TCharNode prevElement = NULL;

    if (actualElement->value == value) { // erstes Element soll gelöscht werden
        head = head->pNext;
        free(actualElement);
    } else {
        while (actualElement != NULL && actualElement->value != value) {
            prevElement = actualElement;
            actualElement = actualElement->pNext;
        }

        if (actualElement != NULL) {
            prevElement->pNext = actualElement->pNext;
            free(actualElement);
        }
    }

    return head;
}