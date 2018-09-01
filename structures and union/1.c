#include<stdio.h>
struct data
{
	char name[20];
	int age;
	char city[10];
};
int main()
{
	struct data people[5];
	int index,max_age;
	for(int i=0;i<5;i++)
		scanf("%s %d %s",people[i].name,&people[i].age,people[i].city);
	max_age=people[0].age;
	for(int i=1;i<5
		;i++)
	{
		if(people[i].age > max_age)
		{
			max_age=people[i].age;
			index=i;
		}
	}
	printf("Name and city of the eldest one is %s %s \n",people[index].name, people[index].city);
	return 0;
}