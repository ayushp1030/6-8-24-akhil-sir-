#include<stdio.h>

main()
{
    // a,b,c

    int a,b,c;

    printf("enter a =");
    scanf("%d",&a);
    printf("enter b =");
    scanf("%d",&b);
    printf("enter b =");
    scanf("%d",&b);
    
    // a,b,c
    
    if(a>b)
    {
       if(a>c)
       {
         // a
         printf("a is maximum");
       }
       else
       {
         //c
         printf("c is maximum");
       }
     
    }
    else
    {
        if(b>c)
        {
            //b
            printf("b is maximum");
        }
        else
        {
            //c
            printf("c is maximum");
        }
    }
    
}


