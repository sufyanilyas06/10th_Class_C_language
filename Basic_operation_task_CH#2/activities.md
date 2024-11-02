<div align="center" >
    <h1>Activities</h1>
</div>

## Activity 2.2
Write a program that show your first name in Uppercase and your last name in lower case letter on screen.
```c
void main()
{
    printf("SUFYAN ilyas");
}
```
### Output: SUFYAN ilyas
## Activity 2.3
Write a program that take roll number , percentage of marks and grade from user as input. Program should display the formatted output like following:
Roll NO :  input value 
Percentage : input value %
Grade : input value 
```c
#include<stdio.h>
void main()
{
    int rollNo;
    float percentage;
    char grade;
    printf("enter you roll # :");
    scanf("%d",&rollNo);
    printf("enter your percentage :");
    scanf("%f",&percentage);
    printf("enter your grade :");
    /*there is problem here is that when we use scanf to take 
     charater form user it will not be able to do this, because  when you 
     press enter after storing value in the percentage the enter pressed by
     you is stored in the charater so we can resolve this error by adding space 
     at the start of %c  as I mentioned below  */
    scanf(" %c",&grade);
    printf("Roll NO\t: %d\n",rollNo);
    printf("Percentage\t: %f\n",percentage);
    printf("Grade\t : %c\n",grade);
}
```
### Output:
enter you roll # :12  
enter your percentage :90  
enter your grade :A  
Roll NO : 12  
Percentage : 90.000000  
Grade : A  

## Activity 2.4
Write a program that takes as input the length of one side of square and claculates the area of square.
```c

#include<stdio.h>
void main()
{
    
    float length;
    
    printf("enter length of square :");
    scanf("%f",&length);
    printf("Area of square is : %.2f ",length*length);

}
```
### Output:
enter length of square :12  
Area of square is : 144.00  
## Activity 2.5
Write a program that takes as input the number of balls in har A and the number of balls in jar B. The program calcultes and display the total number of balls.
```c
#include<stdio.h>
void main()
{
    int Balls_in_jar_A , Balls_in_jar_B,Total_number_of_Balls;
    printf("enter number of balls in jar A & B :");
    scanf("%d %d",&Balls_in_jar_A,&Balls_in_jar_B);
    Total_number_of_Balls = Balls_in_jar_A + Balls_in_jar_B;
    printf("Total Number of balls are : %d\n",Total_number_of_Balls);
}
```
### Output:
enter number of balls in jar A & B :12 44 
Total Number of balls are : 56  
## Activity 2.6
Write a program that takes original price of a shirt and discount percentage from user. Program should display the original price of shirt, discount on price and price after discount.
```c
//-----------------------------------
// ACTIVITY 2.5
#include<stdio.h>
void main()
{
    float original_price, discount_percentage,discount_price,price_after_discount;
    printf("enter original price of shirt :");
    scanf("%f",&original_price);
    printf("enter discount percentage :");
    scanf("%f",&discount_percentage);
    discount_price = original_price * discount_percentage/100;
    price_after_discount = original_price - discount_percentage;
    printf("Original Price : %.2f\n",original_price);
    printf("Discount Price : %.2f\n",discount_price);
    printf("Price after discount :%.2f\n",price_after_discount);
}
```
### Output:
enter original price of shirt :1200
enter discount percentage :20
Original Price : 1200.00
Discount Price : 240.00
Price after discount :1180.00
## Activity 2.7
write a program that takes 2 digit number form user, computes the prdouct of both digits and show the output.
```c
#include<stdio.h>
void main()
{
    int two_digit_number, first_digit,second_digit;
    printf("enter two digit number :");
    scanf("%d",&two_digit_number);
    first_digit = two_digit_number /10;
    second_digit = two_digit_number % 10;
    printf("The product of %d & %d is %d ", first_digit , second_digit , first_digit*second_digit); 

}
```
### Output:
enter two digit number :56  
The product of 5 & 6 is 30 
 ## Activity 2.8
 Write a program that takes seconds as input and clacultes euivalent numbers of hours, minutes and seconds.
 ```c 
 #include<stdio.h>
void main()
{
    int seconds,hours,minutes;
    printf("enter time in seconds: ");
    scanf("%d",&seconds);
    hours = seconds / 3600;
    seconds = seconds - (hours * 3600);
    minutes = seconds / 60;
    seconds = seconds - (minutes * 60);
    printf("Time : %d hr : %d min : %d sec \n", hours, minutes, seconds);

}
```
### Output:
enter time in seconds: 18978  
Time : 5 hr : 16 min : 18 sec 
## Activity 2.9
Convert the following algebric Expressions into C expression.

