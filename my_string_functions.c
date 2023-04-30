#include "my_string_functions.h"
#include <stdlib.h>
#include <stdio.h>

int strLength(TCharNode head) {
    int length = 0;
    TCharNode element = head;
    while (element != NULL) {
        ++length;
        element = element->pNext;
    }

    return length;
}

TCharNode myScanf() {
    char input = 0;
    TCharNode head = NULL;

    system ("/bin/stty raw");    // turn off ENTER for getchar

    while (input != '\n') {
        input = getchar();

        if (input != '\n') {
            TCharNode node = createNode(input);

            if (head == NULL) {
                head = node;
            } else {
                addToEnd(head, node);
            }
        }
    }

    system ("/bin/stty cooked"); // turn on ENTER for getchar

    return head;
}