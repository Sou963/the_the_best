#include<stdio.h>
main()
{
    int  N,row,col;
    scanf("%d",&N);
    for(row=1;row<=N;row++);
    {
        for(col=1; col<=N-row;col++)
        {
            printf(" ");
            //print the space
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
            //print the number
        }
        printf("\n");


    }
}

