/*
D – Juste devant le maillon contenant la valeur minimale de la liste
*/

void splitBeforeMinValue(struct Node* head, struct Node** list1, struct Node** list2) {
    *list1 = head;
    struct Node* temp = head;
    struct Node* prev = NULL;
    struct Node* minNode = head;
    struct Node* minPrev = NULL;

    while (temp != NULL) {
        if (temp->data < minNode->data) {
            minNode = temp;
            minPrev = prev;
        }
        prev = temp;
        temp = temp->next;
    }
    if (minNode != NULL) {
        *list2 = minNode;
        if (minPrev != NULL) {
            minPrev->next = NULL;
        }
    } else {
        *list2 = NULL;
    }
}
