*#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;

};
struct node *push(struct node *ptr,int data){

    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->next=ptr;
    ptr=n;
    return ptr;

}


struct node *pop(struct node *ptr){

    struct node *n=ptr;
    ptr=ptr->next;
    int a=n->data;
    free(n);
    printf("the popped element is %d\n ",a);
return ptr;
}
void traverse(struct node *ptr){
   do{
     
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
       
    } while(ptr!=NULL);
}






int main(){
    
struct node *ptr=NULL;
ptr = push(ptr, 20);
ptr = push(ptr, 29);
ptr = push(ptr, 24);
traverse(ptr);
ptr=pop(ptr);
traverse(ptr);


    return 0;
}




