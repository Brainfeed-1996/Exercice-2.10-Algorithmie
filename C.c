/*
C – À partir de la kième position
*/

void splitAtPosition(struct Node* head, int k, struct Node** list1, struct Node** list2) {
    *list1 = head;
    struct Node* temp = head;
    int count = 1;

    while (temp != NULL && count < k) {
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
