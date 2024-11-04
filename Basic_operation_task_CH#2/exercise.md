<div align="center">
   <h1> Exercise Problems</h1>
</div>

## Exercise 1:
The criteria for calculation of wages in a company is givent below.

BasicSalary = PayRatePerHour  X WorkingHourseOfEmployee  
OvertimeSalary = OvertimePayRate X OvertimeHourseOFEmployee  
TotalSalary = BasicSalary + OvertimeSalary   

Write a program that should take working hourse and overtime hourse of employee as input. The program should calculate and display the total salary of employee.   
```c
#include<stdio.h>
int main(){
    int BasicSalary, PayRatePerHour,workingHouseOfEmployee, OvertimeSalary ;
    int OvertimePayRate , OvertimeHourseOfEmployee,TotalSalary;
    //let set pay rate & overtime rate as default
    PayRatePerHour=100;
    OvertimePayRate=120;
    printf("enter working hours & Overtime Hourse :");
    scanf("%d %d",&workingHouseOfEmployee,&OvertimeHourseOfEmployee);
    BasicSalary = PayRatePerHour*workingHouseOfEmployee ; 
    OvertimeSalary = OvertimePayRate * OvertimeHourseOfEmployee;
    TotalSalary=OvertimeSalary+BasicSalary;
    printf("the total salary of employee is : %d $. \n",TotalSalary);
    return 0;
}
```
### Output
enter working hours & Overtime Hourse :1200 30
the total salary of employee is : 123600 $.
## Exercise 2 
Write a program that takes Celsius temperature as input, converts the temperature into Fahrenheit and shows the output. Formula for conversion of temperature from Celsius to Fahrenheit is:   
     $$F=9/2*C+32$$
```c
#include<stdio.h>
int main()
{
	float temperature;
	printf("enter temperature in Celsius :");
	scanf("%f",&temperature);
	printf("temperature in Fahrenheit :%f",(9/5*temperature)+32);
	return 0;
}
```
### Output:
enter temperature in Celsius :32.24  
temperature in Fahrenheit :64.240005  
## Exercise 3
Write a program that displays the following output using single printf statement:   
\*     \*     \*     \*  
1    2    3    4  
```c
#include<stdio.h>
int main()
{
    printf("*\t*\t*\t*\n1\t2\t3\t4\n");
    return 0;
}
```
## Exercise 4
Write a program that displays the following output using single printf statement.  
I am a boy   
I live in Pakistan  
I am a proud Pakistani  
```c
#include<stdio.h>
int main()
{
    printf("I am a boy\nI live in Pakistan\nI am a proud Pakistani");
    return 0;
}
```
## Exercise 5  

A clothing brand offers 15% discount on each item. A lady buys 5 shirts from this brand. Write a program that calculates total price after discount and amount of discount availed by the lady. Original prices of the shirts are:  
Shirt1 = 423  
Shirt2 = 320  
Shirt3 = 270  
Shirt4 = 680  
Shirt5 = 520  
Note: Use 5 variables to store the prices of shirts.  
```C
#include<stdio.h>
int main()
{
    int Shirt1 = 423 ;  
    int Shirt2 = 320 ;  
    int Shirt3 = 270 ;  
    int Shirt4 = 680 ;  
    int Shirt5 = 520 ;
    int totalPrice, totalPriceAfterDiscount, DiscountPrice;
    totalPrice = Shirt1+Shirt2+Shirt3+Shirt4+Shirt5;
    DiscountPrice = totalPrice*(15*1.0/100);
    totalPriceAfterDiscount = totalPrice - DiscountPrice ;
    printf("Total Price : %d\n", totalPrice);
    printf("Total 15 percent discount : %d\n", DiscountPrice);
    printf("Amount after Discount : %d\n", totalPriceAfterDiscount);

}
```
### Output
Total Price : 2213
Total 15 percent  discount : 331
Amount after Discount : 1882
## Exercise 6
Write a program that swaps the values of two integer variables without help of any third variable.
```C
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter 1st number :");
    scanf("%d",&n1);
    printf("enter 2nd number :");
    scanf("%d",&n2);
    printf("numbers before swap are : %d & %d\n",n1,n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("numbers after swap are : %d & %d\n",n1,n2);
}
```
### Output
enter 1st number :5  
enter 2nd number :6  
numbers before swap are : 5 & 6  
numbers after swap are : 6 & 5  

## Exercise
Write a program that takes a 5 digit number as input, calculator and display the sum of first and last digit of number.
```C
#include<stdio.h>
int main()
{
   int n;
   printf("Enter 5 digit number:");
   scanf("%d",&n);
   int firstDigit, LastDigit;
   firstDigit = n/10000;
   LastDigit = n%10;
   int sum = LastDigit + firstDigit;
   print("Sum is : %d",sum);
}
```
### Output
Enter 5 digit number:98765  
Sum is : 14  
## Exercise 8

Write a program that takes monthly income and monthly expenses of the user like electricity bill, gas bill, food expense. Program should calculate the
following:
 - Total monthly expenses
 - Total yearly expenses
 - Monthly savings
 - Yearly saving
 - Average saving per month
 - Average expense per month
 ```C
 #include<stdio.h>
 int main()
 {
    int monthlyIncome,ElecticBill,gasBill,foodExpence;
    int totalMonthlyExpenses,TotalYearlyExpenses,monthlySavings;
    int yearlySaving,AverageSavingPerMonth,AverageExpensePerMonth;
    printf("Enter Your Monthly Income :");
    scanf("%d",&monthlyIncome);
    printf("enter your electric bill :");
    scanf("%d",&ElecticBill);
    printf("enter your gas bill :");
    scanf("%d",&gasBill);
    printf("enter your food expense :");
    scanf("%d",&foodExpence);
    totalMonthlyExpenses = ElecticBill+gasBill+foodExpence;
    TotalYearlyExpenses=totalMonthlyExpenses*12;
    monthlySavings=monthlyIncome-totalMonthlyExpenses;
    yearlySaving = monthlySavings*12;
    AverageSavingPerMonth = yearlySaving/12;
    AverageExpensePerMonth = TotalYearlyExpenses;
    printf("Total Monthly Expenses : %d\n",totalMonthlyExpenses);
    printf("Total yearly expenses :%d\n",TotalYearlyExpenses);
    printf("Monthly saving :%d\n",monthlySavings);
    printf("Yearly saving :%d\n",yearlySaving);
    printf("Average saving per month :%d\n",AverageSavingPerMonth); 
    printf("Average expense per month :%d\n",AverageExpensePerMonth);
 }