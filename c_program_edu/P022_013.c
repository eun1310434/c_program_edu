#include <stdio.h>

typedef enum P022_013_syllable
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
} P022_013_Syllable;

void P022_013_Sound(P022_013_Syllable sy)
{
	switch (sy)
	{
	case Do:
		puts("���� �Ͼ� ������ ��"); return;
	case Re:
		puts("���� �ձ� ���ڵ� ��"); return;
	case Mi:
		puts("�̴� �Ķ� �̳��� �ۢ�"); return;
	case Fa:
		puts("�Ĵ� ���� �Ķ��� �ܢ�"); return;
	case So:
		puts("���� ���� �ֹ�� �ۢܢ�"); return;
	case La:
		puts("��� �������~ �ܢۢڢ�"); return;
	case Ti:
		puts("�ô� ���� �ó��� �ۢڢۢ�"); return;
	}
	puts("�� �Բ� �θ���~ �������� �ֶ�õ� �� ��~ §~");
}

int P022_013(void)
{
	P022_013_Syllable tone;
	for (tone = Do; tone <= Ti; tone += 1)
		P022_013_Sound(tone);
	return 0;
}