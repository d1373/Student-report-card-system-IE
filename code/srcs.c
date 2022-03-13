#include <stdio.h>
#include <string.h>
struct report {
int rollno;
char name[200];
float physics,chemistry,maths,pps,percentage;
char grade;
};
struct report r[100];
void input();
struct report teacher();
void student();
int i,j,k,n;
void main(){
printf("########################################################\n"); //default print snippet for the start of the funtions
printf("############ STUDENT REPORT CARD SYSTEM  ###############\n");
printf("########################################################\n");
teacher();
printf("Do you want to view the result?\n"); 
input();
}
void input(){
printf("Press 1 to view the result and anything else to stop to stop\n");
scanf("%d",&j);
switch (j) {
	case 1:
		student();
		break;
	default:
		break;
}
}
struct report teacher(){
printf("Enter the number of students in your class - ");
scanf("%d",&n);
for (i=0;i<n;i++) {
r[i].rollno=i+1;
printf("Enter the NAME of roll number %d - ",r[i].rollno);
scanf("%s", r[i].name);
printf("Enter the Marks of roll number %d out of 100\n",r[i].rollno);
printf("Physics = ");
scanf("%f",&r[i].physics);
printf("Chemistry = ");
scanf("%f",&r[i].chemistry);
printf("Maths = ");
scanf("%f",&r[i].maths);
printf("PPS = ");
scanf("%f",&r[i].pps);
r[i].percentage=(r[i].physics+r[i].maths+r[i].chemistry+r[i].pps)/4;
if (r[i].percentage >= 90.00)
	r[i].grade = 'A';
else if (r[i].percentage >= 80.00 && r[i].percentage < 90.00)
	r[i].grade = 'B';
else if (r[i].percentage >= 70.00 && r[i].percentage < 80.00)
	r[i].grade = 'C';
else if (r[i].percentage < 70.00)
	r[i].grade = 'D';
printf("\n");
printf("\n");
}
return r[n];
}
void student(){
printf("\n");
printf("\n");
printf("\n");
printf("Enter your details to display result\n");
printf("roll no = ");
scanf("%d",&k);
/*k=k-1;*/
printf("########################################################\n");
printf("\t \tREPORT CARD \t\n");
printf("########################################################\n");
printf("Rollno - %d\n",k);
printf("\n");
printf("Name - %s\n",r[k-1].name);
printf("\n");
printf("Maths - %f\n",r[k-1].maths);
printf("Chemistry - %f\n",r[k-1].chemistry);
printf("Physics - %f\n",r[k-1].physics);
printf("PPS - %f\n",r[k-1].pps);
printf("\n");
printf("Percentage - %f\n",r[k-1].percentage);
printf("\n");
printf("Grade - %c\n",r[k-1].grade);
printf("\n");
printf("Check the result of another student\n");
input();
}
