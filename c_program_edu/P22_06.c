#include <stdio.h>

typedef struct P22_06_person
{
	char name[20];
	char phoneNum[20];
	int age;
} P22_06_Person;

void P22_06_ShowPersonInfo(P22_06_Person man)
{
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}

P22_06_Person P22_06_ReadPersonInfo(void)
{
	P22_06_Person man;
	printf("name? ");  scanf("%s", man.name);
	printf("phone? ");  scanf("%s", man.phoneNum);
	printf("age? ");  scanf("%d", &man.age);
	return man;
}

int P22_06(void)
{
	P22_06_Person man = P22_06_ReadPersonInfo();
	P22_06_ShowPersonInfo(man);
	return 0;
}
