#include <stdio.h>
#include <cs50.h>

int main ( void )
{ 
     int height,rows,space,sharp;
     do
     {
          printf("height: ");
          height = GetInt();
          
     }while(height<0 || height >=23);
     if((height>0) && (height<=23))
     {
      for(rows = 2; rows<=height+1; rows++)
      { 
          for ( space = (height-rows);space >=0; space-- )
          { 
               printf(" ");
          }
          for(sharp = 1; sharp< (rows+1 );sharp++)
          { 
              printf("#");
          }
          printf("\n");
      }
     }
}