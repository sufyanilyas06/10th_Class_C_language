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

## Activity 2.3
