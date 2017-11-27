/*****************************************************************************
 *         Title    :  SVARAM-chatbot                                        *
 *         Authors  :  Mr.Surya M, Ms.Vamshita Yogish, Ms.Varsha             *
 *         File     :  svaram.c                                              *
 *         Language :  C programming                                         *
 *         Subject  :  PCD (Programming in C and Data Structures)            *
 *                                                                           *
 ***************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<sys/utsname.h>
#define LINELENGTH 80
#define DCONS 250

void delay(int);



                //Delay Function//

int main(void) {
    char line[LINELENGTH];
    char *word;
	int i;

    char b[]="sup?";
system("clear");
for(i=0;i<130;i++)
		printf("/");

      //Clears the screen or terminal//
/////////////////////////////////////////////Displays a splashscreen as SVARAM /////////////////////////////////////////
	printf("\n");
	printf("\n");
	printf("    ****** *     *     *     ******     *     *       *     ****** *    *     *     ******* *****   ****   *******  \n");
delay(750); //Delay of 750ms
	printf("    *      *     *    * *    *    *    * *    **     **     *      *    *    * *       *    *    * *    *     *     \n");
delay(750); //Delay of 750ms
	printf("    *      *     *   *   *   *    *   *   *   * *   * *     *      *    *   *   *      *    *    * *    *     *     \n");
delay(750); //Delay of 750ms
	printf("    ****** *     *  *     *  *****   *     *  *  * *  * *** *      ******  *     *     *    ****** *    *     *     \n");
delay(750); //Delay of 750ms
	printf("         *  *   *  ********* *    * ********* *   *   *     *      *    * *********    *    *    * *    *     *     \n");
delay(750); //Delay of 750ms
	printf("         *   * *   *       * *    * *       * *       *     *      *    * *       *    *    *    * *    *     *     \n");
delay(750); //Delay of 750ms
	printf("    ******    *    *       * *    * *       * *       *     ****** *    * *       *    *    *****   ****      *     \n");
	printf("                                                      \n");

	for(i=0;i<130;i++)
		printf("/");

	printf("\n");

	delay(500);


        printf(">>Hello, I am SVARAM.\n");


	while(1)
	{	printf(">>");
    		fgets(line, LINELENGTH, stdin);                //Takes or Reads string from user - actual interaction happens here//
		      if (strcmp_ign_ws(line,"hi",50) == 0) //Condition to if strings are same using strcmp_ign_ws() function//
                        printf("> %s\n","Hello");             //If user says bla bla bla bla///
   			else if (strcmp_ign_ws(line,"time",50) == 0)
			{
			 time_t t;
			 time(&t);
    			 printf("Today's date and time : %s",ctime(&t));//////time
                         printf("> %s\n","Kya ba?" );
			}
			else if (strcmp_ign_ws(line,"what is your name?",50) == 0)      ////////name
				printf("hi, My name is Svaram.\nwhat about yours?\n");
			else if (strcmp_ign_ws(line,"your name?",50) == 0)              ////////name
				printf("hi, My name is Svaram.\nwhat about yours?\n");
			else if (strcmp_ign_ws(line,"what do you like?",50) == 0)      ////////name
				printf("i love electrons in my chipset.\n");
			else if (strcmp_ign_ws(line,"clear",50) == 0)      /////////clearing scrreen
				                 system("clear");
/////////////////////////////////////////lucky number calculator//////////////////////////////////////////////////
			else if (strcmp_ign_ws(line,"lucky",50) == 0)
				{
				  int n, *data, index = 2, i = 0, j;
				int count;

        /* get the input value n from the user */
        printf("Enter the value for n:");
        scanf("%d", &n);

        if (n <= 0) {
                printf("Invalid input!!\n");
                return 0;
        }

        /* allocate memory to store n numbers */
        data = (int *)malloc(sizeof(int) * n);


        /* store 1 to n in data array */
        while(i < n) {
                data[i] = i + 1;
                i++;
        }

        if (n < 2) {
                printf("Lucky Number is 1!!\n");
                return 0;
        }

        /* find lucky numbers */
        while (index <= n) {
                j = count = 0;

                for (i = index - 1; i < n; i = i + index) {
                                data[i] = -1;
                }

                for (i = 0; i < n; i++) {
                        if (data[i] != -1) {
                                data[j++] = data[i];
                        }
                }

                n = j;
                index++;
        }

        /* print the lucky numbers */
        printf("Lucky Numbers:");
        for (i = 0; i < n; i++) {
                printf("%d  ", data[i]);
        }
        printf("\n");
			}
