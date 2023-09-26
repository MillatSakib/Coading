/*


        ###### Linked List ##########

This is the programme of Linked List which is implemented by C programme.

Operation: create list, insert item to last, insert item to first, insert item to middle, search an item, delete an item, print list...


Programmed By: Md. Sohan Millat Sakib


Resource link: http://hellohasan.com/




*/

#include <stdio.h>
#include <stdlib.h>

// here I create a structure for a singly Linked List
struct linked_list
{

    int number;
    struct linked_list *next;
};

typedef struct linked_list node;

node *head = NULL, *last = NULL;

void create_linked_list();
void print_linked_list();
void insert_at_last(int value);
void insert_at_first(int value);
void intsert_after(int key, int value);
void delete_item(int value);
void search_item(int value);

int main()
{
    int key, value;

    // Create a linked list
    printf("Create Linked List\n");
    create_linked_list();
    print_linked_list();

    // Inset value at last positon ato existing Linked List
    printf("\nInsert new item at last\n");
    scanf("%d", &value);
    insert_at_last(value);
    print_linked_list();

    // Insert value at first position to existing Linked List
    printf("\nInsert new item at furst\n");
    scanf("%d", &value);
    insert_at_first(value);
    print_linked_list();

    // Insert value after a defined       value to existing Linked List
    printf("\nEnter a KEY (existing item of List), after that you want to insert a new value\n");
    scanf("%d", &key);
    printf("\nInsert new item after %d KEY\n", key);
    scanf("%d", &value);
    insert_after(key, value);
    print_linked_list();

    // search an item from Linked List
    printf("\nEnter an item to search it from List\n");
    scanf("%d", &value);
    search_item(value);

    // delete an item from Linked List
    printf("\nEnter a value, which you want to delet from list\n");
    scanf("%d", &value);
    delete_item(value);
    print_linked_list();

    return 0;
}

// from here I will add all functionality one by one.

void create_linked_list()
{

    int val;
    while (1)
    {

        printf("Input a number, (Enter -1 to exit): ");
        scanf("%d", &val);

        if (val == -1)
        {
            break;
        }

        insert_at_last(val);
    }
}

void insert_at_last(int value)
{

    node *temp_node;
    temp_node = (node *)malloc(sizeof(node));
    temp_node->number = value;

    temp_node->next = NULL;

    // For the 1st element

    if (head == NULL)
    {

        head = temp_node;
        last = temp_node;
    }

    else
    {

        last->next = temp_node;
        last = temp_node;
    }
}

void insert_at_first(int value)
{

    node *temp_node = (node *)malloc(sizeof(node));

    temp_node->number = value;
    temp_node->next = head;
}

void insert_after(int key, int value)
{

    node *myNode = head;

    int flag = 0;

    while (myNode != NULL)
    {

        if (myNode->number == key)
        {

            node *newNode = (node *)malloc(sizeof(node));

            newNode->number = value;
            newNode->next = myNode->next;
            myNode->next = newNode;

            printf("%d is inserted after %d\n", value, key);

            flag = 1;

            break;
        }

        else
        {

            myNode = myNode->next;
        }
    }

    if (flag == 0)
    {
        printf("key   not   found!\n");
    }
}

void delete_item(int value)
{

    node *myNode = head, *previous = NULL;

    int flag = 0;

    while (myNode != NULL)
    {

        if (myNode->number == value)
        {

            if (previous == NULL)
                head = myNode->next;

            else
                previous->next = myNode->next;

            printf("%d is deleted from list\n", value);

            flag = 1;
            free(myNode);
            break;
        }

        else
            myNode = myNode->next;
    }

    if (flag == 0)

        printf("key not found!\n");
}

void search_item(int value)
{

    node *searchNode = head;
    int flag = 0;

    while (searchNode != NULL)
    {
        if (searchNode->number == value)
        {
            printf("%d is present in this list. Memoey address is %d\n", value, searchNode);
            flag = 1;
            break;
        }
        else
        {
            searchNode = searchNode->next;
        }
    }

    if (flag == 0)
        printf("Item not found\n");
}

void print_linked_list()
{

    printf("\nYour full linked list is: ");

    node *myList;
    myList = head;

    while (myList != NULL)
    {
        printf("%d", myList->number);
        myList = myList->next;
    }

    puts("");
}
