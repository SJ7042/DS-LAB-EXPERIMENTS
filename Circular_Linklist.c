#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i, x;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &x);

        newnode->data = x;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
            newnode->next = head;   // circular link
        } else {
            temp->next = newnode;
            newnode->next = head;   // circular link
            temp = newnode;
        }
    }

    // Display
    if (head == NULL) {
        printf("CLL is empty\n");
    } else {
        temp = head;
        printf("Elements in CLL are: ");
        do {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }

    return 0;
}
