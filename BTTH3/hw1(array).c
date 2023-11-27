#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
                int tmp=a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

void selectionSort(int a[],int n){
    int i,j,min_idx;
    for( i=0;i<n;i++){
         min_idx=i;
        for( j=0;j<n;j++){
            if(a[j]<a[min_idx]){
                min_idx=j;
            }
        }
        int tmp1=a[j];
        a[j]=a[min_idx];
        a[min_idx]=tmp1;
    }
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int a[1000];
    int n=sizeof(a)/sizeof(a[0]);
    srand(time(NULL));
    for(int i=0;i<n;i++){
        a[i]=rand();
    }
    clock_t start_bubble = clock();
    bubbleSort(a, n);
    clock_t end_bubble = clock();
    double time_bubble = (double)(end_bubble - start_bubble) / CLOCKS_PER_SEC;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand();
    }
    clock_t start_selection = clock();
    selectionSort(a, n);
    clock_t end_selection = clock();
    double time_selection = (double)(end_selection - start_selection) / CLOCKS_PER_SEC;
    printf("Bubble sort execution time:%lf seconds\n", time_bubble);
    printf("Selection sort execution time:%lf seconds\n",time_selection);
    return 0;
}