#include <stdio.h>
#include <stdlib.h>

/* Node structure */
struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head1 = NULL, *head2 = NULL;
    struct node *newnode, *temp;
    int choice, n, i, value;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Create List 1\n");
        printf("2. Create List 2\n");
        printf("3. Display Lists\n");
        printf("4. Concatenate List 2 to List 1\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:   /* Create List 1 */
                printf("Enter number of nodes: ");
                scanf("%d", &n);
                head1 = NULL;

                for (i = 0; i < n; i++) {
                    newnode = (struct node *)malloc(sizeof(struct node));
                    printf("Enter value: ");
                    scanf("%d", &value);

                    newnode->data = value;
                    newnode->next = NULL;

                    if (head1 == NULL) {
                        head1 = newnode;
                        temp = newnode;
                    } else {
                        temp->next = newnode;
                        temp = newnode;
                    }
                }
                break;

            case 2:   /* Create List 2 */
                printf("Enter number of nodes: ");
                scanf("%d", &n);
                head2 = NULL;

                for (i = 0; i < n; i++) {
                    newnode = (struct node *)malloc(sizeof(struct node));
                    printf("Enter value: ");
                    scanf("%d", &value);

                    newnode->data = value;
                    newnode->next = NULL;

                    if (head2 == NULL) {
                        head2 = newnode;
                        temp = newnode;
                    } else {
                        temp->next = newnode;
                        temp = newnode;
                    }
                }
                break;

            case 3:   /* Display Lists */
                printf("List 1: ");
                temp = head1;
                while (temp != NULL) {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                }
                printf("NULL\n");

                printf("List 2: ");
                temp = head2;
                while (temp != NULL) {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                }
                printf("NULL\n");
                break;

            case 4:   /* Concatenate */
                if (head1 == NULL) {
                    head1 = head2;
                } else {
                    temp = head1;
                    while (temp->next != NULL)
                        temp = temp->next;
                    temp->next = head2;
                }
                printf("Lists concatenated\n");
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
