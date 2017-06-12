//
//  sort.c
//  sort
//
//  Created by 20161104579 on 2017/6/12.
//  Copyright © 2017年 20161104579. All rights reserved.
//

#include "sort.h"
int main()
{
    int a[10],n,i,j,t;
    for(i=0;i<=9;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-1-i;j++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
