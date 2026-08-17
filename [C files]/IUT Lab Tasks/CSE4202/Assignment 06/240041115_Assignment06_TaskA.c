#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* insertAtHead(struct Node *head, int x)
{
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = head;
    return newNode;
}

struct Node* insertAtPosition(struct Node *head, int p, int x)
{
    if (p == 1)
    {
        return insertAtHead(head, x);
    }

    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = x;

    struct Node *curr = head;
    for (int i = 1; i < p - 1; i++)
    {
        curr = curr->next;
    }

    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

struct Node* deleteHead(struct Node *head)
{
    struct Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct Node* deleteLast(struct Node *head)
{
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    struct Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }

    free(curr->next);
    curr->next = NULL;
    return head;
}

struct Node* deleteAtPosition(struct Node *head, int p)
{
    if (p == 1)
    {
        return deleteHead(head);
    }

    struct Node *curr = head;
    for (int i = 1; i < p - 1; i++)
    {
        curr = curr->next;
    }

    struct Node *toDelete = curr->next;
    curr->next = toDelete->next;
    free(toDelete);

    return head;
}

void printList(struct Node *head)
{
    if (head == NULL)
    {
        printf("Empty\n");
        return;
    }

    struct Node *curr = head;
    while (curr != NULL)
    {
        printf("%d", curr->data);
        if (curr->next != NULL)
        {
            printf(" ");
        }
        curr = curr->next;
    }
    printf("\n");
}

void freeList(struct Node *head)
{
    struct Node *curr = head;
    while (curr != NULL)
    {
        struct Node *temp = curr;
        curr = curr->next;
        free(temp);
    }
}

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int q;
        scanf("%d", &q);

        struct Node *head = NULL;

        while (q--)
        {
            int op;
            scanf("%d", &op);

            if (op == 1)
            {
                int x;
                scanf("%d", &x);
                head = insertAtHead(head, x);
            }
            else if (op == 2)
            {
                int p, x;
                scanf("%d %d", &p, &x);
                head = insertAtPosition(head, p, x);
            }
            else if (op == 3)
            {
                head = deleteHead(head);
            }
            else if (op == 4)
            {
                head = deleteLast(head);
            }
            else if (op == 5)
            {
                int p;
                scanf("%d", &p);
                head = deleteAtPosition(head, p);
            }

            printList(head);
        }

        freeList(head);
    }

    return 0;
}
