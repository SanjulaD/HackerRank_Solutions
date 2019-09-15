
#include <stdio.h>

int main()
{
   int a[1000],i,size;
   int pos=0,neg=0,zero=0;
   float sub1,sub2,sub3;
   scanf("%d",&size);
   for(i=1;i<=size;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]>0){
        pos++;
       }
       else if(a[i]<0){
        neg++;
       }
       else
            zero++;}

    sub1=((float)pos/(float)size);
    sub2=((float)neg)/(float)size;
    sub3=((float)zero)/(float)size;
    printf("%.6f\n",sub1);
    printf("%.6f\n",sub2);
    printf("%.6f\n",sub3);

}

