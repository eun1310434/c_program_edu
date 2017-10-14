#include <stdio.h>

typedef enum P22_02_syllable
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
} P22_02_Syllable;

void P22_02_Sound(P22_02_Syllable sy)
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

int P22_02(void)
{
	P22_02_Syllable tone;
	for (tone = Do; tone <= Ti; tone += 1)
		P22_02_Sound(tone);
	return 0;
}