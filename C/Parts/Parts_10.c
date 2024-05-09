#include "stdafx.h"
#include "Parts_10.h"

void Parts_10()
{
	Pointer();
}

void Pointer()
{
	int intNum = 0;
	float fltNum = 0.0f;
	double dblNum = 0.0;

	/*
	포인터 선언 방법
	자료형 (*)포인터연산자 포인터이름
	
	포인터 : 주소값을 저장하는 변수	// 어떤 주소값인지는 알수 없다.
	
	포인터(주소값)의 크기 
	x86(32bit) - 4바이트
	x64(64bit) - 8바이트
	
	int intNum;

	int* intPtr = &intNum;	// intPtr이 intNum의 주소값을 가지게 된다.

	*/

	// 사용하고자 하는 자료형에 *를 넣으면 된다.
	int* intPtr = &intNum;
	// 어떤 주소값을 저장하는 변수 주소값을 저장하고 싶다면 엠퍼센트를 붙히면 된다.
	// scanf쓸때 붙히는 & 이게 주소 연산자다.
	float* fltPtr = &fltNum;
	double* dblPtr = &dblNum;

	printf("\n===== 포인터 크기 =====\n");
	printf("int* : %zd\n", sizeof(intPtr));
	printf("float* : %zd\n", sizeof(fltPtr));
	printf("doubl* : %zd\n", sizeof(dblPtr));
	// 실행하면 8바이트가 나오는데 포인터는 4바이트 아닌가? 생각할수있다.
	// 포인터는 32비트 운영체제일 경우엔 4바이트가 나온다.
	// 64비트 운영체제에서는 8바이트가 나온다.
	/*
	x86(32bit 운영체제) -> 4GB

	0xFFFFFFFF
	요거에 의미를 보면 굉장히 간단히 이해되는 문제이다.
	이게 HAX값인데 
	저 F를 10진수로 바꿔보면 
	unsigned int 최대값이 나온다.
	4바이트 -> 32
	2^32
	32비트 운영체제는 기본적으로 가상 램의 공간을 저 F 8개 밖에 없을 것이다 라는 전제를 깔고간다,
	그래서 암튼 이걸 1024로 계속 나누면 결국 4기가가 나온다 그래서 32비트 운영체제는 4기가로 한정되게 되는것이다.
	메모리 주소값을 0xFFFFFFFF밖에 안들어가게 되는것이다.

	왜 이렇게 만들었냐? 
	당연하게도 예전에는 이걸 다쓸줄 몰랐던거지 "야... 이걸 어케 다쓰냐 ㅇㅈ?" 컴터 과학자들은 ㅇㅈㄹ하고 있었던거지
	근데 막 8기가 메모리도 나오고 하드웨어 발전 속도 보더니 어? 부족하네 하게 된거지

	2^64
	이말은 자릿수가 2배로 늘어난단 소리다

	그래서 포인터가 64비트 운영체제에서는 크기가 8바이트가 되는것이다.

	
	*/

	// 만약 최적화를 많이 하고싶다 하면
	// x86을 선택하는걸 고려할수있다.
	// 32비트 프로그램이라고 64비트 운영체제에서 안돌아간다는 소리는 아니다.
	// 포인터는 메모리 공간에서 주소를 저장하는 변수이다.
	// 
	// 포인터를 활용해서 주소값을 넘기는것에 대해 이점이 많다.
	
	/*
	intNum = 10; X
	intPtr = &intNum
	*intPtr = 10;	// intNum을 간접참조하라
	위의 직접 대입하는 대신 간접참조연산자를 사용하여 간접적으로 사용한다. 
	포인터 앞에 *표시 붙이면 간접참조연산자다 
	*/
	// 간접참조연산자
	*intPtr = 10;
	// intNum = 10; 이라는 뜻이다.
	*fltPtr = 3.14f;
	// 변수 선언할때 붙이는 별하고 
	// 이미 선언된 포인터에 붙이는 별은 완전 다른 의미다.
	// 그래서 간접참조연산자는 어디에 쓰이는 것이냐 
	// 포인터에 간접참조를 한다는 것은 주소를 통해서 값을 간접적으로 참조하라
	// 변수를 직접 참조하지 않고도 우리가 이 변수를 바꿀수있다.
	// %p는 주소값을 볼수있다.
	printf("\n===== 포인터 간접 참조 결과 =====\n");
	printf("Int : %d, %p, Int* : %p %d\n", intNum, &intNum, intPtr, *intPtr);
	printf("Float : %f, %p, Float* : %p %f\n", fltNum, &fltNum, fltPtr, *fltPtr);
	
	void* ptr = &intNum;
	
	*((int*)ptr) = 20;

	printf("\n===== 포인터 간접 참조 결과 =====\n");
	printf("Int : %d, %p, Void* : %p %d\n", intNum, &intNum, ptr, *((int*)ptr));
	
	/*
	함수 호출 -> Call By Value
	player->level += 1; // 간접참조를 해서 가져와라
	*/

	int num1 = 0;
	int num2 = 0;

	printf("\n정수 2개 입력 : ");
	scanf("%d %d", &num1, &num2);

	printf("\n===== 값 교환 전 =====\n");
	printf("지역 변수 num1(%p) : %d, 지역 변수 num2(%p) : %d\n", &num1, num1, &num2, num2);

	printf("\n===== 값 교환 중 =====\n");
	SwapByPtr(&num1, &num2);
	
	printf("\n===== 값 교환 후 =====\n");
	printf("지역 변수 num1(%p) : %d, 지역 변수 num2(%p) : %d\n", &num1, num1, &num2, num2);
}

void SwapByValue(int a, int b)
{
	printf("매개 변수 a(%p) : %d, 매개 변수 b(%p) : %d\n", &a, a, &b, b);

	//	a ^= b ^= a ^= b;
	int temp = a;
	a = b;
	b = temp;

	printf("매개 변수 a(%p) : %d, 매개 변수 b(%p) : %d\n", &a, a, &b, b);
}

void SwapByPtr(int* a, int* b)
{
	printf("매개 변수 a(&p) : %d, 매개 변수 b(%p) : %d\n", a, *a, b, *b);

	//	a ^= b ^= a ^= b;
	int temp = *a;
	*a = *b;
	*b = temp;

	printf("매개 변수 a(%p) : %d, 매개 변수 b(%p) : %d\n", a, *a, b, *b);
}