$$ x = 6y + z $$

$$ x = yz^3 + 3y $$

$$ z = x + \frac{y^2}{3x} $$

$$ z = (x - 2)^2 + 3y $$

$$ y = \frac{x + 3z}{2} + z^3 + \frac{x}{z} $$
```c
#include<stdio.h>
void main()
{
    int x,y,z;
    x = 6 * y + z;
    x = y * (z*z*z) + 3 * y;
    z = x + y*y/3*x;
    z = (( x - 2)*( x - 2)) + 3*y;
    y = (x + 3*z)/2 + (z*z*z) + x/z ;
}
```
## Output:
Output of this code will depend on the value of x,y,z
## Activity 2.10
Consider the variable x=3, y=7. Find out Boolean result of the following expressions.

$$ (2+5)>y \qquad (x+4) == y $$
$$ x!=(y-4) \qquad (y/2) >= x $$
$$ -1<x \qquad (x*3)<=20 $$
```c
#include<stdio.h>
void main()
{
    int x=3,y=7;
    printf("the Boolean value of the eq (2+5)>y is %d\n",(2+5)>y);
printf("the Boolean value of the eq (x+4) == y is %d\n",(x+4) == y);
printf("the Boolean value of the eq x!=(y-4) is %d\n",x!=(y-4));
   printf("the Boolean value of the eq (y/2) >= x is %d\n",(y/2) >= x) ;
   printf("the Boolean value of the eq -1<x is %d\n",-1<x) ;
   printf("the Boolean value of the eq (x*3)<=20 is %d\n",(x*3)<=20); 
   
}
```
### Output:
the Boolean value of the eq (2+5)>y is 0  
the Boolean value of the eq (x+4) == y is 1  
the Boolean value of the eq x!=(y-4) is 0  
the Boolean value of the eq (y/2) >= x is 1  
the Boolean value of the eq -1<x is 1  
the Boolean value of the eq (x*3)<=20 is 1  
## Activity 2.11
Consider the variable x=4, y=7,z=8. Find out Boolean result of the following expressions.

$$ x==2 || y==8 \qquad 7>=y \&\& z<5 $$
$$ z>= 5 || x<= -3 > \qquad y==7 && !(true) $$
$$ x!=y || y<5 \qquad !(z>x) $$
```c
#include<stdio.h>
void main()
{
    int x=3,y=7,z=8;
    printf("the Boolean value of the eq x==2 || y==8 is %d\n",x==2 || y==8);
printf("the Boolean value of the eq 7>=y && z<5 is %d\n",7>=y && z<5);
printf("the Boolean value of the eq  y==7 && !(true) is %d\n", y==7 && !(1));
   printf("the Boolean value of the eq z>= 5 || x<= -3 %d\n",z>= 5 || x<= -3)  ;
   printf("the Boolean value of the eq x!=y || y<5 is %d\n",x!=y || y<5) ;
   printf("the Boolean value of the eq !(z>x) is %d\n",!(z>x)); 
   
}
```
### Output:
the Boolean value of the eq x==2 || y==8 is 0
the Boolean value of the eq 7>=y && z<5 is 0
the Boolean value of the eq  y==7 && !(true) is 0
the Boolean value of the eq z>= 5 || x<= -3 1
the Boolean value of the eq x!=y || y<5 is 1
the Boolean value of the eq !(z>x) is 0