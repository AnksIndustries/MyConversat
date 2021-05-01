/*       this to illustrate how data file handling works...
	 All the (c) copyrights are reserved
	 This is conversat!   => by Ankit Aditya..            */


#include <iostream.h>
#include <dos.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <fstream.h>
#include <process.h>

void main()
{
clrscr();
//variables declared or defined
char myinput[50];
char line[50];
char line1[50];
char line2[50];
char ext[10]="exit";
sound(1000);
delay(100);
nosound();
sound(900);
delay(100);
nosound();
sound(800);
delay(100);
nosound();
sound(700);
delay(100);
nosound();
//starting of fstream..

start:
clrscr();
cout<<"		    This is CONVERSAT BETA-1\n		 All (c) copyrights is Reserved\n";
fstream f("speakerQUES.txt",ios::in|ios::out|ios::ate);
fstream f1("speakerANSW.txt",ios::in|ios::out|ios::ate);
f.seekg(0);
f1.seekg(0);
//getting input from user..
gets(myinput);

int j=strcmpi(ext,myinput);

if(j==0)
{
sound(400);
delay(30);
sound(380);
delay(40);
sound(350);
delay(50);
sound(300);
delay(300);
nosound();
exit(0);
}
if(l==0)
{
sound(600);
delay(50);
nosound();
delay(100);
sound(600);
delay(50);
nosound();
delay(100);
sound(600);
delay(50);
nosound();
ACENDING();
getch();
goto start;
}
//checking file(fi and fi1) if they are open..
if(!f)
{
cout<<"error f\n";
sound(800);
delay(300);
nosound();
}
if(!f1)
{
cout<<"error f1\n";
sound(800);
delay(300);
nosound();
}
//iteration for scanning the file for the question.
while(!f1.eof())
{
f.getline(line,50);
int i=strcmpi(line,myinput);
f1.getline(line1,50);
if(i==0)
{
sound(450);
delay(50);
sound(550);
delay(100);
sound(600);
delay(100);
cout<<line1<<"\n";
nosound();
delay(1500);
goto start;
}
}
//write
wrt:
//checking file(fi and fi1) are opening or not.
ofstream fi("speakerQUES.txt",ios::ate);
ofstream fi1("speakerANSW.txt",ios::ate);
if(!fi)
{
cout<<"NO FILE!\n";
sound(800);
delay(300);
nosound();
}
if(!fi1)
{
cout<<"speakerQ FILE ABSENT!\n";
sound(800);
delay(300);
nosound();
}
//taking input of unknown questions and answers..
fi<<myinput<<"\n";
sound(1200);
delay(200);
sound(800);
delay(100);
nosound();
cout<<"Answer= ";
gets(line2);
fi1<<line2<<"\n";
goto start;
}