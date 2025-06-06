#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

void inOrder(struct node *root){
	if(root != NULL){
		inOrder(root->left);
		printf("%d ",root->data);
		inOrder(root->right);
	}
}
struct node *create(){
	int data;
	struct node *new;
	new = (struct node *)malloc(sizeof(struct node));
	scanf("%d",&data);
	if(data==-1){
		return 0;
	}
	new->data=data;
	new->left=create();
	new->right=create();
	return new;
}
int main(){
	struct node * tmp;
	tmp=create();
	inOrder(tmp);
}
