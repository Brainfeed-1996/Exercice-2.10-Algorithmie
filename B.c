/*
B – Juste devant le premier maillon contenant une valeur donnée x
  */

void splitBeforeValue(struct Node* head, int x, struct Node** list1, struct Node** list2) {
    *list1 = head;
    struct Node* temp = head;
    struct Node* prev = NULL;

    while (temp != NULL && temp->data != x) {
        prev = temp;
        temp = temp->next;
    }
    if (temp != NULL) {
        *list2 = temp;
        if (prev != NULL) {
            prev->next = NULL;
        }
    } else {
        *list2 = NULL;
    }
}
