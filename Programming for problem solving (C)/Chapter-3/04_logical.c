#include<stdio.h>

int main(){
    int a = 0; int b = 1;
    printf(" The value of a & b is %d \n", a&&b);
    printf("The value of a or b is %d \n", a||b);
    printf("The value of not(a) is %d", !a);

    if(a && b){
        printf("Both are true");
    }
    /*
    0&&0 = 0
    0&&1 = 0
    1&&1 = 1
    0||1 = 1
    0||0 = 0
    */
}