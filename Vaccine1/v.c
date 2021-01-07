#include<stdio.h>

int main()
{
    int d1,v1,d2,v2,p,k;
    static int i=1;
    printf("Enter d1 v1 d2 v2 p respectively\n");
    scanf("%d%d%d%d%d",&d1,&v1,&d2,&v2,&p);
    if(d1>d2)
    {   do
        {
            k=(d1-d2)*v2+(v1+v2)*i;
            ++i;
        }while(k<p) ;
        printf("%d\n",i-1+(d1-d2)+d2-1);
    }
    else
    {
         do
        {
            k=(d2-d1)*v2+(v1+v2)*i;
            ++i;
        }while(k<p) ;  
    
        printf("%d\n",i-1+(d2-d1)+d1-1);
    }
    
}