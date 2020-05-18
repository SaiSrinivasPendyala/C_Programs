#include "dataStructure.c"
int main()
{
	FILE *fpStudents;
	fpStudents = fopen("datastructure_file.dat","w");
	int count, counter;
	printf("Enter the count of the records: ");
	scanf("%d",&count);
	struct student *s;
	s = (struct student *)malloc(count*sizeof(struct student));
	printf("Please enter the details.\n");
	for(counter = 0;counter < count;counter++)
	{
		printf("Record-%d: \n",counter+1);
		printf("Name: ");
		scanf("%s",s->name);
		printf("Roll.No: ");
		scanf("%d",&s->rollNo);
		printf("Grade: ")
		scanf("%f",&s->grade);
		s->next = (s+counter);
		if(counter==(count-1))
		{
			s->next = NULL;
		}
		fwrite(s,sizeof(struct student),1,fpStudents);
		s+=counter;
	}
	fclose(fpStudents);

}