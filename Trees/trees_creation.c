#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;
};

// this is pre order traversal root->left->right
void preorder(struct node*ptr)
{
    if(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

// this is postorder travesrsal left->right->root

void postorder(struct node*ptr)
{
    if(ptr!=NULL)
    {
    postorder(ptr->left);
    postorder(ptr->right);
    printf("%d\n",ptr->data);
    }
}

// this is inorder traversal left->root->right

void inorder(struct node*ptr)
{
    if(ptr!=NULL) 
    {
        inorder(ptr->left);
        printf("%d\n",ptr->data);
        inorder(ptr->right);
    
    }
}

struct node*createnode(int data)
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}



int main()
{   

    struct node*p=createnode(20);
    struct node*p1=createnode(30);
    struct node*p2=createnode(40);
    struct node*p3=createnode(50);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);


    return 0;
}