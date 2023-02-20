#include <stdio.h>
#include <stdlib.h>

int main() {
    int t=0;
    int N;
    int A[50][50];
    do{  printf("Enter row and column length:\n");
        scanf("%d", &N);
    }while(N<1 || N>50);
    
    for(int i=0; i<N; i++){
        printf("\n");
        for(int j=0; j<N; j++){
            A[i][j] = rand() % 100;
            printf("\t%2.0d", A[i][j]);
            }}
    for(int j=0;j<N;j++){
        if (j%2==1){
        for(int k=N-1;k>0;k--){
        for(int i=0;i<k;i++){
            if(A[i][j]<A[i+1][j]){
                t=A[i][j];
                A[i][j]=A[i+1][j];
                A[i+1][j]=t;
            }
        }
        }}
        else{
        for(int k=N-1;k>0;k--){
            for(int i=0;i<k;i++){
                if(A[i][j]>A[i+1][j]){
                    t=A[i][j];
                    A[i][j]=A[i+1][j];
                    A[i+1][j]=t;
                }
            }
        }
        }}
    printf("\n");
    for(int i=0; i<N; i++){
        printf("\n");
        for(int j=0; j<N; j++){
            printf("\t%2d", A[i][j]);
        }}  printf("\n");
}
