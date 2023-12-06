#include <stdio.h>

void inputArray(int* a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}

void printArray(int* a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
    printf("\n");
}

int search(int* a[],int n,int target){
    for(int i=0;i<n;i++){
        if(*(a+i)==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:\n");
    inputArray(a,n);
    printf("Import array:\n");
    printArray(a,n);
    int target;
    printf("Enter the element to search for:\n");
    scanf("%d",&target);
    int index=search(a,n,target);
    if(index!=-1){
        printf("Element %d is found at position %d in the array.\n",target,index);
    }else{
        printf("Element %d was not found in the array.\n");
    }
    return 0;
}
