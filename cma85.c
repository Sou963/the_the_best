#include<stdio.h>
main()
{
    int a[100],n,i;
    printf("The value of the number=");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("%dThe number=",i);
        scanf("%d",&a[i]);

    }
    int max=a[0];
    for(i=1; i<n; i++)
    {
        {
            if (max<a[i])
                max=a[i];

        }


    }
    printf("The big number is=%d\n",max);
    return 0;
}

