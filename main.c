
#include <stdio.h>
char fuel;
int fueltypeamount,paymentmethod,change,cash,pin,amount,i,n;
void solve();
void bill();
void fuel1();
void cash1();
void fuelpay();
int main ()
{
 printf("total number of fillings available per day:");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
{
  printf ("\n\n\n\t*****Welcome to Automated Filling Station*****\n\n");
  printf ("Enter the fuel you want to fill in your vehicle:\n");
  printf ("Enter 'p' or 'P' for PETROL___\n");
  printf ("Enter 'd' or 'D' for DIESEL___\n");
  printf ("Enter 'c' or 'C' for COMPRESSED NATURAL GAS(CNG)___\n");
  printf ("Enter 'e' or 'E' for ELECTRIC CURRENT___\n");
  solve();
}
  return 0;
}
void solve()
{
  scanf ("%c", &fuel);
  if (fuel == 'p' || fuel == 'P')
    {
      printf ("Today's PETROL rate is 109.66 per litre. \n");
      printf("Enter the amount of PETROL to be filled in your vehicle in litres:\n");
      fuel1();
    }
  else if (fuel == 'd' || fuel == 'D')
    {
      printf ("Today's DIESEL rate is 97.82 per litre.\n");
      printf("Enter the amount of DIESEL to be filled in your vehicle in litres:\n");
      fuel1();
    }
  else if (fuel == 'c' || fuel == 'C')
    {
      printf ("Today's CNG rate is 97 per kg.\n");
      printf("Enter the amount of CNG filled in your vehicle in kilograms:");
      fuel1();
    }
  else if (fuel == 'e' || fuel == 'E')
    {
      printf ("Today's ELECTRIC CURRENT rate is 12 per kwh.\n");
      printf("Enter the amount of electric current to be charged to your vehicle in kilowatts:");
      fuel1();
    }
  else
    {
      printf("Please enter correct alphabet...\n");
     solve();
    }
  }
void fuel1(){
    if (fuel == 'p' || fuel == 'P')
    {
      scanf ("%d", &fueltypeamount);
      if (fueltypeamount > 2)
	{
	  amount = fueltypeamount * 109.66;
	  printf ("Amount to be paid is %d\n", amount);
	  printf ("Select the payment method..\n");
	  fuelpay();
	}
    	
      else
	{
	  printf ("Amount should be greater than 2 litres.sorry try again___\n");
	  fuel1();
	}
    }
    else if (fuel == 'd' || fuel == 'D')
    {
      scanf ("%d", &fueltypeamount);
      if (fueltypeamount > 2)
	  {
	  amount = fueltypeamount * 97.82;
	  printf ("Amount to be paid is %d\n", amount);
	  printf ("Select the payment method..\n");
	  fuelpay();
	}
      else
	  {
	  printf ("Amount should be greater than 2 litres.sorry try again___\n");
	  fuel1();
	 }
    }
    else if(fuel == 'c' || fuel == 'C'){
      scanf ("%d", &fueltypeamount);
      if (fueltypeamount > 2)
	{
	  amount = fueltypeamount * 95;
	  printf ("Amount to be paid is %d\n", amount);
	  printf ("Select the payment method..\n");
	  fuelpay();
	}
      else
	{
	  printf ("Amount should be greater than 2 kilograms.sorry.try again\n");
	  fuel1();
	}
    }
    else if(fuel == 'e' || fuel == 'E'){
      scanf ("%d", &fueltypeamount);
      if (fueltypeamount > 2)
	{ 
	   amount = fueltypeamount * 12;
	  printf ("Amount to be paid is %d\n", amount);
	  printf ("Select the payment method..\n");
	    fuelpay();
	}
      else
	{
	  printf ("Amount should be greater than 2kwh.sorry.try again\n");
	 fuel1();
	}
      }
}
void fuelpay(){
	  printf ("1.cash\t2.credit/debit card\t3.online payment\n");
	  scanf ("%d", &paymentmethod);
	  if (paymentmethod == 1)
	    {
	      printf ("Cash to be paid is %d\n", amount);
	      cash1();
          bill();
		  printf ("\tTotal Amount:%d\n", amount);
		  printf ("\tPayment Method:CASH\n");
		  printf ("\tCash Paid:%d\n", cash);
		  printf ("\tCash Change:%d\n", change);
		  printf ("\t************************\n");
		  printf ("\tTHANK YOU.VISIT AGAIN...");	  
	    }
	  else if (paymentmethod == 2)
	    {
	      printf ("Cash to be paid is %d\n", amount);
	      printf ("Please insert your card\n");
	       printf ("Enter your PIN:");
		  scanf ("%d", &pin);
		  printf ("\nMoney is Succesfully transfered.");
		printf("\n%d kws of current is charged to  your vehicle.\n",fueltypeamount);
		  printf ("Please collect your bill.\n");
		  printf ("\t************************\n");
		  bill();
		  printf ("\tTotal Amount:%d\n", amount);
		  printf ("\tPayment Method:CARD\n");
		  printf ("\tCash Paid:%d\n", amount);
		  printf ("\tCash Change:0\n");
		  printf ("\t************************\n");
		  printf ("\tTHANK YOU.VISIT AGAIN...");
	    }
	      else if (paymentmethod == 3)
		{
		  printf ("Scan the QR Code given and make the payment\n");
		  printf ("Enter your pin to make transaction");
		  scanf ("%d", &pin);
		  printf ("\nMoney is Succesfully transfered.");
		  bill();
		  printf ("\tTotal Amount:%d\n", amount);
		  printf ("\tPayment Method:ONLINE\n");
		  printf ("\tCash Paid:%d\n", amount);
		  printf ("\tCash Change:0\n");
		  printf ("\t************************\n");
		  printf ("\tTHANK YOU.VISIT AGAIN...");
		}
        else{
            printf("enter correct method\n");
            fuelpay();
        }
	}
