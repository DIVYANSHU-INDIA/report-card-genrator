/*
Author:     DIVYANSHU KUMAR UPADHYAY
Topic:      To write a C program to generate the report card of a student based on his marks
            secured in the final examination. 

*/
#include <unistd.h>
#include <stdio.h>
#include<conio.h>

int main()
{
   float marksMath, markEnglish, markHindi, markScience, markSocial, totalMark;
   char studentName[30];
   char studentSection, grade;
   int studentClass;

   puts("WELCOME TO THE STUDENTS MARKSHEET PORTAL");
   puts("Please wait......");

   printf("Enter The NAME Of the Student :                 ");
   scanf("%[^\n]s ", studentName);

   printf("Enter The SECTION Of the Student :              ");
   while (getchar() != '\n')
      ;
   scanf("%c", &studentSection);

   printf("Enter the Class of student :                    ");
   while (getchar() != '\n')
      ;
   scanf("%d", &studentClass);

   printf("Enter The MARKS IN MATHEMATICS :                ");
   while (getchar() != '\n')
      ;
   scanf("%f", &marksMath);

   printf("Enter The MARKS IN SCIENCE :                    ");
   while (getchar() != '\n')
      ;
   scanf("%f", &markScience);

   printf("Enter The MARKS IN ENGLISH :                    ");
   while (getchar() != '\n')
      ;
   scanf("%f", &markEnglish);

   printf("Enter The MARKS IN HINDI :                      ");
   while (getchar() != '\n')
      ;
   scanf("%f", &markHindi);

   printf("Enter The MARKS IN SOCIAL SCIENCE :             ");
   while (getchar() != '\n')
      ;
   scanf("%f", &markSocial);

   totalMark = (marksMath + markEnglish + markHindi + markScience + markSocial);
   printf("\n");

   if (totalMark <= 500.0 && totalMark >= 450)
   {
      grade = 'A';
   }
   else if (totalMark <= 499.0 && totalMark >= 400.0)
   {
      grade = 'B';
   }
   else if (totalMark <= 399.0 && totalMark >= 350.0)
   {
      grade = 'C';
   }
   else if (totalMark <= 349.0 && totalMark >= 300.0)
   {
      grade = 'D';
   }
   else if (totalMark <= 299.0 && totalMark >= 200.0)
   {
      grade = 'E';
   }
   else if (totalMark < 200.0 && totalMark >= 0.0)
   {
      grade = 'F';
   }
   else
   {
      puts("wrong");
   }

   printf("\n------------------------------------------------------------------------------------\n");
   printf("                          Jawahar Navodaya Vidyalaya                                  \n");
   printf("                              Annual Report Card                                      \n");
   printf("\n");
   printf("\n");
   printf(" Name :     %s \n", studentName);
   printf(" Standard : %d \n", studentClass);
   printf(" Section :  %c \n", studentSection);
   printf("\n");
   printf("\n");
   printf("Marks Secured out of 100 \n");
   printf("Mathematics: %.2f \n", marksMath);
   printf("Science:     %.2f \n", markScience);
   printf("English:     %.2f \n", markEnglish);
   printf("Hindi:       %.2f \n", markHindi);
   printf("Social:      %.2f \n", markSocial);
   printf("\n");
   printf("\n");
   printf("Total Marks Secured:                       %.2f \n", totalMark);
   printf("Grade:                                     %c \n", grade);

   printf("\n------------------------------------------------------------------------------------\n");
   getch();
   return 0;
}
