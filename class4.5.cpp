#include<stdio.h>
int main()
{
  	float width, height, Area; 
 
  	printf ("\n Please Enter the Width of a Rectangle  :  ");
  	scanf ("%f",&width);

  	printf ("\n Please Enter the Length of a Rectangle :  ");
  	scanf ("%f",&height);
	   
  	Area = width * height;
 
	printf("\n The Area of a Rectangle =  %.2f", Area);
 

}
