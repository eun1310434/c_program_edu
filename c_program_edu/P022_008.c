#include <stdio.h>

typedef struct P022_008_student
{
	char name[20];       // �л� �̸�
	char stdnum[20];     // �л� ������ȣ
	char school[20];     // �б� �̸�
	char major[20];      // ���� ����
	int year;            // �г�
} P022_008_Student;

void P022_008_ShowStudentInfo(P022_008_Student * sptr)
{
	printf("�л� �̸�: %s \n", sptr->name);
	printf("�л� ������ȣ: %s \n", sptr->stdnum);
	printf("�б� �̸�: %s \n", sptr->school);
	printf("���� ����: %s \n", sptr->major);
	printf("�г�: %d \n", sptr->year);
}

int P022_008(void)
{
	P022_008_Student arr[7];
	int i;

	for (i = 0; i<7; i++)
	{
		printf("�̸�: ");  scanf("%s", arr[i].name);
		printf("��ȣ: ");  scanf("%s", arr[i].stdnum);
		printf("�б�: ");  scanf("%s", arr[i].school);
		printf("����: ");  scanf("%s", arr[i].major);
		printf("�г�: ");  scanf("%d", &arr[i].year);
	}

	for (i = 0; i<7; i++)
		P022_008_ShowStudentInfo(&arr[i]);

	return 0;
}
