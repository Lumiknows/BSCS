#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define foreach(item, array) \
    for(int keep = 1, \
            count = 0,\
            size = sizeof (array) / sizeof *(array); \
        keep && count != size; \
        keep = !keep, count++) \
      for(item = (array) + count; keep; keep = !keep)
typedef char *string;    
string mMenu[]       = {"P-Prelim"      ,"M-Midterm"     ,"S-Semi-Finals","F-Finals"     ,"X-Exit"};  
string subMenu[4][7] = {{"1- Area of Circle"   ,""    ,""   ,"", "", ""   ,"X-Exit"},
                        {"1- Fix Problems that include stdbool.h"   ,"2- Input age to determine the status"    ,""   ,"" ,"" ,"" ,"X-Exit"},
                        {"1- Enter number of subjects to display average & letter grade"    ,"2- Determine if Number is Prime or Composite"     ,"3- Display the prime numbers before the number"    ,"4- Determine if the number is prime or composite(Nested Version)"    ,"5- Calculate the average"    ,"6- Calculate the average and letter grade"    ,"X-Exit"},
                        {"1- Calculate the Sum/Diff/Quo/Modulo/Diff","2- Calculate the average using array" ,"3- Calculate the average using array","4- Display the Ascending Order/Largest/Smallest Number & Average" , "" ,"", "X-Exit"}};
//Prelim                        
void computeAreaofCircle()
{
   float pi=3.1416;
   float radius;
   char yn;
   
   printf("\nRadius? ");
   scanf("%f",&radius);
   printf("\nThe area of the circle is %.2f ",pi*radius*radius);



}

//Midterm
  #define Pi 3.1415936536
  #define NameOfSchool "University of Cebu - Main"
  #define t 5
  #define r 6
  #define ans 1+2
void fixProblem()
{
    bool x = true;
    bool y = false;
    const char letter = 'a';
    long int num = 3000000000;
    char h='H',e='e',l='l',o='o';
    long int z = 35000000;
    
    printf("\nWelcome to %s\n",NameOfSchool);
    printf("%d\n",ans);
    printf("%d\n",t*r);
    printf("The Boolean values of x and y are: %d %d respectively.\n", y, x);
    
    printf("Literal constant: %0.02f\n",3.1415936536);
    printf("Literal constant: %0.00f\n",3.1415936536);
    printf("The constant declared is a small letter %c\n",letter);
    printf("The value of the variable num is %ld\n",num);
    printf("This number is very very long => %ld\n",1234567801234567890);
    printf("%c%c%c%c%c\n",h,e,l,l,o);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",103,111,111,100,32,108,117,99,107,33,32,60,51);

}
void ageDisplay()
{
    
    int age;
    
    printf("\nInput your age: ");
    scanf("%d", &age);
    
    if (age >= 0 && age <= 1)
        printf("Infant");
    else if (age >= 2 && age <= 4)
        printf("Toddler");
    else if (age >= 5 && age <= 12) 
        printf("Child");
    else if (age >= 13 && age <= 19)
        printf("Teen");
    else if (age >= 20 && age <= 39)
        printf("Adult");
    else if (age >= 40 && age <= 59)
        printf("Middle Age Adult");
    else if (age >= 60)
        printf("Senior Adult");
    else
        printf("Invalid Number");
}

//Semi-Finals

