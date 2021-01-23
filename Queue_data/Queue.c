#include<stdio.h>
#define Q_SIZE 10

//Circle queue
// Enqueue and dequeue oparation

typedef struct{
      int data[Q_SIZE+1]; //point next index
      int head,tail;
}Queue; //Name

void Enqueue(Queue *q, int item){
    if((q->tail+1)%(Q_SIZE+1)==q->head){
        printf("Queue is full\n");
        return;
    }
    q->data[q->tail]=item;
    q->tail=((q->tail +1)%(Q_SIZE+1));

}

int Dequeue(Queue *q){
    int item;
    if(q->tail==q->head){
        printf("Queue is Empty\n");
        return -1;
    }
    item =q->data[q->head];
    q->head=(q->head+1)%(Q_SIZE+1); //head point next index and use % because circular queue
    return item;

}




int main(){

    Queue my_queue;
    int item;
    my_queue.head=0;
    my_queue.tail=0;

    Enqueue(&my_queue,1);
    Enqueue(&my_queue,2);
    Enqueue(&my_queue,3);
    Enqueue(&my_queue,4);
    printf("tell= %d\n",my_queue.tail);
    printf("head= %d\n",my_queue.head);
    item=Dequeue(&my_queue);

    printf("item= %d\n head= %d\n",item,my_queue.head);

return 0;
}
