#include <stdio.h>

int main (void)
{
    int M;
    int arr[21] = { 0 };
    scanf("%d", &M);

    while (M--)
    {
        char op[7];
        int num = 0;

        scanf("%s", op);


        if (op[0] == 'a' && op[1] == 'd') //add
        {
            scanf("%d", &num);
            arr[num]++;
        }
        else if (op[0] == 'r' && op[1] == 'e') //remove
        {
            scanf("%d", &num);
            if (arr[num] >= 1)
            {
                scanf("%d", &num);
                arr[num]--;
            }
        }

        else if (op[0] == 'c' && op[1] == 'h') //check
        {
            scanf("%d", &num);
            if (arr[num] >= 1)
                printf("1\n");
            else
                printf("0\n");
        }

        else if (op[0] == 't' && op[1] == 'o') //toggle
        {
            scanf("%d", &num);
            if (arr[num] >= 1)
                arr[num] = 0;
            else
                arr[num]++;
        }

        else if (op[0] == 'a' && op[1] == 'l') //all
        {
            for (int j = 1; j < 21; j++)
                arr[j] = 1;
        }

        else if (op[0] == 'e' && op[1] == 'm') //empty
        {
            for (int j = 0; j < 21; j++)
                arr[j] = 0;
        }
    }
}