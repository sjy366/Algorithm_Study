#include <stdio.h>

int check(int n)
{
 int a[4]={0},b[4]={0},c[4]={0};
 a[3]=n/(16*16*16),a[2]=(n%(16*16*16))/(16*16),a[1]=(n%(16*16)/16),a[0]=n%16;
 b[3]=n/(12*12*12),b[2]=(n%(12*12*12))/(12*12),b[1]=(n%(12*12)/12),b[0]=n%12;
 c[3]=n/(10*10*10),c[2]=(n%(10*10*10))/(10*10),c[1]=(n%(10*10)/10),c[0]=n%10;
 if(c[3]+c[2]+c[1]+c[0]==a[3]+a[2]+a[1]+a[0]&&a[3]+a[2]+a[1]+a[0]==b[3]+b[2]+b[1]+b[0]) return 1;
 else return 0;
};

int main()
{
 int i;
 for(i=1000;i<10000;i++)
  if(check(i)==1) printf("%d\n",i);
 return 0;
}