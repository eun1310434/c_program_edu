#include <stdio.h>

struct P21_07_point
{
	int xpos;
	int ypos;
};

struct P21_07_person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int P21_07(void)
{
	struct P21_07_point pos = { 10, 20 };
	struct P21_07_person man = { "ÀÌ½Â±â", "010-1212-0001", 21 };

	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, man.name);
	return 0;
}
