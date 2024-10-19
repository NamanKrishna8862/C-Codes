#include<stdio.h>

int main(){
    int a = 5;
    int b = 2;
    printf("The value of a/b is %d \n", a/b);
    // The above code returns the value 2 as it deletes all the places after the point because in c int and int = int, int and float = float, float and float = float
    float c = 5.0;
    int d = 2;
    printf("The value of c/d is %f\n", c/d);
    int k = 3.0/9;
    printf("The value of k is %d", k); // The orignal answer is 0.33 but as we have defined k as int it deletes all the places after point hence the answer is zero.
    /*
    Operator Precedence in absence of Parenthesis
    Priority 1 - *slash(\)%
    Priority 2 - +-
    Priority 3 - = 
    When operators are of equal priority, they are analysed from left to right
    */
}