#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    else {
        return 0;
    }
}

int isfull(struct queue *q){

    if(q->r==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue *q,int val){
    if(isfull(q)){
        printf("this queue is full\n");
    }else{
        q->r++;
        q->arr[q->r]=val;
        printf("enqueue element : %d\n",val);
    }
}
int dequeue(struct queue *q)
{
    int a=-1;
    if(isempty(q)){
        printf("this queue is empty\n");
    }else
    {
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

int main(){

    struct queue q;
    q.size=4;
    q.f=q.r=0;
    q.arr=(int *)malloc(q.size*sizeof(int));

    enqueue(&q,23);
    enqueue(&q,43);
    enqueue(&q,76);

    printf("dequeue element %d\n",dequeue(&q));
    printf("dequeue element %d\n",dequeue(&q));
    printf("dequeue element %d\n",dequeue(&q));

    enqueue(&q,235);
    enqueue(&q,434);
    enqueue(&q,736);

    if(isempty(&q)){
        printf("queue is empty\n");
    }
    if(isfull(&q)){
        printf("queue is full\n");
    }
    return 0;
}
