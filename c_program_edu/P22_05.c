#include <stdio.h>

typedef struct P22_05_student
{
	char name[20];       // 학생 이름
	char stdnum[20];     // 학생 고유번호
	char school[20];     // 학교 이름
	char major[20];      // 선택 전공
	int year;            // 학년
} P22_05_Student;

void P22_05_ShowStudentInfo(P22_05_Student * sptr)
{
	printf("학생 이름: %s \n", sptr->name);
	printf("학생 고유번호: %s \n", sptr->stdnum);
	printf("학교 이름: %s \n", sptr->school);
	printf("선택 전공: %s \n", sptr->major);
	printf("학년: %d \n", sptr->year);
}

int P22_05(void)
{
	P22_05_Student arr[7];
	int i;

	for (i = 0; i<7; i++)
	{
		printf("이름: ");  scanf("%s", arr[i].name);
		printf("번호: ");  scanf("%s", arr[i].stdnum);
		printf("학교: ");  scanf("%s", arr[i].school);
		printf("전공: ");  scanf("%s", arr[i].major);
		printf("학년: ");  scanf("%d", &arr[i].year);
	}

	for (i = 0; i<7; i++)
		P22_05_ShowStudentInfo(&arr[i]);

	return 0;
}
