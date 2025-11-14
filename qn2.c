#include<stdio.h>
int main () {
int n[30],temp;
printf("enter 3 numbers :");
scanf("%d %d %d",&n[0],&n[1],&n[2]);
for(int i=0 ; i<3 ;i++){
    for(int j=0 ;j<3-1;j++){
        if(n[j] > n[j+1]){
            temp = n[j];
            n[j] = n[j+1];
            n[j+1] = temp;
        }
    }
}
for(int i=0;i<3;i++){
    printf("%d",n[i]);
}
return 0;
}