void gradesCalculator() //Act 1 - SemiFinals
{
    int numGrades, counter = 1, average;
    double grades, sum = 0, temp_average, a = 0;
    printf("\nThis program calculates the average of as many grades you wish to enter.\n");
    while (a != 1){ //infinite loop
        printf("First, enter the number of grades to process: ");
        scanf("%d", &numGrades);
        if (numGrades < 2)
        {
            printf("Please enter atleast 2 grades!\n");
            printf("\n");
            continue;
        }
        else
        {
            break;
        }
    }
    
    printf("Now enter the %d grades to be averaged.\n", numGrades);
    while (counter <= numGrades){
        printf("Enter grade #%d: ", counter);
        scanf("%lf", &grades);
        if (grades > 5.0 || grades < 1.0){
            printf("*** Invalid entry. Grade must be from 1.0 to 5.0 ***\n");
            continue;
        }
        else{
            sum = sum + grades;
            ++counter;
        }
    }

    temp_average = sum / numGrades;
    printf("The average of the %d grades entered is %.2lf\n", numGrades, temp_average);
    average = temp_average * 10;
    switch (average){
        case 10 ... 15:
        printf("You have a letter grade of A");
        break;
        case 16 ... 20:
        printf("You have a letter grade of B");
        break;
        case 21 ... 25:
        printf("You have a letter grade of C");
        break;
        case 26 ... 30:
        printf("You have a letter grade of D");
        break;
        case 31 ... 50:
        printf("You have a letter grade of F");
        break;
    }
}
void primeNumber() //Act2 - SemiFinals
{
    int num, count = 0;
    {
        count = 0;
        printf("\nInput a number: ");
        scanf("%d", &num);
        for (int i = 1; i<=num; ++i)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        
        if (count == 1)
        {
            printf("The number 1 is neither prime nor composite.\n");
        }
        else if (count == 2)
        {
            printf("The number %d is a prime number\n", num);
        }
        else
        {
            printf("The number %d is NOT a prime number\n", num);
        }

    }
}
void primeComp() // Act 3 - SemiFinals
{  
	int n,b,i,m; 
	{
	    printf("\nEnter a number: "); 
	    scanf("%d",&m);
    	if(m==1)
    	printf("The number one is neither prime nor composite");
    	
    	for(b=2;b<=m;b++) 
    	{ 
         	i=2; 
     	while(b%i!=0) 
      	{ 
      	    i++; 
      	} 
     	if(i==b) 
      	{ 
    		printf("%3d",b); 
    		} 
        } 
	}
} 
void nestedLoop() //Act2 - SemiFinals
{
    int num, count = 0;
    char ch;
    do
    {
        count = 0;
        printf("\nInput a number: ");
        scanf("%d", &num);
        for (int i = 1; i<=num; ++i)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        
        if (count == 1)
        {
            printf("The number 1 is neither prime nor composite.\n");
        }
        else if (count == 2)
        {
            printf("The number %d is a prime number\n", num);
        }
        else
        {
            printf("The number %d is NOT a prime number\n", num);
        }
        printf("Do you want to try again? (Y/N): ");
        scanf(" %c", &ch);

    }while(toupper(ch) != 'N');
}
void actLab() // Lab Activity - SemiFinals
{
   int counter=0;
   int noOfSubjects;
   float grade=0, sum=0, ave=0;
   
   printf("\nNumber of Subjects: ");
   scanf("%d", &noOfSubjects);
   
   while(counter<noOfSubjects)
   {
       counter++;
       printf("Enter grade %d => ", counter);
       scanf("%f", &grade);
       sum = sum + grade;
   }
   ave = sum/noOfSubjects;
   printf("The average is %.1f", ave);
}
void switchCase () // SwitchCase Assignment - SemiFinals
{

  int grade;
  double g1, g2, g3, g4, g5, ave, sum;

  printf ("\nInput your 1st grade: ");
  scanf ("%lf", &g1);
  printf ("\nInput your 2nd grade: ");
  scanf ("%lf", &g2);
  printf ("\nInput your 3rd grade: ");
  scanf ("%lf", &g3);
  printf ("\nInput your 4th grade: ");
  scanf ("%lf", &g4);
  printf ("\nInput your 5th grade: ");
  scanf ("%lf", &g5);

  sum = g1 + g2 + g3 + g4 + g5;
  ave = sum / 5;
  grade = ave * 100;

  printf ("\nAverage: %.2lf", ave);

  switch (grade)
    {
    case 100 ... 159:
      printf ("\nGrade: A");
      break;
    case 160 ... 209:
      printf ("\nGrade: B");
      break;
    case 210 ... 259:
      printf ("\nGrade: C");
      break;
    case 269 ... 309:
      printf ("\nGrade: D");
      break;
    case 310 ... 500:
      printf ("\nGrade: F");
      break;
    default:
      printf ("\nThe average grade is invalid");
    }
}

