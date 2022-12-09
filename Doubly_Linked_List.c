#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head;

void insertion_beginning();
void insertion_last();
void deletion_beginning();
void deletion_last();
void display();
void search();
void main()
{
    int choice = 0;
    while(choice != 7)
    {
        printf("\n*****MAIN MENU*****\n");
        printf("\nChoose one option from the following list...\n");
        printf("\n");
        printf("\n1.Insert in beginning");
        printf("\n2.Insert at Last");
        printf("\n3.Delete in beginning");
        printf("\n4.Delete at Last");
        printf("\n5.Display");
        printf("\n6.Search");
        printf("\n7.Exit");
        printf("\nEnter your choice : ");
        scanf("\n%d",&choice);
        switch (choice)
        {
        case 1:
            insertion_beginning();
            break;
        case 2:
            insertion_last();
            break;
        case 3:
            deletion_beginning();
            break;
        case 4:
            deletion_last();
            break;
        case 5:
            display();
            break;
        case 6:
            search();
            break;
        case 7:
            exit(0);
            break;

        default:
            printf("Please enter valid choice");
            break;
        }
    }
}

void insertion_beginning()
{
    struct node *ptr;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter item value : ");
        scanf("\n%d",&item);

        if(head == NULL)
        {
            head = ptr;
            ptr -> data = item;
            ptr -> prev = NULL;
            ptr -> next = NULL;
        }
        else
        {
            ptr -> data = item;
            head -> prev = ptr;
            ptr -> prev = NULL;
            ptr -> next = head;
            head = ptr;
        }
        printf("\nNode Inserted");
    }
}

void insertion_last()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node*) malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else {
        printf("\nEnter item value : ");
        scanf("\n%d",&item);

        if(head == NULL)
        {
            ptr -> data = item;
            ptr -> next = NULL;
            ptr -> prev = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            ptr -> data = item;
            temp -> next = ptr;
            ptr -> prev = temp;
            ptr -> next = NULL;
        }
        printf("\nNode Inserted");
    }
}

void deletion_beginning()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\n Node Deleted");
    }
    else
    {
        ptr = head;
        head = head -> next;
        head -> prev = NULL;
        free(ptr);
        printf("\nNode deleted");
    }
}

void deletion_last()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nNode Deleted");
    }
    else {
        ptr = head;
        while(ptr -> next != NULL)
        {
            ptr = ptr -> next;
        }
        ptr -> prev -> next = NULL;
        free(ptr);
        printf("\nNode Deleted");
    }
}

void display()
{
    struct node *ptr;
    printf("\n Printing Values...\n");
    ptr = head;
    while(ptr!= NULL)
    {
        printf("%d\n",ptr -> data);
        ptr = ptr -> next;
    }
}

void search()
{
    struct node *ptr;
    int item,i=0,flag;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        printf("\nEnter item which you want to search : ");
        scanf("\n%d",&item);
        while(ptr!=NULL)
        {
            if(ptr -> data == item)
            {
                printf("\nItem found at location %d",i+1);
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr -> next;
        }
        if(flag == 1)
        {
            printf("\nItem not found");
        }
    }
}
