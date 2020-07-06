/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
void main ()
{
 int x,y,z;
 
 printf("\n please enter the  value of x and y\n");
 scanf("%d%d",&x,&y);
 z=x;
 x=y;
 y=z;
 printf("\n after swapping x=%d,y=%d\n",x,y);
 getch();
}

