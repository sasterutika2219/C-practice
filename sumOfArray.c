//Sum Of an Array using Function

#include<stdio.h>
int SumArray(int *ptr ,int sizeArray){
    int sum =0;
    for(int i=0;i<sizeArray ;i++){
        sum =sum+ *(ptr+i);
    }
    return sum;
}
void main(){
    int arr[] ={10,20,30,40 ,50};
    int sizeArray = sizeof(arr)/sizeof(int);
    int sum =SumArray(arr , sizeArray);
    printf("Sum of arr = %d\n",sum);
}
