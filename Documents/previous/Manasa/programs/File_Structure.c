#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char name[10];
	int rollno;
	float marks[3];
	int rank;
}student;
int main()
{
	int counter,i;
	student *s;
	FILE* fp;
	fp = fopen("Details.bin","wb");
	s = (student *)(malloc(3*sizeof(student)));
	printf("Enter the details of the students:\n");
	for(counter = 0;counter < 3;counter++)
	{
		printf("Student-%d:\n",counter+1);
		printf("Name: ");
		scanf("%s",*s.name);
		printf("Roll.No: ");
		scanf("%d",*s.rollno);
		printf("Marks: ");
		printf(" subject-1:");
		scanf("%f",*s.marks[0]);
		printf(" subject-2:");
		scanf("%f",*s.marks[1]);
		printf(" subject-3:");
		scanf("%f",*s.marks[2]);
		s++;
	}
	fprintf(s,sizeof(student),3,fp);
	fclose(fp);
}
