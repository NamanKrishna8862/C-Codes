#include<stdio.h>

int main(){
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);

    switch (a) {
    case 1:
        printf("You entered 1\n");
        break;  // Break to prevent fall-through to other cases
    default:
        printf("You entered a number other than 1\n");  // Handle all other inputs
        break;
    }

    return 0;
}
