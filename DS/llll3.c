#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *makeNode(int data)
{
    Node *temp = malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    return temp;
}

void insertAtBack(Node **head, Node **tail, int data)
{
    Node *temp = makeNode(data);
    // empty list
    if (*head == NULL)
    {
        *head = *tail = temp;
    }
    else
    {
        (*tail)->next = temp; // link part
        *tail = temp;         // update part
    }
}

void printlist(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    Node *head, *tail;
    head = tail = NULL;
    int n, data;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        insertAtBack(&head, &tail, data);
    }

    printlist(head);
}