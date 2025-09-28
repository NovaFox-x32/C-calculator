#include <stdio.h>

int add(){
    int num1;
    int num2;
    int res;

    printf("First number: ");
    scanf("%d", &num1);

    printf("Second number: ");
    scanf("%d", &num2);

    res = num1 + num2;
    
    printf("%d\n", res);
}

int subtract(){
    int num1;
    int num2;
    int res;

    printf("First number: ");
    scanf("%d", &num1);

    printf("Second number: ");
    scanf("%d", &num2);

    res = num1 - num2;
    
    printf("%d\n", res);
}

int multi(){
    int num1;
    int num2;
    int res;

    printf("First number: ");
    scanf("%d", &num1);

    printf("Second number: ");
    scanf("%d", &num2);

    res = num1 * num2;
    
    printf("%d\n", res);
}

int divide(){
    int num1;
    int num2;
    int res;

    printf("First number: ");
    scanf("%d", &num1);

    printf("Second number: ");
    scanf("%d", &num2);

    res = num1 / num2;

    printf("Result: %d\n", &res);
}

int main(){
    char oper;

    printf("Operations: + , - , * , / \n\n");
    printf("Select operation: ");
    scanf("%s", &oper);

    switch(oper){
        case '+':
            add();
            break; 
        case '-':
            subtract();
            break;
        case '*':
            multi();
            break;
        case '/':
            divide();
            break;
        default:
            printf("Operation not found.\n");
            break;
    }
}
