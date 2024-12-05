#include<stdio.h>
void insert(int arr[],int n,int pos,int value){
      for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    printf("elements of array are: ");
    for(int i=0; i<=n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n, pos, value;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nenter the pos: ");
    scanf("%d",&pos);
    if(pos>n||pos<0)
        printf("\nposition is invalid ");
    printf("\nenter the value: ");
    scanf("%d",&value);
    insert(arr,n,pos,value);

    return 0;
}
