#include <stdio.h>

int main()
{
int choice,coin,s1=5,s2=5,s3=5,coin5=5,coin10=5,coin25=5,coin50=5;
char ch;



printf("Welcome to the stamp vending machine..!\n");
printf("stamp1- 10 rupees\n");
printf("stamp2- 15 rupees\n");
printf("stamp3- 25 rupees\n");

printf("Enter the s number of your selection: \n");
scanf("%d",&choice);
printf("Enter the value of your coin and make sure to insert only one!: \n");
scanf("%d",&coin);


while(1>0){



if (choice==1 && choice==2 && choice==3){
     printf("No such stamp available.\nCoin returned.\n");
     return 0;
}

  switch(choice){

  case 1:
      if (coin==10){
        printf("Thank you for your purchase!\n Here is your 10 rupees valued stamp\n");
        (s1)--;
        (coin10)++;
      }
      else if (coin==25){
        printf("Thank you for your purchase!\n Here is your 10 rupees valued stamp\n");
        printf("Take your balance :%d\n",coin-10);
        (s1)--;
        (coin25)++;
        (coin10)--;
        (coin5)--;

      }
      else if (coin==50){
         printf("Thank you for your purchase!\n Here is your 10 rupees valued stamp\n");
        printf("Take your balance :%d\n",coin-10);
        (s1)--;
        (coin50)++;
        (coin25)--;
        (coin10)--;
        (coin5)--;
      }
      else printf("Insufficient amount.Coin returned.\n");

      break;
  case 2:
      if (coin==25){
        printf("Thank you for your purchase!\n Here is your 15 rupees valued stamp\n");
        printf("Take your balance :%d\n",coin-15);
         (s2)--;
        (coin25)++;
        (coin10)--;
      }
      else if (coin==50){
         printf("Thank you for your purchase!\n Here is your 15 rupees valued stamp\n");
        printf("Take your balance :%d\n",coin-15);
         (s2)--;
        (coin50)++;
        (coin25)--;
        (coin10)--;
      }
      else printf("Insufficient amount.Coin returned.\n");

      break;
  case 3:

       if (coin==25){
        printf("Thank you for your purchase!\n Here is your 25 rupees valued stamp\n");
        (s3)--;
        (coin25)++;
       }
       if (coin==50){
        printf("Thank you for your purchase!\n Here is your 25 rupees valued stamp\n");
        printf("Take your balance :%d\n",coin-25);
        (s3)--;
        (coin50)++;
        (coin25)--;
      }
      break;

      default :
       printf("Insufficient amount.Coin returned.\n") ;
       break;

}
//remaining stamps
printf("Remainnig 10 rupees stamps:%d\n",s1);
printf("Remainnig 15 rupees stamps:%d\n",s2);
printf("Remainnig 25 rupees stamps:%d\n",s3);

//remaining coins
printf("Remainnig 5 rupees coin :%d\n",coin5);
printf("Remainnig 10 rupees coin :%d\n",coin10);
printf("Remainnig 25 rupees coin :%d\n",coin25);
printf("Remainnig 50 rupees coin :%d\n",coin50);


 printf("Do you want to exit?(y/n)\n");
   scanf("%c",&ch);


if  (ch == 121){
        printf("Thank you for your purchase.Have a nice day!");
         break;

}
}
return 0;
}


