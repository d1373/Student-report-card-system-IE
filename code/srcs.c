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
int number_of_students();
int i,j,k,n,rank1,rank2,rank3;
float rank[100];
void main(){
printf("########################################################\n"); //default print snippet for the start of the funtions
printf("############ STUDENT REPORT CARD SYSTEM  ###############\n");
printf("########################################################\n");
number_of_students();
teacher();
printf("\n");
printf("\n");
printf("\n");
student();
}
void input(){
printf("Press 1 to view the result and anything else to stop\n");
scanf("%d",&j);
switch (j) {
	case 1:
		student();
		break;
	default:
		break;
}
}
int number_of_students(){
printf("Enter the number of students in your class - ");
scanf("%d",&n);
return n;
}
struct report teacher(){
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
for (i=0;i<n;i++){
r[i].percentage=rank[i];
}
rank1=rank2=rank3=0;
for (i=0;i<n;i++){
if (rank[i]>rank1){
rank2=rank1;
rank1=rank[i];
}
else if (rank[i]>rank2){
rank3=rank2;
rank2=rank[i];
}
else if (rank[i]>rank3){
rank3=rank[i];
}
}
printf("Enter your details to display result\n");
for (j=0;j<10;j++){
printf("roll no = ");
scanf("%d",&k);
if (k<=0 || k>n){
printf("Enter the correct roll no\n");
}
else  {
	j=11;
}
}
/*k=k-1;*/
printf("########################################################\n");
printf("\t \t\tREPORT CARD \t\n");
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
if (rank1 == r[k-1].percentage){
printf("Rank - 1");
}
else if (rank2 == r[k-1].percentage){
printf("Rank - 2");
}
else if (rank3 == r[k-1].percentage){
printf("Rank - 3");
}
printf("\n");
printf("Check the result of another student\n");
input();
}
