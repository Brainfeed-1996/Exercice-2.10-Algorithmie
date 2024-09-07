/*
E – Telles que les deux listes de sortie aient même longueur n, ou que la première soit de longueur n+1 et la seconde de longueur n
*/

void splitEqualLength(struct Node* head, struct Node** list1, struct Node** list2) {
    int length = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        length++;
        temp = temp->next;
    }

    int splitPoint = (length + 1) / 2;
    *list1 = head;
    temp = head;
    int count = 1;

    while (temp != NULL && count < splitPoint) {
        temp = temp->next;
        count++;
    }
    if (temp != NULL) {
        *list2 = temp->next;
        temp->next = NULL;
    } else {
        *list2 = NULL;
    }
}