///////////////////////////////FLAMES CALCULATOR///////////////////////////////////////////////////////////////////
			else if (strcmp_ign_ws(line,"flames",50) == 0)
			{
			int x,y,z,i,j,r,s,g,h;
char name1[22],name2[22],a[11]={' ','f','l','a','m','e','s'},b[11];
printf("Enter the name 1:");
scanf("%s",name1);
printf("Enter the name2:");
scanf("%s",name2);
x=strlen(name1);
y=strlen(name2);
z=x+y;
for(i=0;i<strlen(name1);i++)
{
   for(j=0;j<strlen(name2);j++)
   {
       if(name1[i]==name2[j])
  {
    name1[i]=name2[j]=' ';
    z=z-2;   break;

  }
   }
}
for(r=6;r>1;r--)
 {

    s=z%r;

    if(s==0)
      {
       s=r;
       i=1;
      }
    else
      {
       i=s+1;
      }
    j=1;
    while(1)
    {
       if(i==s)
 {  break;}
       b[j]=a[i];
       if(i==r)
       { i=0;}
       i++;
       j++;
    }
for(i=1;i<=r-1;i++)
    {

      a[i]=b[i];

    }

 }
printf("\nRelationship status:");
switch(a[1])
{
 case 'f':
   printf("FRIENDSHIP");
 break;
 case 'l':
 printf("LOVE");
 break;
 case 'a':
 printf("AFFECTION");
 break;
 case 'm':
 printf("MARRIAGE");
 break;
 case 'e':
 printf("ENMITY");
 break;
 case 's':
 printf("SISTER");
 break;
}
			}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////TO PRINT VARIOUS SHAPES//////////////////////////////////////////////////
/////////////////////////////SQUARE//////////////////////////////////
		else if (strcmp_ign_ws(line,"square",50) == 0)
			{
			  int side, i, j;

    printf("Enter side of square\n");
    scanf("%d", &side);

    /* Row iterator for loop */
    for(i = 0; i < side; i++){
     /* Column iterator for loop */
        for(j = 0; j < side; j++){
           printf("*");
        }
        printf("\n");
    }
			}
///////////////////////////////////////////////////////////////////
/////////////RECTANGLE/////////////////////////////////////////////
		else if (strcmp_ign_ws(line,"rectangle",50) == 0)
			{
			int rows, cols , i, j;

    printf("Enter rows and columns of rectangle\n");
    scanf("%d %d", &rows, &cols);

    /* Row iterator for loop */
    for(i = 0; i < rows; i++){
     /* Column iterator for loop */
        for(j = 0; j < cols; j++){
           printf("*");
        }
        printf("\n");
    }

			}
////////////////////////////////////////////////////////
////////////PYRAMID/////////////////////////////////////
		else if (strcmp_ign_ws(line,"pyramid",50) == 0)
		{
			int i, space, rows, star=0;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);

    /* printing one row in every iteration */
    for(i = 1; i <= rows; i++) {
        /* Printing spaces */
        for(space = 1; space <= rows-i; space++) {
           printf(" ");
        }
        /* Printing stars */
        while(star != (2*i - 1)) {
            printf("*");
            star++;;
        }
        star=0;
        /* move to next row */
        printf("\n");
    }
		}
