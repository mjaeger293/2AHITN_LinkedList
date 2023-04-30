#ifndef INC_2AHITN_LINKEDLIST_CHAR_LIST_H //prüft, ob es schon eingebunden wurde
#define INC_2AHITN_LINKEDLIST_CHAR_LIST_H //Wenn nicht, binde es ein

typedef struct TCharListNode {
    char value; // Wert der Node - vergleichbar mit z.B. dem Wert von array[8]
    struct TCharListNode * pNext; // Zeiger auf das nächste Element zB. Adresse von array[9]
} TCharListNode;

typedef TCharListNode* TCharNode; // Eigener Datentyp für den Zeiger auf das Nachfolgeelemnt

TCharNode createNode(char value);
//TIntListNode* createNode(int value); ist das selbe wie eine Zeile darüber

TCharNode addToEnd(TCharNode head, TCharNode insert);
void printList(TCharNode head);
TCharNode removeElement(TCharNode head, char value);

#endif


