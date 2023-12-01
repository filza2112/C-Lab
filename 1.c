#include<stdio.h>
void main(){
    //Print Hello Students
    printf("Hello Students"); 

    //print Hello in first line and students in second line
    printf("\nHello\nStudents");

    //print MysirG in quotes
    printf("\n\"MySirG\"");

    //Find area of a circle
    float r;
    printf("\nEnter radius of the circle: ");
    scanf("%f",&r);
    printf("Area of Circle is %f having the radius %f",3.14*r*r,r);

    // Find length of string
    char test[100];
    printf("\nEnter a string to find it's lenght: ");
    scanf("%s", test);
    int length = printf("%s", test);
    printf("\nLength of the string = %d\n", length);

    //write name of the user in double quotes
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("\"Hello,%s\"\n", name);

    // print "%d"
    printf("%%d\n");

    //print "\n"
    printf("\\n\n");

    // print "\\"
          printf("\\\\\n");

    //take date as an input in below given format and convert the given date format
    
    int day, month, year;
    char date[12];
    printf("\nEnter date in format DD/MM/YYYY: ");
    scanf("%s",&date);
    sscanf(date,"%d/%d/%d",&day,&month,&year);
    printf("\"Day-%d, Month-%d, Year-%d\"\n", day, month, year);

    //take time as an input in below given format and convert the given time format
    int hour, minute;
    printf("\nEnter the time in the format 'HHMM': ");
    scanf("%2d%2d", &hour, &minute);
    printf("%d Hour and %d Minute\n\n", hour, minute);

    //output find
    int x = printf("ineuron");
    printf("%d",x);
    //it will print the string "ineuron" and it's size
}

