//break and continue
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0;
    do
    {
        i++;
        if (i==5)
        {
            continue;;
        }
        printf("%d\n",i);
        
    }
    while (i<=8);
    

    //for continue
    for(i=0;i<=8;i++)
    {
        if (i==5)
        {
            continue;
        }
        printf("%d\n",i);
    }

    //while contine
    while (i<=8)
    {
        i++;
        if(i==5)
        {
            continue;
        }
        printf("%d\n",i);
    }

    //do while break
    do
    {
        i++;
        if (i==5)
        {
            break;
        }
        printf("%d\n",i);
    } 
    while (i<=8);

    //while break
    while (i<=8)
    {
        i++;
        if(i==5)
        {
            break;
        }
        printf("%d\n",i);
    }

    //for break
    for(i=0;i<=8;i++)
    {
        if (i==5)
        {
            break;
        }
        printf("%d\n",i);
    }
    
    
}
