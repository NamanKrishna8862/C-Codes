#include<stdio.h>

int main(){
    int length;
    scanf("Please enter length of rectangle %d", &length);
    int breadth;
    scanf("Please enter breadth of rectangle %d", &breadth);
    printf("The area of rectangle is %d", length*breadth);
    return 0;
}