//Finals

int sum(int x, int y);
int diff(int x, int y);
int prod(int x, int y);
float quo(float x, float y);
int rem(int x, int y);

void calculator() //Finals Act 1
{
  
    char try;
    
    do{
    int num1,num2;
        
    printf("\nEnter two numbers:");
    scanf("%d %d", &num1,&num2);
     
    sum(num1,num2);
    diff(num1,num2);
    prod(num1,num2);
    quo(num1,num2);
    rem(num1,num2);
     
    printf("\nThe sum of %d and %d is %d", num1,num2,sum(num1,num2));
    printf("\nThe difference of %d and %d is %d", num1,num2,diff(num1,num2));
    printf("\nThe product of %d and %d is %d", num1,num2,prod(num1,num2));
    printf("\nThe quotient of %d and %d is %0.2f", num1,num2,quo(num1,num2));
    printf("\nThe remainder of %d modulo %d is %d", num1,num2,rem(num1,num2));
    
    printf("\nTry again? [Y] or [N]");
    scanf(" %c", &try);

 
    }while(toupper(try) != 'N');
    
}
    
     int sum(int x,int y)
     {
        int sum = x + y;
        return sum;
     }
     
     int diff(int x,int y)
     {
        int diff = x - y;
        return diff;
     }
     
      int prod(int x,int y)
     {
        int prod = 0;
        for(int c = 1; c <= y; ++c)
        {
            prod += x;
        }
        return prod;
     }
     
      float quo(float x,float y)
     {
        float quo = x / y;
        return quo;
     }
     
      int rem(int x,int y)
     {
        int rem = x % y;
        return rem;
     }
