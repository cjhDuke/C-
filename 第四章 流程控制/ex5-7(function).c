#include<stdio.h>
#include<math.h>
float wozuishuai(int n,int depth);
 int main()
 {
    int n;
    scanf("%d",&n);
    float y=wozuishuai(n,n);
    printf("%f",y);
 }
 float wozuishuai(int n,int depth)
 {
    if(depth<=1)
    {
      return sqrt(n);
    }
    else
    {
      return sqrt(n-depth+1+wozuishuai(n,depth-1));
    }
 }

 
