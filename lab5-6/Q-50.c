#include<stdio.h>

int main(){

/*

A
b b 
c c c 
d d d d 


*/


int ascii = 65, result;


for (int i = 1; i <= 5 ; i++)
{
  for (int j = 1; j <= i; j++)
  {
    result = ascii;
    printf(" %c ", result);
  }
    printf("\n");
    // ascii = 65;
    ascii += 1;
  
}


}