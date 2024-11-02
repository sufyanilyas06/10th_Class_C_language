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
}
```

### Exercise 2 
Write a program that takes Celsius temperature as input, converts the temperature into Fahrenheit and shows the output. Formula for conversion of temperature from Celsius to Fahrenheit is: 
     $$ F=9/2*C+32 $$