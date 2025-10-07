#include <stdio.h>
int main()
 { 
    char op;
    float num1, num2, result;
  
    scanf("%f%c%f", &num1, &op, &num2);
    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%f+%f=%f", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%f-%f=%f", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%f*%f=%f", num1, num2, result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%f/%f=%f", num1, num2, result);
        }
        else
        {
            printf("Erorr:division by zero is not allawed.\n");
        }
        break;

    
    
        

    default:
        printf("invalid oparetor");
        break;
    }
    return 0;
}