/////////////////////////////////////////////////
///////////////////////////////////////////LOVE CALCULATOR///////////////////////////////////////////////////////////////////////
	else if (strcmp_ign_ws(line,"love calculator",50) == 0)
		{

char yName[40], pName[40];
    int sum, sum1, i, choice;
    float perc=0;

    do
    {
        printf("Enter your name: ");

        fgets(yName,40,stdin);

        printf("Enter your partner's name: ");

        fgets(pName,40,stdin);

        sum=0;
        for(i=0;i<(strlen(yName));i++)
        {
            sum+=tolower(yName[i]);
        }

        sum1=0;
        for(i=0;i<(strlen(yName));i++)
        {
            sum1+=tolower(pName[i]);
        }

        perc=(sumOfDigits(sum)+sumOfDigits(sum1))+40;
        if(perc>100) perc=100;

        printf("Your love percentage is: %.02f\n\n",perc);

        printf("Want to calculate with some one else (0 to exit, 1 to continue) ???: ");
        scanf("%d",&choice);

    }while(choice!=0);



		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////roll a dice usinf rand();/////////////////////////////////////////////////////////////////
			else if (strcmp_ign_ws(line,"roll a dice",50) == 0)
				{
				srand(time(NULL));   // should only be called once
				int r = rand()%10;
				printf("random number is %d",r);
				}
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////CALCULATOR//////////////////////////////////////////////////////////\///////////
                       else if (strcmp_ign_ws(line,"calculator",50) == 0)
			{
			char operator;
    double firstNumber,secondNumber;

    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber + secondNumber);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber - secondNumber);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber * secondNumber);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber / firstNumber);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }

			}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////??????SYSTEM INFORMATION///////////////////////////////////////////////////////////////////////////////

		else if (strcmp_ign_ws(line,"system information",50) == 0)
			{
struct utsname uname_pointer;

 uname(&uname_pointer);

 printf("System name - %s \n", uname_pointer.sysname);
 printf("Nodename    - %s \n", uname_pointer.nodename);
 printf("Release     - %s \n", uname_pointer.release);
 printf("Version     - %s \n", uname_pointer.version);
 printf("Machine     - %s \n", uname_pointer.machine);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////CALANDER///////////////////////////////////////////////////////////////////////////////

else if (strcmp_ign_ws(line,"calendar",50) == 0)
{


 int date, month, year;

   printf("\nEnter the year ");
   scanf("%d", &year);

   printf("\nEnter the month ");
   scanf("%d", &month);

   printf("\nEnter the date ");
   scanf("%d", &date);

   day_of_week(date, month, year);

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////TO OPEN GOOGLE?/////////////////////////////////////////////

else if (strcmp_ign_ws(line,"google",50) == 0)
{

system("xdg-open http://www.google.com");
}
/////////////////////////////////////////////////////////////////////////////////////////
////////////////////////TO OPEN facebook?/////////////////////////////////////////////

else if (strcmp_ign_ws(line,"facebook",50) == 0)
{

system("xdg-open http://www.facebook.com");
}
/////////////////////////////////////////////////////////////////////////////////////////

//////////////some normal questions//////////////////////////////////////////////
	else if (strcmp_ign_ws(line,"how are you?",50) == 0)      ////////name
				printf("My cores are running cool.\n");
	else if (strcmp_ign_ws(line,"what are you doing?",50) == 0)      ////////name
				printf("Running a while loop :).\n");
	else if (strcmp_ign_ws(line,"can u sing?",50) == 0)      ////////name
				printf("may be.\n");
	else if (strcmp_ign_ws(line,"i love you	",50) == 0)      ////////name
				printf("love?, you try love calculator though.\n");
	else if (strcmp_ign_ws(line,"what can you do?",50) == 0)      ////////name
				printf("blablablabla:P check my documentation.\n");
	else if (strcmp_ign_ws(line,"when were you born?",50) == 0)      ////////name
				printf("when i was executed, i was brought to life.\n");
	else if (strcmp_ign_ws(line,"good morning",50) == 0)      ////////name
				printf("A very good morning to you.\n");



/////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			else
                        printf("> %s\n", "Awesome" );    //If none of the user input matches the data says awesome//


         }
}


/////////////////String compare function ignoring whitespace///////////////////////

int strcmp_ign_ws(const char *s1, const char *s2) {
  const char *p1 = s1, *p2 = s2;

  while (1) {
    while (*p1 != '\0' && isspace((unsigned char)*p1)) p1++;
    while (*p2 != '\0' && isspace((unsigned char)*p2)) p2++;
    if (*p1 == '\0' || *p2 == '\0') {
      return (*p2 == '\0') - (*p1 == '\0');
    }
    if (*p1 != *p2) {
      return (unsigned char)*p2 - (unsigned char)*p1;
    }
    p1++;
    p2++;
  }
}
////////////////////////////////// Delay Function/////////////////////////////////////
void delay(int x)
{   int i=0,j=0;
    for(i=0;i<x;i++){for(j=0;j<200000;j++){}}
}
////////////////love cal function


//function will return sum of all digits
int sumOfDigits(int num)
{
    int sum=0;
    while(num>0)
    {
        sum+=(num%10);
        num/=10;
    }
    return sum;
}
////////////////////////////////////////////////


////////////////////for calendar



int fm(int date, int month, int year) {
   int fmonth, leap;

   //leap function 1 for leap & 0 for non-leap
   if ((year % 100 == 0) && (year % 400 != 0))
      leap = 0;
   else if (year % 4 == 0)
      leap = 1;
   else
      leap = 0;

   fmonth = 3 + (2 - leap) * ((month + 2) / (2 * month))
         + (5 * month + month / 9) / 2;

   //bring it in range of 0 to 6
   fmonth = fmonth % 7;

   return fmonth;
}

//----------------------------------------------
int day_of_week(int date, int month, int year) {

   int dayOfWeek;
   int YY = year % 100;
   int century = year / 100;

   printf("\nDate: %d/%d/%d \n", date, month, year);

   dayOfWeek = 1.25 * YY + fm(date, month, year) + date - 2 * (century % 4);

   //remainder on division by 7
   dayOfWeek = dayOfWeek % 7;

   switch (dayOfWeek) {
      case 0:
         printf("weekday = Saturday\n");
         break;
      case 1:
         printf("weekday = Sunday\n");
         break;
      case 2:
         printf("weekday = Monday\n");
         break;
      case 3:
         printf("weekday = Tuesday\n");
         break;
      case 4:
         printf("weekday = Wednesday\n");
         break;
      case 5:
         printf("weekday = Thursday\n");
         break;
      case 6:
         printf("weekday = Friday\n");
         break;
      default:
         printf("Incorrect data\n");
   }

}
//------------------------------------------
