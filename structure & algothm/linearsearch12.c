#include<stdio.h>
int linearsearch(int arr[],int size,int element){
    for(int i=0; i<size; i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;

}

int main(){
   int arr[]={1,4,2,56,334,26,676,34,234};
   int size=sizeof(arr)/sizeof(int);
   int element=56;
   int searchIndex=linearsearch(arr,size,element);
   printf("the element %d was found at index %d\n",element,searchIndex);

    return 0;
}
