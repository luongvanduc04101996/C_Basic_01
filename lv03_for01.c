#include<stdio.h>
void main(){
int i,a;
float s=0;
printf("Nhap 1 so:\n");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    s+=(float)1/i;
}
printf("Tong la: %.2f",s);
}
