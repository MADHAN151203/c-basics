#include<stdio.h>
void main()
{   
     int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u;
     printf("enter the amount");
     scanf("%d",&a);
     b=a/2000;
     c=a%2000;
     d=c/500;
     e=c%500;
     f=e/200;
     g=e%200;
     h=g/100;
     i=g%100;
     j=i/50;
     k=i%50;
     l=k/20;
     m=k%20;
     n=m/10;
     o=m%10;
     p=o/5;
     q=o%5;
     r=q/2;
     s=q%2;
     t=s/1;
     u=s%1;
     printf("number of 2000 rupees notes is %d",b);
     printf("\nnumber of 500 rupees notes is %d",d);
     printf("\nnumber of 200 rupees notes is %d",f);
     printf("\nnumber of 100 rupees notes is %d",h);
     printf("\nnumber of 50 rupees notes is %d",j);
     printf("\nnumber of 20 rupees notes is %d",l);
     printf("\nnumber of 10 rupees notes is %d",n);
     printf("\nnumber of 5 rupees coins is %d",p);
     printf("\nnumber of 2 rupees coins is %d",r);
     printf("\nnumber of 1 rupees coins is %d",t);
     
     

}
