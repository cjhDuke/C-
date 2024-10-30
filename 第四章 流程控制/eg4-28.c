#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k=2;
    printf("%6d%6d",2,3);
    for(i=5;i<500;i+=2)
    {
        for(j=3;j<sqrt(i);j+=2)
        {
            if(i%j==0) break;  
        }
        if(j>sqrt(i))
        {
            printf("%6d",i);
            k++;
            if (k%10==0) printf("\n");
        }
    }
    printf("\n");
}