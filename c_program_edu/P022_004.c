#include <stdio.h>

typedef struct P022_004_person
{
	char name[20];
	char phoneNum[20];
	int age;
} P022_004_Person;

void P022_004_ShowPersonInfo(P022_004_Person man)
{
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}

P022_004_Person P022_004_ReadPersonInfo(void)
{
	P022_004_Person man;
	printf("name? ");  scanf("%s", man.name);
	printf("phone? ");  scanf("%s", man.phoneNum);
	printf("age? ");  scanf("%d", &man.age);
	return man;
}

int P022_004(void)
{
	P022_004_Person man = P022_004_ReadPersonInfo();
	P022_004_ShowPersonInfo(man);
	return 0;
}
