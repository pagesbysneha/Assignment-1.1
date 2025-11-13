#include<stdio.h>
int main(){
int option;
float celsius, farenheit , convertedFarenheit =0 ,convertedCelsius = 0 ;
printf("1 : celsius to farenheit\n");
printf("2 : farenheit to celsius\n");
printf("enter an option 1/2 : \n");
scanf("%d", &option);
if (option==1){
    printf("enter temp in celsius :");
    scanf("%f", &celsius);
    convertedFarenheit = (1.8*celsius) + 32; {
    printf("%f \n",convertedFarenheit);
}
}
else if (option==2){
    printf("enter temp in farenheit :");
    scanf("%f", &farenheit);
    convertedCelsius = 0.5*(farenheit-32); {
    printf("%f \n", convertedCelsius);
} }
    else
        {
            printf("please enter a valid option !!\n");
}
return 0;
}