void cash1(){
	      printf ("Please insert your cash\n");
	      scanf ("%d", &cash);
	      if (cash > amount)
		{
		  change = cash - amount;
		  printf ("Change to be obtained is %d\n", change);
		  printf ("Please collect your change.\n");
		}
	      else if (cash == amount)
		{
		  change = cash - amount;
		}
	      else
		{
		  printf ("INSUFFIENT MONEY");
		  printf("\n please ensure that you insert correct amount of cash");
		  cash1();
		}
		      }	
void bill()
{
     if (fuel == 'p' || fuel == 'P')
     { 
         printf("%d litres of petrol is filled in your vehicle.\n",fueltypeamount);
          printf ("Please collect your bill.\n");
		  printf ("\t************************\n");
         printf("\tFUEL Chosen:PETROL\n");
         printf ("\tQuantity:%d litres\n", fueltypeamount);
     }
      else if (fuel == 'd' || fuel == 'D')
    {
        printf("%d litres of diesell is filled in your vehicle.\n",fueltypeamount);
         printf ("Please collect your bill.\n");
		  printf ("\t************************\n");
      printf("\tFUEL Chosen:DIESEL\n");
      printf ("\tQuantity:%d litres\n", fueltypeamount);
    }
     else if (fuel == 'c' || fuel == 'C')
    {
      printf ("%d kgs of CNG is filled in your vehicle.\n",fueltypeamount);
       printf ("Please collect your bill.\n");
		  printf ("\t************************\n");
		  printf("\tFUEL Chosen:CNG\n");
		   printf ("\tQuantity:%d kgs\n", fueltypeamount);
    }
     else if (fuel == 'e' || fuel == 'E')
    {
    printf("%d kilowatts of current is charged to your vehicle.\n",fueltypeamount); 
    printf ("Please collect your bill.\n");
	printf ("\t************************\n");
    printf("\tFUEL Chosen:ELECTRIC CURRENT\n");
    printf ("\tQuantity:%d kws\n",fueltypeamount);  
    }
}
		
	   






