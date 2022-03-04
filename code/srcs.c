#include <stdio.h>
#include <string.h>
int input();
void teacher();
void student();
void report_display();
void calculation();
int i,j,k,n,type;
char name[100];
int maths[100],chem[100],physice[100],pps[100];
void main(){
for (j=1;j==1;i++) {
if (j == 1){
input();
if (type == 1)
	teacher();
if (type == 2)
	student();
printf("Do you want to restart as a different person\n");
printf("Press 1 to restart and anything else to stop to stop\n");
scanf("%d",&j);
}
}
}
int input(){
printf("########################################################\n");
printf("############ STUDENT REPORT CARD SYSTEM  ###############\n");
printf("########################################################\n");
printf("Are you a teacher or student\n");
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
