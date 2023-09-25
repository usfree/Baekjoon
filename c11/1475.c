#include <stdio.h>

int main(void)
{
    int base[9] = { 0 };
    char input[8];

    scanf("%s", input);

    int i = 0;
    int size = strlen(input);
    int stack = 0;
    while (i < size)
    {
        if (input[i] == '0')
            base[0]++;
        else if (input[i] == '1')
            base[1]++;
        else if (input[i] == '2')
            base[2]++;
        else if (input[i] == '3')
            base[3]++;    
        else if (input[i] == '4')
            base[4]++;
        else if (input[i] == '5')
            base[5]++;
        else if (input[i] == '6' || input[i] == '9')
        {
            if (stack == 1)
                stack = 0;
            else
            {
                base[6]++;
                stack = 1;
            }
        }
        else if (input[i] == '7')
            base[7]++;
        else if (input[i] == '8')
            base[8]++;
        i++;
    }

    int max = -1;

    i = 0;
    while (i < 9)
    {
        if (base[i] > max)
            max = base[i];
        i++;
    }

    printf("%d", max);
}