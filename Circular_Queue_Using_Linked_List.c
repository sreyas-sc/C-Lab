#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};

struct node *r = NULL ,*f = NULL , *t;

void enqueue()
{
    t=(struct node*)malloc(sizeof(struct node *));
    if (t==NULL)
    {
        printf("\n Memory is empty!");
    }     
    else
    {
        printf("\n Enter the element to be inserted :  \n");
        scanf("%d",&t->data);
        t->next=NULL;
        if (f==NULL && r== NULL)
        {
            f=r=t;
            r->next=f;
        }
        else
        {
            r->next=t;
            r=t;
            r->next=f;
        }
    }

}

void dequeue()
{
    t=f;
    if (f==NULL && r == NULL)
    {
        printf("\n Memory is full!");
    }
    else if(f==r)
    {
        printf("\n %d is removed ",f->data);
        f=r=NULL;
        free(t);
    }
    else
    {
        printf("\n %d is removed ",f->data);
        f=f->next;
        r->next=f;
        free(t);
    }
}

void dis()
{
    if (f==NULL && r==NULL )
    {
        printf("\n empty");
    }
    else
    {
        t=f;
        printf("\n queue = :");
        do
        {
            printf("%d ",t->data);
            t=t->next;
        }while( t != f );
    }

}
int main()
{
            int c;
    do
    {
        printf("\n enter the choice \n 1:enqueue \n 2:dequeue \n 3:display \n 4:exit \n");

        scanf("%d",&c);

        switch (c)
        {
        case 1:
            enqueue();
            break;
        
        case 2:
            dequeue();
            break;
        
        case 3:
            dis();
            break;
        
        case 4:
            break;
        
        default:
            printf("\n enter the correct choice ");
            break;
        }
    }while(c!=4);
    return 0;
}

