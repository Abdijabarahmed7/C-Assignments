//
//author:Abdijabar Ahmed
#include <stdio.h>
int main(){ 
int book_id,due_date,return_date,days_over_due;
float fine_rate,fine_amount;
printf("Enter book id: ");
scanf("%d",&book_id);
printf("Enter due date: ");
scanf("%d",& due_date);
printf("Enter return date: ");
scanf("%d",&return_date);
//calculation of days overdue
days_over_due= return_date - due_date;
printf("Days overdue is:%d\n",days_over_due);
if(days_over_due <=7) { fine_rate=20;
fine_amount=days_over_due *20;}
else if(days_over_due <=14) {fine_rate=50;
fine_amount=7*20+(days_over_due-7)*50; 
}
else {fine_rate=100;
fine_amount=7*20+7*50+(days_over_due-14)*100;
}
printf("CALCULATIONS \n");
printf("Enter book id:%d\n",book_id);
printf("Enter due date:%d\n",due_date);
printf("Enter return date:%d\n",return_date);
printf("Enter days over due:%d\n",days_over_due);
printf("Enter fine rate:%.2f\n",fine_rate);
printf("Enter fine amount:%.2f\n",fine_amount);
return 0;
}