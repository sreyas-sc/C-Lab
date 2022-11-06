#include<stdio.h>
struct Node
{
    int dt;
    struct Node *next;
};
struct Node *head;
void push()
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("\n Enter the value: ");
    scanf("%d",&newnode->dt);
    if(head==NULL)
    {
       
        newnode->next=NULL;
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
    printf("Item pushed:");
}

void pop()
{
    int item;
    struct Node *ptr;
    if(head==NULL)
    printf("Stack Underflow: \n");
    else
    {
        item=head->dt;
        ptr=head;
        head=head->next;
        free(ptr);
        printf("Item %d popped",item);
    }
    
}

void display()
{
    struct Node *ptr;
    if(head==NULL)
    printf("stack is empty:\n");
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->dt);
            ptr=ptr->next;
        }
    }
}

void main()
{
int choice=0;     
    while(choice != 4)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
}  
}