#include "../inc/calculator.h"

bool isValidOperation(char *oper)
{
    if (mx_strlen(oper) != 1 || oper == NULL) return false;
    char c = oper[0];
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%') 
    {
        return true;
    }
    return false;
}

bool isValidNumber(char *a)
{   
    int i = 0;
    if (a[i] == '-' || a[i] == '+')
    {
        i++;
    }
    while (a[i] != '\0')
    {
        if (!mx_isdigit(a[i]))
        {
            return false;
        }
        i++;
    }
    return true;
}

enum e_operation operation_check(char oper)
{
    enum e_operation op = -1;
    if (oper == '-') op = SUB;
    else if (oper == '+') op = ADD;
    else if (oper == '/') op = DIV;
    else if (oper == '*') op = MUL;
    else if (oper == '%') op = MOD;
    else return op;
    return op;
}


int calculation(int num1, int num2, enum e_error error, enum e_operation oper)
{
    int result = 0;
    if (oper == ADD)
    {
        return mx_add(num1, num2);
    } else if (oper == SUB)
    {
        return mx_sub(num1, num2);
    } else if (oper == MUL)
    {
        return mx_mul(num1, num2);
    } else if (oper == DIV)
    {
        if (num2 == 0)
        {
            error = DIV_BY_ZERO;
            mx_printerr("error: division by zero\n");
            exit(1);
        }
        return mx_div(num1, num2);
    } else if (oper == MOD)
    {
        return mx_mod(num1, num2);
    }
    return result;
}

int main(int argc, char *argv[])
{
    if (argv == NULL) return 1;
    
    if (argc != 4)
    {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [operand1] [operation] [operand2]\n");
        exit(1);
    }
    enum e_error error = -1;
    if (!isValidOperation(argv[2]))
    {
        error = INCORRECT_OPERATION;
        mx_printerr("error: invalid operation\n");
        exit(1);
    }

    if (!isValidNumber(argv[3]) || !isValidNumber(argv[1]))
    {
        error = INCORRECT_OPERAND;
        mx_printerr("error: invalid number\n");
        exit(1);
    }  

    int num1 = mx_atoi(argv[1]);
    int num2 = mx_atoi(argv[3]);
    char oper_ch = argv[2][0];

    enum e_operation oper;
    oper = operation_check(oper_ch);

    int result = calculation(num1, num2, error, oper);
    mx_printint(result);
    mx_printchar('\n');
    return 0;
}