void oneswap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int firstSwap() // Activity
{
    int x,y;
    
    
    printf("\nThis is a classic routine to swap values of 2 variables.");
    printf("\nEnter two numbers: ");
    scanf("%d %d", &x,&y);
    printf("\n");
    printf("\nbefore swap -> x:%d y:%d", x,y);
    oneswap(&x,&y);
    printf("\nafter swap -> x:%d y:%d", x,y);  

    return 0; 
}
void arrayGrade() // Activity
{

  int grades[5], i, sum = 0;
  double average;
    printf("\nEnter 5 grades\n");

for(int i = 0; i < 5; ++i) 
  {
    printf("\nEnter grade %d: ", i+1);
    scanf("%d", &grades[i]);
    
    sum += grades[i];
  }
   printf("\n");
for(int i = 0; i < 5; ++i) 
  {
    printf("%d ",grades[i]);
  }
    average = (double) sum / 5;
    printf("= %.2lf", average);
}
void twoswap(int *i, int *a) // Activity
{
    int temp;
    temp = *i;
    *i = *a;
    *a = temp;
}
int ascending() //Activity
{

  int grades[5], i, b, sum = 0;
  double average;
    printf("\nEnter 5 grades\n");

for(int i = 0; i < 5; ++i) 
  {
    printf("Enter grade %d: ", i+1);
    scanf("%d", &grades[i]);
    
    sum += grades[i];
  }
    printf("\n");
    printf("Entered Grades\n");
for(int i = 0; i < 5; ++i) 
  {
    printf(" %d ",grades[i]);
  }
    printf("\n\nGrades ascending in asorted order\n ");                     
	   for (int i = 0; i < 5; i++)
	    {
            for (int a = i + 1; a < 5; a++)
            {
                if(grades[i] > grades[a])
                twoswap(&grades[a],&grades[i]);
            }
	    }
	   for(int i = 0; i < 5; ++i) 
  {
    printf(" %d ",grades[i]);
  }
  {
    printf("\n");
    printf("\nSmallest grade: %d", grades[0]);
    printf("\nLargest grade: %d", grades[4]);
    
    average = (double) sum / 5;
    printf("\nAverage = %.2lf", average);
  }
  return 0;
}
void callFunctions(int submenu, char choice)
{
   switch (submenu)
   {
    case 0: 
            switch (choice) //Prelim
               {
                case '1':   
                printf("\nCompute the Area of a Circle");
                computeAreaofCircle(); 
                break;
               }
    break;
    case 1: 
            switch (choice) //Midterm
               {
                case '1':   
                printf("\nFix Problems that include stdbool.h");
                fixProblem(); 
                break;
                case '2':   
                printf("\nInput age to determine the status");
                ageDisplay(); 
                break;
               }
    break;
    case 2: 
            switch (choice) //SemiFinals
               {
                case '1':   
                printf("\nEnter number of subjects to display average & letter grade");
                gradesCalculator();
                break;
                case '2':   
                printf("\nDetermine if the number is prime or composite");
                primeNumber();
                break;
                case '3':   
                printf("\nDisplay the prime numbers before the number");
                primeComp();
                break;
                case '4':   
                printf("\nDetermine if the number is prime or composite(Nested Version)");
                nestedLoop();
                break;
                case '5':   
                printf("\nEnter Grades to calculate the average");
                actLab();
                break;
                case '6':   
                printf("\nCalculate the average and letter grade");
                actLab();
               }
    break;         
    case 3: switch (choice) //Finals
               {
                case '1':   
                printf("\nCalculate the Sum/Diff/Quo/Modulo/Diff");
                calculator(); 
                break;
                case '2':
                printf("\nSwap values of 2 variables");
                firstSwap();
                break;
                case '3':
                printf("\nCalculate the average using array");
                arrayGrade();
                break;
                case '4':
                printf("\nDisplay the Ascending Order/Largest/Smallest Number & Average");
                ascending();
                break;
               }
    break;
   }

   

   
}   
char DisplaySubMenu(int submenu)
{
    char choice;
  
    do
    {
       do
       {
          printf("\n=========================\nS U B  -  M E N U\n=========================");
          switch (submenu)
          {
            case 0: printf("\nPRELIM"); break;
            case 1: printf("\nMIDTERM"); break;
            case 2: printf("\nSEMI-FINALS"); break;
            case 3: printf("\nFINALS"); break;
          }
          foreach(string *m,subMenu[submenu])
            {
               printf("\n%s",*m);
            }
          printf("\n Choice: ");           
          scanf(" %c",&choice);
       }
       while ( toupper(choice)!='1' && toupper(choice)!='2' && toupper(choice)!='3' && 
               toupper(choice)!='4' && toupper(choice)!='5' && toupper(choice)!='6' && toupper(choice)!='X');
       if (toupper(choice)!='X')
         callFunctions(submenu, choice);
    }
    while (toupper(choice)!='X');
   return 'c';
}

char DisplayMainMenu()
{
    char choice;
    do
    {
       printf("\n=========================\nM A I N   M E N U\n=========================");
       foreach(string *m,mMenu)
         {
            printf("\n%s",*m);
         }
       printf("\n Choice: ");           
       scanf(" %c",&choice);
    }
    while ( toupper(choice)!='P' && toupper(choice)!='M' && 
            toupper(choice)!='S' && toupper(choice)!='F' && toupper(choice)!='X');
    switch (toupper(choice))
    {
      case 'P': DisplaySubMenu(0);  break;
      case 'M': DisplaySubMenu(1);  break;
      case 'S': DisplaySubMenu(2);  break;
      case 'F': DisplaySubMenu(3);  break;
    }
    return toupper(choice);
}

int main()
{
    do
    {
    }
    while (DisplayMainMenu()!='X');
    printf("\nThank you. Goodbye . . . .");
    return 0;
}
