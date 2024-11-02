// ---------- these are the activities of chapter # 2 (user interface)------------
// ACTIVITY 2.2:
/* #include<iostream>
void main()
{
    printf("SUFYAN ilyas");
} */
//-----------------------------------
// ACTIVITY 2.3
// #include<stdio.h>
// void main()
// {
//     int rollNo;
//     float percentage;
//     char grade;
//     printf("enter you roll # :");
//     scanf("%d",&rollNo);
//     printf("enter your percentage :");
//     scanf("%f",&percentage);
//     printf("enter your grade :");
//     /*there is problem here is that when we use scanf to take 
//      charater form user it will not be able to do this, because  when you 
//      press enter after storing value in the percentage the enter pressed by
//      you is stored in the charater so we can resolve this error by adding space 
//      at the start of %c  as I mentioned below  */
//     scanf(" %c",&grade);
//     printf("Roll NO\t: %d\n",rollNo);
//     printf("Percentage\t: %f\n",percentage);
//     printf("Grade\t : %c\n",grade);
// }
//-----------------------------------
// ACTIVITY 2.4
// #include<stdio.h>
// void main()
// {
    
//     float length;
    
//     printf("enter length of square :");
//     scanf("%f",&length);
//     printf("Area of square is : %.2f ",length*length);

// }
//-----------------------------------
// ACTIVITY 2.5
// #include<stdio.h>
// void main()
// {
//     int Balls_in_jar_A , Balls_in_jar_B,Total_number_of_Balls;
//     printf("enter number of balls in jar A & B :");
//     scanf("%d %d",&Balls_in_jar_A,&Balls_in_jar_B);
//     Total_number_of_Balls = Balls_in_jar_A + Balls_in_jar_B;
//     printf("Total Number of balls are : %d\n",Total_number_of_Balls);
// }
//-----------------------------------
// ACTIVITY 2.6
// #include<stdio.h>
// void main()
// {
//     float original_price, discount_percentage,discount_price,price_after_discount;
//     printf("enter original price of shirt :");
//     scanf("%f",&original_price);
//     printf("enter discount percentage :");
//     scanf("%f",&discount_percentage);
//     discount_price = original_price * discount_percentage/100;
//     price_after_discount = original_price - discount_percentage;
//     printf("Original Price : %.2f\n",original_price);
//     printf("Discount Price : %.2f\n",discount_price);
//     printf("Price after discount :%.2f\n",price_after_discount);
// }
//-----------------------------------
// ACTIVITY 2.7
// #include<stdio.h>
// void main()
// {
//     int two_digit_number, first_digit,second_digit;
//     printf("enter two digit number :");
//     scanf("%d",&two_digit_number);
//     first_digit = two_digit_number /10;
//     second_digit = two_digit_number % 10;
//     printf("The product of %d & %d is %d ", first_digit , second_digit , first_digit*second_digit); 

// }
//-----------------------------------
// ACTIVITY 2.8
// #include<stdio.h>
// void main()
// {
//     int seconds,hours,minutes;
//     printf("enter time in seconds: ");
//     scanf("%d",&seconds);
//     hours = seconds / 3600;
//     seconds = seconds - (hours * 3600);
//     minutes = seconds / 60;
//     seconds = seconds - (minutes * 60);
//     printf("Time : %d hr : %d min : %d sec \n", hours, minutes, seconds);

// }
//-----------------------------------
// ACTIVITY 2.9
// #include<stdio.h>
// void main()
// {
//     int x,y,z;
//     x = 6 * y + z;
//     x = y * (z*z*z) + 3 * y;
//     z = x + y*y/3*x;
//     z = (( x - 2)*( x - 2)) + 3*y;
//     y = (x + 3*z)/2 + (z*z*z) + x/z ;
// }
//-----------------------------------
// ACTIVITY 2.10
// #include<stdio.h>
// void main()
// {
//     int x=3,y=7;
//     printf("the Boolean value of the eq (2+5)>y is %d\n",(2+5)>y);
//     printf("the Boolean value of the eq (x+4) == y is %d\n",(x+4) == y);
//     printf("the Boolean value of the eq x!=(y-4) is %d\n",x!=(y-4));
//     printf("the Boolean value of the eq (y/2) >= x is %d\n",(y/2) >= x) ;
//     printf("the Boolean value of the eq -1<x is %d\n",-1<x) ;
//     printf("the Boolean value of the eq (x*3)<=20 is %d\n",(x*3)<=20); 
   
// }
//-----------------------------------
// ACTIVITY 2.11
// #include<stdio.h>
// void main()
// {
//     int x=3,y=7,z=8;
//     printf("the Boolean value of the eq x==2 || y==8 is %d\n",x==2 || y==8);
// printf("the Boolean value of the eq 7>=y && z<5 is %d\n",7>=y && z<5);
// printf("the Boolean value of the eq  y==7 && !(true) is %d\n", y==7 && !(1));
//    printf("the Boolean value of the eq z>= 5 || x<= -3 %d\n",z>= 5 || x<= -3)  ;
//    printf("the Boolean value of the eq x!=y || y<5 is %d\n",x!=y || y<5) ;
//    printf("the Boolean value of the eq !(z>x) is %d\n",!(z>x)); 
   
// }