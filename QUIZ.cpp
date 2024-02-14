#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
int score=0,lifeline=2,cache,number,j,word;
char name[50],a,z,u=1,v=1,b,p,a1[20],a2[20],a3[20],a4[20],a5[20];
char *question[500];
textbackground(CYAN);
textcolor(RED);
clrscr();
game:
cout<<"\n\n\n\t\t\t\t  << QUIZ GAME >>\n";
cout<<"\n\t\t\t***********************************";
cout<<"\n\n\t\t\t\t      WELCOME\n ";
cout<<"\n\t\t\t\t        to\n ";
cout<<"\n\t\t\t\t       QUIZ  ";
cout<<"\n\t\t\t";
cout<<"\n\t\t\t***********************************";
cout<<"\n\n\t\t\t     press S to start the game";
cout<<"\n\t\t\t    press A to add the question";
cout<<"\n\t\t\t     press Q to quit the game";
cin>>z;
if(z=='q')
{
goto quit;
}
else if(z=='s')
{
goto start;
}
else if(z=='a')
{
goto addquestion;
}
else
{
cout<<"enter correct option";
clrscr();
goto game;
}
start:
clrscr();
now:
cout<<"\n\n\t\t\tcache:- 5892";
cout<<"\n\n\t\t\tResister your name:-";
cin>>name;
cout<<"\n\n\t\t\tEnter above cache:-";
cin>>cache;
if(cache!=5892)
{
cout<<"\n\t\t\tEnter correct cache";
clrscr();
goto now;
}
else
{
clrscr();
cout<<"\n\t     ***************** Welcome to quiz *****************";
cout<<"\n\n\t    Here are some tips you might want know before playing:";
cout<<"\n \t*************************************************************";
cout<<"\n\n\n1) Total of 15 questions. Each right answer will be awarded with 4 marks.";
cout<<"\n\n2) By this way you can score upto 60 marks.";
cout<<"\n\n3) You will be given 4 options and you have to press A, B ,C or D for the right option.";
cout<<"\n\n4) You have two lifelines one is Flip the question another is Expert advice";
cout<<"\n\n4) No negative marking for wrong answers!";
cout<<"\n\n\n\t     ****************** ALL THE BEST *****************";
getch();
clrscr();
same14:
cout<<"\n Question 1.";
cout<<"\n\n A collecion of 8 bits are called?";
cout<<"\n a. bit\n b. word\n c. byte\n d. record";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='c')
{
cout<<" correct";
score=score+4;
getch();
}
else if(a=='x')
{
if(lifeline>0)
{
life14:
cout<<"\n Enter u for flip the question\n ";
cout<<"Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n Class declaration must end with a _______.";
cout<<"\n A.Colon \n B.Semicolon\n C.Full stop\n D.Comma\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='b')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same14;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think C. Byte is right\n";
lifeline--;
v--;
goto same14;
}
else
{
cout<<" Expert advice lifeline not available";
goto same14;
}
}
else
{
cout<<" enter only u or y";
goto life14;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same14;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
}
clrscr();
same13:
cout<<"\n Question 2.";
cout<<"\n\n Which of the following is a Palindrome number?";
cout<<"\n a. 42042\n b. 101010\n c. 23232\n d. 01234";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='c')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life13:
cout<<"\n Enter u for flip the question\n ";
cout<<"Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n Which of the following keyword supports dynamic method resolution?";
cout<<"\n A.Abstract \n B.Virtual\n C.Dynamic\n D.Type-ID\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='a')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same13;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think C. 23232 is right\n";
lifeline--;
v--;
goto same13;
}
else
{
cout<<" Expert advice lifeline not available";
goto same13;
}
}
else
{
cout<<" enter only u or y";
goto life13;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same13;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same:
cout<<"\n Question 3.";
cout<<"\n\n Which of the following is most oriented toward scientific programming ?";
cout<<"\n A.Cobol\n B.Fortran\n C.c++\n D.Basic";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='b')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life:
cout<<"\n Enter u for flip the question\n ";
cout<<"Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n What's wrong in:-\n\n for(int k=2,k<=12,k++)";
cout<<"\n\n A.The increment should always be++k \n B.Always i using a for loop\n C.there should be seicolon at the end of statement\n D.The commas should be semicolon\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='d')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think B. fortran is right\n";
lifeline--;
v--;
goto same;
}
else
{
cout<<" Expert advice lifeline not available";
goto same;
}
}
else
{
cout<<" enter only u or y";
goto life;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same1:
cout<<"\n Question 4.";
cout<<"\n\n What kind of file extension .mpg?";
cout<<"\n A.Movie file \n B.Text file\n C.Image file\n D.Audio file";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='a')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life1:
cout<<"\n Enter u for flip the question\n ";
cout<<"Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n What is the fullform of STL?";
cout<<"\n A.Simple Template Library \n B.Standard Template Library\n C.Static Type Library\n D.Single Type Library\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='b')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same1;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think A. movie file is right\n";
lifeline--;
v--;
goto same1;
}
else
{
cout<<" Expert advice lifeline not available";
goto same1;
}
}
else
{
cout<<" enter only u or y";
goto life1;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same1;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same2:
cout<<"\n Question 5.";
cout<<"\n\n A DVD is an example of a/an.. ";
cout<<"\n A.Magnetic disk\n B.Hard disk\n C.Output device\n D.Optical disk";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='d')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life2:
cout<<"\n Enter u for flip the question\n ";
cout<<"Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n Which is not a valid reserved keyword in c++?";
cout<<"\n A.Explict \n B.Public\n C.Implict\n D.Private\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='c')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same2;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think D. optical device is right\n";
lifeline--;
v--;
goto same2;
}
else
{
cout<<" Expert advice lifeline not available";
goto same2;
}
}
else
{
cout<<" enter only u or y";
goto life2;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same2;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same3:
cout<<"\n Question 6.";
cout<<"\n\n Who is he founder of facebook?";
cout<<"\n A.Mark zuckerburg\n B.Tesla\n C.Steve jobs\n D.Bill gates";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='a')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life3:
cout<<"\n Enter u for flip the question\n ";
cout<<"Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n Which of the following is not supported by c++?";
cout<<"\n A.Exception handling \n B.Reflection\n C.Operator overloading\n D.Namespace\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='b')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same3;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think A. Mark zuckerburg is right\n";
lifeline--;
v--;
goto same3;
}
else
{
cout<<" Expert advice lifeline not available";
goto same3;
}
}
else
{
cout<<" enter only u or y";
goto life3;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same3;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same4:
cout<<"\n Question 7.";
cout<<"\n\n Which of the following is a web browser?";
cout<<"\n A.Dreamweaver\n B.Netscape navigator\n C.Maya\n D.Flash";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='b')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life4:
cout<<"\n Enter u for flip the question\n ";
cout<<"Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n The statement i++ means";
cout<<"\n A.i=i+1 \n B.i=i+i\n C.i=i-i\n D.i=i-1\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='a')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same4;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think B. Netscape navigator is right\n";
lifeline--;
v--;
goto same4;
}
else
{
cout<<" Expert advice lifeline not available";
goto same4;
}
}
else
{
cout<<" enter only u or y";
goto life4;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same4;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same5:
cout<<"\n Question 8.";
cout<<"\n\n What kind of file extension .bak?";
cout<<"\n A.Backup file \n B.Text file\n C.Image file\n D.Audio file";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='a')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life5:
cout<<"\n Enter u for flip the question\n ";
cout<<"Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n A hexadecimal is represented by";
cout<<"\n A.x \n B.o\n C.d\n D.h\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='d')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same5;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think A. Backup file is right\n";
lifeline--;
v--;
goto same5;
}
else
{
cout<<" Expert advice lifeline not available";
goto same5;
}
}
else
{
cout<<" enter only u or y";
goto life5;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same5;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same6:
cout<<"\n Question 9.";
cout<<"\n\n which of he following is a read only memory storage device ";
cout<<"\n A.Flash drive\n B.Hard disk\n C.Floppy disk\n D.CDROM";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='d')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life6:
cout<<"\n Enter u for flip the question\n";
cout<<" Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n In c++, '3' represents";
cout<<"\n A.A digit \n B.A number\n C.A integer\n D.A word\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='c')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same6;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think D. CDROM is right\n";
lifeline--;
v--;
goto same6;
}
else
{
cout<<" Expert advice lifeline not available";
goto same6;
}
}
else
{
cout<<" enter only u or y";
goto life6;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same6;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same7:
cout<<"\n Question 10.";
cout<<"\n\n A 32 bit word computer can access ____ bytes at a time ";
cout<<"\n A.32\n B.16\n C.8\n D.4";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='c')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life7:
cout<<"\n Enter u for flip the question\n";
cout<<" Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n What is the output of:=\n {\n cout<<hello world;\n return 0;\n }\n";
cout<<"\n A.Complile time error\n B.Runtime error\n C.hello world\n D.0\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='a')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same7;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think C. 8 is right\n";
lifeline--;
v--;
goto same7;
}
else
{
cout<<" Expert advice lifeline not available";
goto same7;
}
}
else
{
cout<<" enter only u or y";
goto life7;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same7;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same8:
cout<<"\n Question 11.";
cout<<"\n\n Who is the founder of pixar animation?";
cout<<"\n A.Mark zuckerburg\n B.Tesla\n C.Steve jobs\n D.Bill gates";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='c')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life8:
cout<<"\n Enter u for flip the question\n ";
cout<<"Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n A function contained with in a class is called_____";
cout<<"\n A.Virtual function \n B.Non-member function\n C.Method\n D.Member function\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='d')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same8;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think C. Steve jobs is right\n";
lifeline--;
v--;
goto same8;
}
else
{
cout<<" Expert advice lifeline not available";
goto same8;
}
}
else
{
cout<<" enter only u or y";
goto life8;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same8;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same9:
cout<<"\n Question 12.";
cout<<"\n\n _______ is a process of creating new class from the existing class?";
cout<<"\n A.Inheritance\n B.Polymorphism\n C.Encapsulation\n D.Abstraction";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='a')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life9:
cout<<"\n Enter u for flip the question\n";
cout<<" Enter v for expert advice\n";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n What is the output of:=\n {\n cout<<hello world;\n return 0;\n }\n";
cout<<"\n A.Complile time error\nB.Runtime error\nC.hello world\nD.0\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='a')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same9;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<"Expert says, i think A. Inheritance is right\n";
lifeline--;
v--;
goto same9;
}
else
{
cout<<" Expert advice lifeline not available";
goto same9;
}
}
else
{
cout<<" enter only u or y";
goto life9;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same9;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same10:
cout<<"\n Question 13.";
cout<<"\n\n C++ was originally develpoed by?";
cout<<"\n A.Tim bresenham\n B.Dennis ritche\n C.Ben thomson\n D.Bjarne stroustrup";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='d')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life10:
cout<<"\n Enter u for flip the question\n";
cout<<" Enter v for expert advice\n";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n The statement i++ means";
cout<<"\n A.i=i+1 \n B.i=i+i\n C.i=i-i\n D.i=i-1\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='a')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same10;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think D Bjarne stroustrup is right\n";
lifeline--;
v--;
goto same10;
}
else
{
cout<<" Expert advice lifeline not available";
goto same10;
}
}
else
{
cout<<" enter only u or y";
goto life10;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same10;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same11:
cout<<"\n Question 14.";
cout<<"\n\n A destructor takes _________ argument?";
cout<<"\n A.two\n B.default\n C.zero\n D.none of these";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='c')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life11:
cout<<"\n Enter u for flip the question\n ";
cout<<"Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n Which of the following keyword supports dynamic method resolution?";
cout<<"\n A.Abstract \n B.Virtual\n C.Dynamic\n D.Type-ID\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='a')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same11;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think C. zero is right\n";
lifeline--;
v--;
goto same11;
}
else
{
cout<<" Expert advice lifeline not available";
goto same11;
}
}
else
{
cout<<" enter only u or y";
goto life11;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same11;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
same12:
cout<<"\n Question 15.";
cout<<"\n\n Binary operators works on ________ operands?";
cout<<"\n A.one\n B.two\n C.three\n D.both a and b";
cout<<"\n\t\t\t\t\t\tenter x for use lifeline";
cout<<"\n\t\t\t\t\t\tremaining lifeline:-"<<lifeline<<"\n ";
cin>>a;
if(a=='b')
{
cout<<" correct";
score=score+4;
getch();
clrscr();
}
else if(a=='x')
{
if(lifeline>0)
{
life12:
cout<<"\n Enter u for flip the question\n ";
cout<<"Enter v for expert advice\n ";
cin>>b;
clrscr();
if(b=='u')
{
if(u>0)
{
cout<<"\n\n What's wrong in:-\n\n for(int k=2,k<=12,k++)";
cout<<"\n\n A.The increment should always be++k \n B.Always i using a for loop\n C.there should be seicolon at the end of statement\n D.The commas should be semicolon\n\n ";
cin>>a;
lifeline--;
u--;
if(a=='d')
{
cout<<" correct";
}
else
{
cout<<" incorrect";
}
}
else
{
cout<<" flip the question lifeline not available";
goto same12;
}
}
else if(b=='v')
{
if(v>0)
{
cout<<" Expert says, i think B. Two is right\n";
lifeline--;
v--;
goto same12;
}
else
{
cout<<" Expert advice lifeline not available";
goto same12;
}
}
else
{
cout<<" enter only u or y";
goto life12;
}
}
else
{
cout<<" No lifeline left";
clrscr();
goto same12;
}
getch();
clrscr();
}
else
{
cout<<" incorrect";
getch();
clrscr();
}
}
goto result;
addquestion:
clrscr();
cout<<"\n\n\t\t\tcache:- 5892";
cout<<"\n\n\t\t\tResister your name:-";
cin>>name;
cout<<"\n\n\t\t\tEnter above cache:-";
cin>>cache;
if(cache!=5892)
{
cout<<"\n\t\t\tEnter correct cache";
clrscr();
goto addquestion;
}
else
{
clrscr();
cout<<" Enter question number:-";
cin>>number;
cout<<"\n How many words in your question:-";
cin>>word;
cout<<"\ Enter question\n";
for(j=0;j<word;j++)
{
cout<<" ";
cin>>question[j];
}
cout<<"\n Enter options";
cout<<"\n Enter first option:-";
cin>>a1;
cout<<" Enter second option:-";
cin>>a2;
cout<<" Enter third option:-";
cin>>a3;
cout<<" Enter forth option:-";
cin>>a4;
cout<<"\n Enter answer of this question:-";
cin>>a5;
cout<<"\n Question add successfully.";
getch();
clrscr();
goto game;
}
result:
cout<<"\n\n\n\n\n\n\t\t  * * * * * * * * * * * * * * * * * * * * * * *";
cout<<"\n\t\t  *           Name is:- "<<name;cout<<"                 *";
cout<<"\n\t\t  *                                           *";
cout<<"\n\t\t  *           Total questions:- 15            *";
cout<<"\n\t\t  *                                           *";
cout<<"\n\t\t  *           correct questions:- "<<(score/4)-1;cout<<"        *";
cout<<"\n\t\t  *                                           *";
cout<<"\n\t\t  *           Incorrect questions:- "<<(15-((score/4)+(2-lifeline)))+1;cout<<"       *";
cout<<"\n\t\t  *                                           *";
cout<<"\n\t\t  *           Total marks:- "<<score-4;cout<<"	            *";
cout<<"\n\t\t  *                                           *";
cout<<"\n\t\t  *           Lifeline used:- "<<(2-lifeline);cout<<"               *";
cout<<"\n\t\t  * * * * * * * * * * * * * * * * * * * * * * *";
getch();
quit:
}















