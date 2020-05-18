//Finding
#include <stdio.h>
typedef struct students
{
	char name[10];
	int total;
	int average;
	int marks[5];
}Marks;
int main()
{
	int count;
	printf("Enter the count of students in the class: ");
	scanf("%d", &count);
	Marks student[count];
	int counter,iterator;
	for(counter = 0;counter < count;counter++)
	{
		printf("Student-%d: \n", counter+1);
		printf("Name: ");
		scanf("%s", student[counter].name);
		printf("Marks: ");
		student[counter].total = 0;
		student[counter].average = 0;
		for(iterator = 0;iterator < 5;iterator++)
		{
			scanf("%d", &student[counter].marks[iterator]);
			student[counter].total += student[counter].marks[iterator];
-//printf("%d\n",student[counter].total);
-			student[counter].average += student[counter].marks[iterator];
-		}
-	}
-	char select[10];
-	printf("Whose total do you want?(Enter the name)\n");
-	scanf("%s",select);
-	for(counter = 0;counter < count;counter++)
-	{
-		if(strcmp(student[counter].name==select))
-		{
-			printf("Total = %d\n", student[counter].total);
-		
-		}
-		
-	}
-
-}
int sorting(Marks total, int count)
{
	int counter,iterator;
	for(counter = 0; counter < count; counter++)
	{
		for(iterator = 0; iterator < )
		if(student[counter].total > student[counter+1].total)
		{
			duplicate = student[counter].total;
			student[counter].total = student[counter+1].total;
			student[counter+1].total = duplicate;
		}
	}
}


