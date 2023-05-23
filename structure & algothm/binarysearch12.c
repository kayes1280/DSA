#include<stdio.h>
int binarysearch(int arr[],int size,int element){

    int low,high,mid;
    low=0;
    high=size-1;
    //keep searching untill low>=high
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;

}

int main(){
    int arr[]={1,3,4,6,8,9,12,34,78,98};
    int size=sizeof(arr)/sizeof(int);
    int element=12;
    int searchIndex=binarysearch(arr,size,element);
    printf("the element %d was found at index %d\n",element,searchIndex);

    return 0;
}
