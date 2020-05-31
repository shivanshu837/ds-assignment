//STRING INSERTION IN BST
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//NODE STRUCTURE
struct node
{
    char a[20];
    struct node *left;
    struct node *right;
};
//FUNCTION TO CREATE NEWNODE
struct node* create(char b[])
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    strcpy(temp->a,b);
    temp->left = 0;
    temp->right = 0;
    return temp;
}
//FUNCTION TO INSERT NODE
struct node* insert(struct node* root,char b[])
{
    if(root==0)
    {
        root = create(b);
        return root;
    }
    else if(strcmp(root->a,b)>0)
    {
        root->left = insert(root->left,b);
    }
    else if(strcmp(root->a,b)<0)
    {
        root->right = insert(root->right,b);
    }
    return root;
}
//INORDER TRAVERSAL
void inorder(struct node* root)
{
    if(root==0)
    {
        return;
    }
    inorder(root->left);
    printf("%s \n",root->a);
    inorder(root->right);
}
int main()
{
    struct node *root = 0;
   root = insert(root,"Arthi");
    insert(root,"Christy");
    insert(root,"Dorothy");
    insert(root,"Fraser");
    insert(root,"Eliza");

             /*
             ARTHI
                 \
                CHRISTY
                    \
                   DOROTHY
                       \
                      ELIZA
                         \
                         FRASER
             */

    insert(root,"David");

               /*
             ARTHI
                 \
                CHRISTY
                    \
                   DOROTHY
                    /   \
                DAVID   ELIZA
                          \
                          FRASER
             */

    inorder(root);
}


