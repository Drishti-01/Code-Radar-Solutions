#include <stdio.h>

int main(){
    int a;
    scanf("&d",&a);
    if (a>17){
        printf("Eligible");
    }else if(a<18){
        printf("Not Eligible");
    }
}