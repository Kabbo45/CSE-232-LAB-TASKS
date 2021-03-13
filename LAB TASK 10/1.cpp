#include <iostream>
using namespace std;

struct node
{
    string num;
    struct node *nextptr;
}*stnode;


///////////////////////////////////////////////// First Node Delete ///////////////////////////////////////////////////////////////////

del_first()
{
    if (stnode == NULL)
        cout << "\n\t\t\tList is empty.\n\n";
    else
    {
        struct node* temp = stnode;
        stnode = temp -> nextptr;
        delete temp;
        cout << "\n\t\t\tFirst Node Deleted!!\n\n";
    }
}

///////////////////////////////////////////////// Last Node Delete ///////////////////////////////////////////////////////////////////

del_last()
{
    if(stnode == NULL)
        cout<<"\n\t\t\tList is empty\n\n";
    else
    {
        node* q = stnode;
        while(q -> nextptr -> nextptr != NULL)
            q = q -> nextptr;
        node* temp = q -> nextptr;
        q -> nextptr = NULL;
        delete temp;
        cout<<"\n\t\t\tLast Node Deleted!!\n\n";
    }
}

///////////////////////////////////////////////// User Input Node Delete ///////////////////////////////////////////////////////////////////

del(int c)
{
    int i;
    node* q = stnode;
    for(i=2; i<c; i++)
    {
        q = q -> nextptr;
        if(q == NULL)
            cout<<"\n\t\t\tNode not found\n\n";
    }
    if(i == c)
    {
        node* p = q -> nextptr;
        q -> nextptr = p -> nextptr;
        delete p;
        cout<<"\n\t\t\tDeleted Successfully\n\n";
    }
}

///////////////////////////////////////////////// Create Node List ///////////////////////////////////////////////////////////////////

node_list(int n)
{
    struct node *fnNode, *tmp;
    char num;
    int i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)
    {
        printf("\n\t\t\tMemory can not be allocated.\n\n");
    }
    else
    {
        fflush(stdin);
        printf(" Input data for node 1 : ");
        scanf("%c", &num);
        stnode -> num = num;
        stnode -> nextptr = NULL;
        tmp = stnode;

        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf("\n\t\t\tMemory can not be allocated.\n\n");
                break;
            }
            else
            {
                fflush(stdin);
                printf(" Input data for node %d : ", i);
                scanf("%c", &num);
                fnNode->num = num;
                fnNode->nextptr = NULL;
                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;
            }
        }
    }
}

///////////////////////////////////////////////// Display List ///////////////////////////////////////////////////////////////////

display_list()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf("\n\t\t\tList is empty.\n\n");
    }
    else
    {
        tmp = stnode;
        printf("\n Linked List\n");
        printf(" ========================\n");
        while(tmp != NULL)
        {
            printf(" Data = %x  %c  %x", tmp, tmp->num, tmp->nextptr);
            printf("\n");
            tmp = tmp->nextptr;
        }
    }
}

///////////////////////////////////////////////// Main ///////////////////////////////////////////////////////////////////

int main()
{
    int n, c, data;
    printf("\n\n Linked List : To delete and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    node_list(n);
    display_list();
    do
    {
        printf("\n\t\t\t\tOptions:\n\t\t==========================================\n\t\t[1] First Node Delete\n\t\t[2] Last Node Delete\n\t\t[3] User Input Delete (Without First Node)\n\t\t[4] Display\n");
        printf("\t\t==> ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            del_first();
            break;
        case 2:
            del_last();
            break;
        case 3:
            printf("\n Enter node position to delete:");
            scanf("%d",&data);
            del(data);
            break;
        case 4:
            display_list();
            break;
        default:
            printf("\n\t\t\tWrong input\n\n");
            break;
        }
    }
    while (c!=5);
    return 0;
}
