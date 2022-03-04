//inbuild library
#include <stdio.h>
#include <string.h>
//functions
int input();
void teacher();
void student();
void report_display();
void calculation(int ma,int ch,int phy,int pro);
/*define variable*/
int i,j,k,n,type,percentage,grade;
char name[100];
int maths[100],chem[100],physice[100],pps[100];
int ma,ch,phy,pro;
void main(){
for (j=1;j==1;i++) { //a repeat mechanism that would repeat the main loop until the user pressed something other than 1
if (j == 1){
input();
if (type == 1)  //check the value of input and then call respcective funtions
	teacher();
if (type == 2)
	student();
printf("Do you want to restart as a different person\n"); //repeat the whole program to switch user
printf("Press 1 to restart and anything else to stop to stop\n");
scanf("%d",&j);
}
}
}
int input(){
printf("########################################################\n"); //default print snippet for the start of the funtions
printf("############ STUDENT REPORT CARD SYSTEM  ###############\n");
printf("########################################################\n");
printf("Are you a teacher or student\n"); //Ask whether the user is a teacher or student and the proceed accordingly
printf("Type 1 if teacher or 2 if student\n");
scanf("%d",&type);
return type;
}
void teacher(){
printf("I am a teacher");
}
void student(){
printf("I am a student");
}
void calculation(){
printf("test");
}
