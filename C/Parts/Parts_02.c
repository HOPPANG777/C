#include "stdafx.h"
#include <limits.h>
#include <float.h>
#include "Parts_02.h"

void Parts_02()
{
	DataSize();
}

void DataSize()
{
	// 컴퓨터
	// 데이터를 연산하고, 저장하는 장치
	// CentralProcessUnit(중앙처리장치) -> 사람의 뇌(근데 이제 여러개 7950X3D -> 16명 손32개
	// 똑똑한 애들 소수정예
	// GraphicsProcessUnit(그래픽처리장치)
	// 채굴 - 문제
	// 단순한 애들 다수(좀 아니 ㅈㄴ많은 -> 수학문제 피라미드 1000만층 한명당 10~100층씩 쌓아서 풀기)
	// 게임
	// 그래픽
	// 1920(가로)x1080(세로)
	// FramePerSecond(프레임 1초에 그림 몇장 띄울꺼냐)
	// 60
	// 120 144 240 360 540
	// 저장장치
	// HDD, SSD, FDD, CD
	// 보조기억장치
	// RAM, ROM(BIOS)
	// 주기억장치
	// Cache Memory(CPU(장로)전용 창고 혹은 금고(Cache Memory)
	//
	// ROM
	// ReadOnlyMemory(BIOS)
	// 
	// RAM  
	// RandomAccessMemory
	// RandomAccess(임의접근)
	// 32bit, 64bit
	// 윈도우
	// 4GB
	// 0x00000000, 0xFFFFFFFF
	// 0x0000000000000000, 0xFFFFFFFFFFFFFFFF
	// 프로그램
	// OS
	// 가상메모리
	// 
	// 배열 -> O(1)
	// 램 기준에서 가장 최소 공간이 1bit
	// 1 Bit -> 0 or 1 (전기 신호가 통하면 0 통하지 않으면 1)
	// 1 Byte -> 8bit -> 0or1 0or1 0or1 0or1 0or1 0or1 0or1 0or1 -> 256 경우의 수
	// int -> 4byte -> 32bit -> 2^32 

	char ch = 'A';	// 65
	// 1byte
	// 문자 or 정수 1개
	// 'A' -> 정수
	
	short shortNum = 10;
	int integerNum = 20;
	long longNum = 30;
	long long longLongNum = 40;
	
	printf("===== 문자형 출력 =====\n");
	printf("Char (%llu) : %c\n\n", sizeof(ch), ch);

	printf("===== 정수형 출력 =====\n");
	printf("short (%llu) : %d\n\n", sizeof(shortNum), shortNum);
	printf("int (%llu) : %d\n\n", sizeof(integerNum), integerNum);
	printf("long (%llu) : %d\n\n", sizeof(longNum), longNum);
	printf("long long (%llu) : %lld\n\n", sizeof(longLongNum), longLongNum);



	// long long unsigned
	// unsigned -> 부호가 없는 (음수를 표현하지 않음)
	// unsigned -> signed -> 부호가 있는 (음수를 표현함)
	// sizeof(ch) -> sizeof 연산자 () 안의 데이터(자료) 혹은 자료형의 크기를 나타낸다.
	//  
}
