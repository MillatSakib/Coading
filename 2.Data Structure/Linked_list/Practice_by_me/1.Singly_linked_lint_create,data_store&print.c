/*


To  make a Linked we have to define a structure, and two global pointer variable head and tail. We can use typedef for simplicity pourpose.

Then we take a value for linked list. Then we have to allocate memory for the structure. Then we check that the address of head pointer is either NULL or not.If the head pointer is NULL then we will assing the address of the created structure on head and tail.

Else we will assign the value of the created structre address into the previous node next pointer.And then the temp changed by the new structure address






*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int number;
    struct node *next;
};

typedef struct node linked_list_op;

linked_list_op *head = NULL, *tail = NULL;

void linked_list();
void create_linked_list(int value);
void print_linked_list();

int main()
{
    printf("Enter all number(If you want to break then enter -1)");
    linked_list();
    print_linked_list();
    return 0;
}

void linked_list()
{

    int value = 1;
    while (value != -1)
    {
        scanf("%d", &value);
        if (value == -1)
        {
            printf("Ok. Exiting form the Linked List");
        }

        else
        {
            create_linked_list(value);
        }
    }
}

void create_linked_list(int value)
{

    printf("Your entered value is %d\n", value);

    linked_list_op *temp;

    temp = (linked_list_op *)malloc(sizeof(linked_list_op));
    if (temp == NULL)
    {
        printf("Memory allocation failed. Exiting.\n");
        exit(1);
    }

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }

    else
    {
        tail->next = temp;
        tail = temp;
    }
    tail->number = value;
}

void print_linked_list()
{

    printf("\nFull Linked list are : ");
    linked_list_op *mylist;
    mylist = head;

    while (mylist != NULL)
    {
        printf("%d ", mylist->number);

        mylist = mylist->next;
    }

    puts(" ");
}
