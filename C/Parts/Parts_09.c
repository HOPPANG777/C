#include "stdafx.h"
#include "Parts_09.h"

void Parts_09()
{
	Structure();
}

void Structure()
{
	printf("Test 구조체 크기 : %lld\n", sizeof(struct Test));

	Player player1;
	player1.id = 1;
	player1.level = 1;
	player1.hp = 10;
	player1.atk = 2;

	// 멤버 이니셜라이저
	/*
	멤버를 순서대로 초기화 하는것이다.
	*/
	Player player2 = { 2, 2, 25, 1 };

	printf("===== 각 플레이어 초기 정보 =====\n");
	PrintPlayerInfo(player1);
	PrintPlayerInfo(player2);

	Player players[] =
	{
		player1,
		player2,
		{ 3, 2, 15, 2 },
		{ 4, 1, 15, 1 }
	};

	const int numPlayers = sizeof(players) / sizeof(players[0]);

	printf("\n===== 각 플레이어 초기 정보(배열) =====\n");
	for (int i = 0; i < numPlayers; ++i)
		PrintPlayerInfo(players[i]);

	printf("\n");

	system("pause");
	system("cls");

	int sel;

	while (true)
	{
		printf("===== LevelUp 프로그램 =====\n");
		printf("\nLevelUp 대상 플레이어 선택 (1 ~ 4) : ");
		scanf("%d", &sel);

		if (sel > 0 && sel <= 4)
		{
			players[sel - 1] = PlayerLevelUp(players[sel - 1]);

			printf("\n===== LevelUp 결과 =====\n");
			for (int i = 0; i < numPlayers; ++i)
				PrintPlayerInfo(players[i]);

			printf("\n");

			system("pause");
			system("cls");
		}
		else if (sel == 0)
			break;
		else
		{
			printf("\n===== LevelUp 결과 =====\n");
			printf("\n잘못된 플레이어 id를 입력하셨습니다. 정확한 플레이어 id(1 ~ 4)를 입력해주세요.\n\n");
			
			system("pause");
			system("cls");
		}
	}
}

void PrintPlayerInfo(Player player)
{
	printf("플레이어 %d 정보 [ Level : %d, HP : %d, ATK : %d ]\n", player.id, player.level, player.hp, player.atk);
}

Player PlayerLevelUp(Player up)
{
	up.level++;
	up.hp += 10;
	up.atk++;
	return up;
}

/*
레벨1 올리면
체력 10, 공격력 1 오르고

레벨업 대상 선택
그리고 레벨업 결과 출력

반복문 구조 0되면 프로그램 종료

===== LevelUp 프로그램 =====

LevelUp 대상 플레이어 선택 (1 ~ 4) : 1

===== LevelUp 결과 =====
플레이어 1 정보 [ Level : 6, HP : 60, ATK : 7 ]
*/