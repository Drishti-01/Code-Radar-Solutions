#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    (a>b || b>a ||a==b) ? printf("True"):printf("False");
}