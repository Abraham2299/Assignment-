#include<stdio.h>
int main(){

int book_id,due_date,return_date,days_overdue,fine_rate,fine_amount;
printf("enter book_id");
scanf("%d", &book_id);
printf("enter due_date");
scanf("%d", &due_date);
printf("enter return_date");
scanf("%d", &return_date);

days_overdue=return_date-due_date;
if(days_overdue<=7){
fine_rate=20;

}
else if(days_overdue<=15){
fine_rate=50;
}
else (days_overdue>=15);{
fine_rate=100;

}
fine_amount=fine_rate*days_overdue;
printf("\nbook_id:%d", book_id);
printf("\ndue_date:%d", due_date);
printf("\nreturn_date:%d", return_date);
printf("\nfine_amount:%d", fine_amount);
printf("\ndays_overdue:%d", days_overdue);
printf("\nfine_rate:%d", fine_rate);
return 0;
}





    