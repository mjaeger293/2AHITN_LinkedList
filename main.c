#include <stdio.h>
#include <stdlib.h>
#include "char_list.h"
#include "my_string_functions.h"

int main() {
    TCharNode head = NULL;
    TCharNode obj = NULL;

    printf("Geben Sie einen Text ein");
    head = myScanf();

    printf("Der eingegebene text war: ");
    printList(head);

    printf("\n\nDie Liste ist %d Zeichen lang.", strLength(head));

    printf("Speicher wurde reserviert");

    return 0;
}