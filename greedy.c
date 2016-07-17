#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{ 
    float change;
    int counter=0;
    int remainder;
    int change_in_cents;
    do
    {
         printf("How much change do you need? ");
         change = GetFloat();
    }while(change<0);
    change_in_cents = roundf(change*100);
    remainder = change_in_cents;
    counter+= remainder/25;
    remainder%=25;
    
    counter+= remainder/10;
    remainder%=10;
    
    counter+= remainder/5;
    remainder%=5;
    
    counter+= remainder;
    
    printf("%d\n", counter );
}
   