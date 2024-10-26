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


