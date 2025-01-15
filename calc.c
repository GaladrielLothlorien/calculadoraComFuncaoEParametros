#include <stdio.h>

//Create the functions
int sum(int x, int y){
    return x + y;
}

int minus(int x, int y){
    return x -y;
}

int multiply(int x, int y){
    return x * y;
}

int divide(int x, int y){
    return x / y;
}

int main(){
    //Declare variables
    int numberOne;
    int numberTwo;
    int resultSum;
    int resultMinus;
    int resultMultiply;
    int resultDivide;

    printf("Typer your first number: ");
    scanf("%d", &numberOne);

    printf("Typer your second number: ");
    scanf("%d", &numberTwo);

    //Call the function with new variable
    resultSum = sum(numberOne, numberTwo);
    resultMinus = minus(numberOne, numberTwo);
    resultMultiply = multiply(numberOne, numberTwo);
    resultDivide = divide(numberOne, numberTwo);

    printf("The sum is: %d \n", resultSum);
    printf("The minus is: %d \n", resultMinus);
    printf("The multiply is: %d \n", resultMultiply);
    printf("The division is: %d \n", resultDivide);

    return 0;
}
