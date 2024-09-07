/*
A – À partir d’un pointeur sur le maillon qui devient tête de la seconde liste de sortie
  */

void splitAtNode(struct Node* head, struct Node* splitNode, struct Node** list1, struct Node** list2) {
    *list1 = head;
    *list2 = splitNode;
    
    struct Node* temp = head;
    while (temp != NULL && temp->next != splitNode) {
        temp = temp->next;
    }
    if (temp != NULL) {
        temp->next = NULL;
    }
}
