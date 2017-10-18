//PRROGRAM TO ADDS TWO NO'S & DISPLAY'S THIER RESULT IN 3RD VARAIBLE
#include<stdio.h> //this lib.(aka Header file) includes our printf(); & scanf(); functions,
#include<conio.h>  // this holds the blinking DOS screen for us
main()
{
    //clrscr;   //codeblocks copiler does not this but some others do need this to  clear previous screen
    int x;      // variable deceleration to stores first integer when user is prompted at line 4
    int y;      // variable to stores 2nd integer when user is prompted at line 6
    int sum;    // the sum of x+y is assigned or stored in variable sum
    printf("Enter 1st integer : "); //prompts the user to input ist integer as message
    scanf("%d",&x);                 // the ist integer gets scanned form user user
    printf("Enter 2nd integer : ");
    scanf("%d",&y);
    sum = x + y;                        // sum of x+y is assigned to variable sum
    printf("\t Addition = %d \n",sum);  // final result gets printed on screen

    getch();

}
// nice & simple program
//%d is used to scan integer value, %s for character value, %f for float(decimal) values etc.
// &x here means we give compiler e to variable x so its gets scanned as of integer type
//  /t is similar to tab on a keyboard.........any text starting with // this is a comment & is ignored by the
// compiler
