# include <stdio.h>
int main() {
float principle,rate,time, interest ;

printf("enter principle");
scanf("%f",& principle);

printf("enter rate");
scanf("%f",&rate);

printf("time");
scanf("%f",&time);

interest=principle*time*rate/100;
printf("the interest is:%2f",interest);
return 0;
}

