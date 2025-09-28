#include <stdio.h>

int main(){
    int num1, num2, res;
    char oper; 
    printf("Operations: +,-,*,/ \n");
    printf("\nSelect operation: ");
    scanf("%s", &oper);

    printf("\nFirst number: ");
    scanf("%d", &num1);

    printf("\nSecond number: ");
    scanf("%d", &num2);

    switch (oper){
    case '+':
        res = num1 + num2;
        printf("%d\n", res);
        break;
    case '-':
        res = num1 - num2;
        printf("%d\n", res);
        break;
    case '/':
        res = num1 / num2;
        printf("%d\n", res);
        break;
    case '*':
        res = num1 * num2;
        printf("%d\n", res);
        break;
    default:
        printf("Invalid");
        break;
        return 1;
    }
}