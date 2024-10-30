#include<stdio.h>
int main()
{
    int k1,k2,k3,k4,f1,f2,f3,f4,flag,i;
    for(k1=1;k1<=8;k1++)
        for(k2=k1+1;k2<=12;k2++)
            for(k3=k2+1;k3<=18;k3++){
                k4=40-k1-k2-k3;
                if(k4<=k3) break;
                for(i=1;i<=40;i++)
                {
                    flag=0;
                    for(f1=-1;f1<=1;f1++)           
                        for(f2=-1;f2<=1;f2++)                       
                            for(f3=-1;f3<=1;f3++)                            
                                for(f4=-1;f4<=1;f4++)                               
                                    if(k1*f1+k2*f2+k3*f3+k4*f4==i) flag=1;
                    if(!flag) break;                                                                                                                                                                                               
                }
                if(i==41) {printf("%d %d %d %d\n",k1,k2,k3,k4);}
            }
}