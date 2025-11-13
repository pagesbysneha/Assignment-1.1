#include<stdio.h>
int main ( ) {
int i,n, square,cube;
printf ("Enter the range:");
scanf ("%d",&n);
for (i=1; i<=n;i++) {
    square = i*i;
    cube = i*i*i;
    printf ("i = %d  square = %d  cube = %d\n",i,square,cube);

}
return 0;
}
