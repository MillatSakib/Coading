/*


To  make a Linked we have to define a structure, and two global pointer variable head and tail. We can use typedef for simplicity pourpose.

Then we take a value for linked list. Then we have to allocate memory for the structure. Then we check that the address of head pointer is either NULL or not.If the head pointer is NULL then we will assing the address of the created structure on head and tail.

Else we will assign the value of the created structre address into the previous node next pointer.And then the temp changed by the new structure address






*/

#include <stdio.h>
#include <stdlib.h>

// here we define a structure for linked list which is crucial for a linked list
struct node
{
    int number;
    struct node *next;
};

typedef struct node linked_list_op; //// by using typedef(type defination) we can change name of custom data type of premetive data type.

linked_list_op *head = NULL, *tail = NULL; // here we take these pointer variable which will need later

void linked_list();                 // this function is basic for my linked list. By using this function we insert the value in my list
void create_linked_list(int value); // we store all data in our running environment using this function.
void print_linked_list();           // we print the linked list using this function.

int main()
{
    printf("Enter all number(If you want to break then enter -1)");
    linked_list();
    print_linked_list();
    return 0;
}

void linked_list()
{
    // Here I input a value form user.Then check it is ether -1 or not. If it is -1 then this function ends here. And if it is not -1 then it insert the value into linked list by function calling.And it will continue untill user input the value -1
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

    linked_list_op *temp; // here I take a structure type  pointer variable to keep allocated space address

    temp = (linked_list_op *)malloc(sizeof(linked_list_op)); // here I allocate  the space for linked list
    if (temp == NULL)
    { // if temp is equal to null then it means program can't allocate memory.
        printf("Memory allocation failed. Exiting.\n");
        exit(1);
    }

    // Now head is equal to NULL means no element are available in linked list. Then we set the address node on the head and tail address.

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }

    // This is the more tricky line in linked list. Most of the beginer can't understand this line. Here in the first line is tail->next = temp; In tail there has the address of previous node. So when we write tail->next = temp then the program write the address of current node(temp) to the previous node's next* pointer variable.Then we assign the value of current node value on tail so that when the new node are created then we can assign that node value on the current node.Using this trick we make a full linked List.
    else
    {
        tail->next = temp;
        tail = temp;
    }
    tail->number = value; // here we assign the value which I entered keep on my structure.
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
