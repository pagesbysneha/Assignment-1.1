#include<stdio.h>
int main( ) {
int i,a;
for(i=1;i<=5;i++) {
  for(a=1;a<=5-i;a++) {
    printf(" ");
    }
    for (int n=1; n<=i;n++){
        printf("$");
    }
    printf("\n");
}
return 0;
}
