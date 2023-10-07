#include <stdio.h>
#include <stdlib.h>

void create_linked_list();
void insert_dll(int value);
void insert_at_head(int value);
void insert_at_tail(int value);
void insert_at_middle(int key, int value);
void print_ddl_forword();
void print_ddl_backword();
void deleteNode(int position);

struct doub_linked_list
{
    struct doub_linked_list *prev;
    int number;
    struct doub_linked_list *next;
};

typedef struct doub_linked_list dll;

dll *head = NULL, *tail = NULL;

int main()
{
    int value;
    printf("Hello!! Welcome to Doubly Linked List.\n");
    printf("Enter digit which will insert into Doubly Linked List(Note if you will enter -1 then the programme donot take input more): ");
    create_linked_list();
    print_ddl_forword();
    print_ddl_backword();
    printf("Please enter a number which will inserted in head: ");
    scanf("%d", &value);
    insert_at_head(value);
    printf("Please enter a number wich will inserted in tail");
    scanf("%d", &value);
    insert_at_tail(value);
    printf("Please enter a key after which you want to insert element: ");
    int key;
    scanf("%d ", &key);
    printf("Please enter a vale which will inserted into Linked List: ");
    scanf("%d", &value);
    insert_at_middle(key, value);
    return 0;
}

void create_linked_list()
{
    int value = 1;
    while (value != -1)
    {
        scanf("%d", &value);
        if (value == -1)
        {
            printf("Ok.. Existing to take Input.\n");
            break;
        }
        insert_dll(value);
    }
}

void insert_dll(int value)
{
    dll *temp;
    temp = (dll *)malloc(sizeof(dll));
    if (temp == NULL)
    {
        printf("Sorry.. Memory cann't allocated. It is full.\n");
        return;
    }
    else
    {
        temp->number = value;
    }
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        head->prev = NULL;
    }
    else
    {

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void print_ddl_forword()
{
    dll *dll_traverse = head;
    printf("Now printfing the Linked List in forword direction: ");
    while (dll_traverse != NULL)
    {
        printf("%d  ", dll_traverse->number);
        dll_traverse = dll_traverse->next;
    }

    printf("\n");
}

void print_ddl_backword()
{
    dll *dll_traverse = tail;
    printf("Now printfing the Linked List in backword direction: ");
    while (dll_traverse != NULL)
    {
        printf("%d  ", dll_traverse->number);
        dll_traverse = dll_traverse->prev;
    }

    printf("\n");
}

void insert_at_head(int value)
{

    dll *insert_on_head;
    insert_on_head = (dll *)malloc(sizeof(dll));
    head->prev = insert_on_head;
    insert_on_head->number = value;
    insert_on_head->next = head;
    head = insert_on_head;
    head->prev = NULL;
    print_ddl_forword();
}

void insert_at_tail(int value)
{

    dll *insert_on_tail;
    insert_on_tail = (dll *)malloc(sizeof(dll));
    tail->next = insert_on_tail;
    insert_on_tail->number = value;
    insert_on_tail->prev = tail;
    tail = insert_on_tail;
    tail->next = NULL;
    print_ddl_forword();
}

void insert_at_middle(int key, int value)
{

    dll *dll_traverse = head;
    int not_ok = 1;
    while (dll_traverse != NULL)
    {
        if (dll_traverse->number == key)
        {
            dll *ins_at_mid;
            ins_at_mid = (dll *)malloc(sizeof(dll));
            if (ins_at_mid == NULL)
            {
                printf("Sorry!!Can not allocate memory. Memory is full!!");
                return;
            }
            else
            {
                ins_at_mid->number = value;
                ins_at_mid->prev = dll_traverse;
                ins_at_mid->next = dll_traverse->next;
                dll_traverse->next = ins_at_mid;
                ins_at_mid->next->prev = ins_at_mid;
                printf("Inserted successfully!!\n");
                not_ok = 0;
            }
        }

        dll_traverse = dll_traverse->next;
    }
    if (not_ok)
    {
        printf("Sorry!!! Itam not found.\n");
    }
    print_ddl_forword();
}
