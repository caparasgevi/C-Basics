#include<stdio.h>

int input() {
int x;
    printf("Enter number of rows: ");
    scanf("%d", &x);
    return x;
}
int main(){
    int x, i, j;
    x = input();

    for (i=1; i<=x; i++){
        for(j=1;j<=x*2-1;j++){
            if(j<=x-i||j>=x+i) {
                printf(" ");
            } else {
            printf("*");}
        }
        printf("\n");
    }
return 0;
}
