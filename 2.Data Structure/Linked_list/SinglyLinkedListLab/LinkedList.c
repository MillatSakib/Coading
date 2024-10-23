#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
} *head = NULL;

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (head == NULL) {
        newNode->next = NULL;
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    printf("\nOne node inserted at the beginning!\n");
}

void deleteNode(int positionOfNode){
    struct Node *temp = head;
    struct Node *prev;
    int count = 0;
    while(temp!=NULL){
    if(count==positionOfNode){
    if(head==temp){
    head = temp->next;
    printf("Your node deleted successfully! Now you can check your exiting list.");
    return;

    }

    prev->next = prev->next->next;
    printf("Your node deleted successfully! Now you can check your exiting list.");
    return;

    }
    count++;
    prev = temp;
    temp=temp->next;
    }

    if(count<=positionOfNode){
    printf("Your given position is not valid.");
    }
}

void search(int item){
    struct Node *temp = head;
    while(temp != NULL){
        if(temp->data == item){
        printf("Item Found");
        return;
        }
        temp=temp->next;
    }
    printf("Item not found");
}

void count(){
    struct Node *temp = head;
    int count = 0;
    while(temp != NULL){

        count++;
        temp=temp->next;

    }
    printf("Total element is %d", count);
}

// Function to insert a node at the end of the linked list
void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("\nOne node inserted at the end!\n");
}

// Function to display the elements of the linked list
void display() {
    if (head == NULL) {
        printf("\nList is Empty\n");
    } else {
        struct Node* temp = head;
        printf("\n\nList elements are:\n");
        while (temp != NULL) {
            printf("%d --> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

// Main function to provide a menu interface for the user
int main() {
    int choice, value, choice1;
    int item;
    while (1) {
        printf("\n\n****** MENU ******\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Search\n");
        printf("4. Count\n");
        printf("5. Delete\n");
        printf("6. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);

                while (1) {
                    printf("Where do you want to insert?\n");
                    printf("1. At Beginning\n");
                    printf("2. At End\n");
                    printf("Enter your choice: ");
                    scanf("%d", &choice1);

                    switch (choice1) {
                        case 1:
                            insertAtBeginning(value);
                            break;
                        case 2:
                            insertAtEnd(value);
                            break;
                        default:
                            printf("\nWrong Input! Try again.\n");
                            continue;  // Retry the sub-menu
                    }
                    break;  // Exit the sub-menu after valid input
                }
                break;

            case 2:
                display();
                break;

                case 3:
                printf("Please enter a item for search:");
                scanf("%d",&item);
                search(item);
                break;

                case 4:
                count();
                break;

                case 5:
                printf("Please enter a postion for Delete:");
                scanf("%d",&item);
                deleteNode(item);
                break;

            case 6:
                exit(0);

            default:
                printf("\nWrong input! Try again.\n");
        }
    }
    return 0;
}
