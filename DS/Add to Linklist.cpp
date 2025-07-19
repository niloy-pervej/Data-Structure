  #include<stdio.h>
  #include<stdlib.h>
  typedef struct node{
    int data;
    struct node* next;
}node;

// Function 1: Concatenate two linked lists
void concatenate(node* head1, node* head2) {
    if (head1 == nullptr) {
        head1 = head2;
        return;
    }

    node* temp = head1;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head2;
}

// Function 2: Insert a node in a sorted linked list
void insert_sorted(node** head, node* element) {
    if (*head == nullptr || element->data < (*head)->data) {
        element->next = *head;
        *head = element;
        return;
    }

    node* current = *head;
    while (current->next != nullptr && current->next->data < element->data) {
        current = current->next;
    }

    element->next = current->next;
    current->next = element;
}
// int main(){
//     node*head,
// }