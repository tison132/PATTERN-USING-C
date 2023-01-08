#include<stdio.h>
int main(){
    int n =5 ;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            if(j==0 || j==i || i==n-1 ){
            printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}