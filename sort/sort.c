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
    int a[10],i,j,t;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=1;j<10-i;j++)
        {
            if(a[i]>a[i+j])
            {
                t=a[i];
                a[i]=a[i+j];
                a[i+j]=t;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
