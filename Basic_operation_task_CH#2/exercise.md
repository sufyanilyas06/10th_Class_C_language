<div align="center">
   <h1> Exercise Problems</h1>
</div>

### Exercise 1:
The criteria for calculation of wages in a company is givent below.

BasicSalary = PayRatePerHour  X WorkingHourseOfEmployee  
OvertimeSalary = OvertimePayRate X OvertimeHourseOFEmployee  
TotalSalary = BasicSalary + OvertimeSalary   

Write a program that should take working hourse and overtime hourse of employee as input. The program should calculate and display the total salary of employee.   
```c
#include<stdio.h>
int main(){
    int BasicSalary, PayRatePerHour,workingHouseOfEmployee, OvertimeSalary ,OvertimePayRate , OvertimeHourseOfEmployee,TotalSalary;
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

### Exercise 2 
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
## Output:
enter temperature in Celsius :32.24  
temperature in Fahrenheit :64.240005  
### Exercise 3
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
### Exercise 4
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
### Exercise 5  

A clothing brand offers 15% discount on each item. A lady buys 5 shirts from this brand. Write a program that calculates total price after discount and amount of discount availed by the lady. Original prices of the shirts are:  
Shirt1 = 423  
Shirt2 = 320  
Shirt3 = 270  
Shirt4 = 680  
Shirt5 = 520  
Note: Use 5 variables to store the prices of shirts.  