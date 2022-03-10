#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    scanf("%d",&X);
    for (int i = 1; i <= X; i++)
    {
        for (int j = 1; j <= X - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
