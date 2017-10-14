#include <stdio.h>

struct P021_009_point
{
	int xpos;
	int ypos;
};

struct P021_009_person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int P021_009(void)
{
	struct P021_009_point pos = { 10, 20 };
	struct P021_009_person man = { "ÀÌ½Â±â", "010-1212-0001", 21 };

	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, man.name);
	return 0;
}
