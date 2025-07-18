#include <stdio.h>
//#include<string.h>

struct student
{
    char name[20];
    int rollno;
   // float marks;
   int submarks[4];
};
 int main (){
  /* struct student str1 = {"ram",46,96.8};
   struct student str2,str3;
   strcpy(str2.name,"john");
   str2.rollno = 45;
   str2.marks = 89.5;
   printf("enter the details for student3 : ");
   scanf("%s %d %f", str3.name, &str3.rollno, &str3.marks);
   printf(" student1 : %s %d %f\n ", str1.name,  str1.rollno, str1.marks);
   printf(" student2 : %s %d %f\n ", str2.name,  str2.rollno, str2.marks);
   printf(" student3 : %s %d %f\n ", str3.name,  str3.rollno, str3.marks);*/

   //array of structure

  /* int i;
   struct student std[10];
   for (i = 0; i<10; i++){
    printf("Enter the name rollno and marks of student");
    scanf("%s%d%f",std[i].name,&std[i].rollno,&std[i].marks);
   }
    for (i = 0; i<10; i++){
    printf("%s %d %f ",std[i].name, std[i].rollno, std[i].marks);
   }*/

   //array within structures
int i,j;
struct student std[3];
for (i = 0; i<3; i++){
printf("Enter the data for student %d\n",i+1);
printf("Enter name :");
scanf("%s",std[i].name);

printf("Enter rollno :");
scanf("%d",&std[i].rollno);
for (j = 0; j<4; j++){
        printf("Enter the marks for subject  %d: ",j+1);
        scanf("%d",&std[i].submarks[j]);
      }
}
for (i = 0; i<3; i++){
printf("data of student %d\n",i+1);
printf("name : %s, rollno : %d\n marks : ",std[i].name, std[i].rollno);

for (j = 0; j<4; j++){
    printf("%d ",std[i].submarks[j]);
    printf("\n");

      }
}

return 0;
}