#include<stdio.h>
int main(){
    int array[5]={3,2,6,9,8};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+array[i];
    }
    printf("The sum of elements of array: %d",sum);
    return 0;
}