/*Develop a menu-driven program to do arthmetic operations such as +,-,*,/,% using udf,
switch case,and looping.Make sure that program is endless until a certain letter is passed*/
#include<stdio.h>

int add( int a,int b);
int sub( int a,int b);
int multi( int a,int b);
int div( int a,int b);
int mod( int a,int b); //udf decleration

int main(){
    int choice;
    for(;;){
        int num1,num2;

        printf("\n\nPress 1 for addition(+)");
        printf("\nPress 2 for subtraction(-)");
        printf("\nPress 3 for multiplication(*)");
        printf("\nPress 4 for division(/)");
        printf("\nPress 5 for modulus(%)");
        printf("\nPress 0 for exit");
        printf("\n\nenter your choice:");
        scanf("%d",&choice);

        if(choice == 0 ){
            printf("\nexiting the program");
            break;
        }

        printf("enter the first number:");
        scanf("%d",&num1);
        printf("enter the second number:");
        scanf("%d",&num2);

        switch(choice){
            case 1:
                printf("the addition of %d + %d =:%d",num1,num2,add(num1,num2));
                break;
            case 2:
                printf("\nthe subtraction of %d - %d =:%d",num1,num2,sub(num1,num2));
                break;
            case 3:
                printf("\nthe multiplication of %d * %d =:%d",num1,num2,multi(num1,num2));
                break;
            case 4:
                printf("\nthe division of %d / %d =:%d",num1,num2,div(num1,num2));
                break;
            case 5:
            if(num2!=0){
                printf("\nthe modulus of %d and %d =:%d",num1,num2,mod(num1,num2));
            }
            else{
                printf("0 not allowed");
            }
                break;
            default:
                printf("\nInvalid choice !!");
        }
    }
    return 0;
}
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int multi( int a,int b){
    return a*b;
}
int div( int a,int b){
    return a/b;
}
int mod( int a,int b){
    return a%b;
}