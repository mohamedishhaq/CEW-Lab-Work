/*3.Write a C program to accept the height of a person in centimeters and categorize the 
person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average, 
Height>=165cm – Tall).*/

#include <stdio.h>

int main(){

  int height;

  printf("Enter the height of the person in cm:");
  scanf("%d",&height);

  if(height<150){
    printf("Dwarf");
  }else if(height==150){
    printf("Average");
  }else if(height>=165){
    printf("Tall");
  }


  return 0;
}