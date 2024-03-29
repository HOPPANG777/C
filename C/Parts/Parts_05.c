#include "stdafx.h"
#include "Parts_05.h"

void Parts_05()
{
	// While();
	// DoWhile();
	For();
}

void While()
{
	/*
	반복문
	게임 -> 무한루프(반복) 구조
	idle
	system("cls");
	화면은 지우고 다시 그리는것을 반복한다 이게 렌더링이다
	Update

	Vector3(x, y, z);
	Render

	1초에 60번, 많으면 144, 240번등

	유저 -> 종료 버튼 -> 어림도 없지 응 안꺼질게 -> 바이러스

	반복문
	-> 특정 조건이 만족할 동안 특정 구문을 반복하는 제어문

	while, do while, for

	index

	*/
	/*
	while (조건식)
	{
		조건식이 만족할 동안 반복할 명령문1;
		조건식이 만족할 동안 반복할 명령문2;
		조건식이 만족할 동안 반복할 명령문3;
		조건식이 만족할 동안 반복할 명령문4;
	}
	*/

	int i = 0;
	int times = 0;

	printf("반복 횟수 입력 : ");
	scanf("%d", &times);

	while (i < times)
	{
		printf("%d, ", ++i);

		break;
	}
}

void DoWhile()
{
	int i = 0;
	int times = 0;

	printf("반복 횟수 입력 : ");
	scanf("%d", &times);

	do
	{
		printf("%d, ", ++i);
	} while (i < times);
}

void For()
{
	int times = 0;

	printf("반복 횟수 입력 : ");
	scanf("%d", &times);

	/*
	for (초기절; 조건절; 반복절)
	{

	}

	초기절 - for문에 처음 들어올 떄 실행할 구문
	반복절 - 반복이 될 때마다 실행할 구문
	*/

	for (int i = 0; i < times; ++i)
	{
		printf("%d, ", i + 1);
	}

}
