#include<stdio.h>

int main(){
    int age = 40;
    if (age>40){
        printf("You are elder");
    }
    else if(age>60){
        printf("You are senior citizen");
    }
    else{
        printf("You are younger than 40 or elder than 60");
    }
}