#include<stdio.h>
#define STACK_MAX 100

// Stack Push and POP
// Stack fast in and last out

typedef struct{
    int top;
    int data[STACK_MAX];
} stack; // Name

void push(stack *s,int item){

     if(s->top < STACK_MAX){
        s->data[s->top]= item; //Add value
        s->top = s->top+1; //create new index
     }else {
          printf("stack is full\n");
     }
}
int pop(stack *s){
    int item;
    if(s->top==0){
        printf("stack is empty\n");
        return -1;
    }else{
        s->top = s->top-1; // Top previous index
        item = s->data[s->top]; //add value previous index
    }
    return item;
}

int main(){
    stack my_stack;
    int item;
    my_stack.top=0;
    push(&my_stack,1);
    push(&my_stack,2);
    push(&my_stack,3);
    push(&my_stack,4);
    push(&my_stack,5);

    item=pop(&my_stack);
    printf("POP: %d\n",item);
    printf("Top: %d\n",my_stack.top);


}
