#include "stdafx.h"
#include "Parts_08.h"

void Parts_08()
{
	Function();
}

void Function()
{
	// 입력값에 따라 출력값이 결정되는 과정
	// y = function(x)


	// 프로그램
	// 함수
	// 코드의 그룹화 재사용 // 코드를 어디다 사용할지 목적성을 가지고 분리하고 그룹화 한다.
	// 그리고 코드의 재사용 코드를 필요할때마다 지웠다가 다시 쓰는 불상사 없이 
	// 그저 함수의 이름만 호출하면 다시 사용할수있다.
	// 코드를 전부 main함수에 다 꼬라박을순 있지만 
	// 그렇게 하면 코드 작성시 어려움이 생기기 때문에 분리한다. 

	/*
	함수의 선언 : 
	반환형(출력) 함수이름(매개변수(입력));

	변수의 선언 :
	자료형 변수이름;

	함수를 구현하는것 
	함수의 정의 :
	반환형 함수이름(매개변수) { 함수몸체; }

	함수의 정의는 소스파일에 있는것이다.

	함수가 호출됬을때 

	int a;
	a = 10;

	함수는 재정의는 C언어에서는 불가능하다.
	그러니까 이미 있는 함수는 한번씩만 정의가 가능하다.
	함수의 선언은 함수의 존재를 알려주는 의미라 여러번 가능하다.

	헤더에서 정의를 안할수도 있다 헤더에서 바로 정의를 할수도 있다.
	이건 상황따라서 가는것이다.

	함수 호출(함수를 실행 -> 함수 몸체 안에 있는 명령문을 실행한다.
	함수이름(매개변수);
	함수의 몸통에 있는 실행문을 함수의 주소를 찾아서 불러서 실행시키는것이다.
	Parts_08이라는 함수를 선언해서 컴파일러한테 이거 써 하면서 쓰게 시키는것이다.
	함수

	반환형이 존재 -> 함수의 출력 값이 존재한다.
	반환형 -> 함수에서 반환될 값의 자료형
	매개변수 -> 함수의 입력값

	int func1(int a, int b); -> 입력O, 출력O;
	void func2(int a, int b); -> 입력O, 출력X  
	반환형이 void란 소리는 함수의 출력값이 존재하지 않는다는 뜻이다.
	int func3(void); -> 입력X, 출력O
	void func4(void); -> 입력X, 출력X	
	// 입력도 출력도 없는데 왜쓰냐 하면은 함수의 핵심은 함수의 그룹화와 재사용이 함수의 핵심이다. 그렇기 때문에 우리는 코드와 분리와 재사용을 위해서 함수의 선언이 가능하다.
	

	*/

	/*
	영어 문장 입력

	결과 : 입력받은 문장을 뒤집어서 출력
	*/

	/*
	한글 문장 입력

	결과 : 입력받은 문장을 뒤집어서 출력
	*/

	int num1 = 0, num2 = 0;

	// 아스키코드 0번(정수 0)
	char oper = '\0';

	printf("수식과 숫자를 입력해주세요 입력 (+, -, *, /) : ");
	scanf("%d %c %d", &num1, &oper, &num2);

	/*
	지금 당장 이 상황에선 왜 함수를 사용하는지 궁금할것이다.
	다이렉트X2D를 들어가면 함수가 굉장히 길고 많다 
	그렇기 때문에 그냥 깡으로 코드를 쓰면 알아볼수가 없겠죠
	코드 작성시의 편의성과 개발 진행을 위해 더욱 사용할수 밖에 없습니다.
	점프중엔 멈추면 안되잖아 그리고 땅에 닿았을때 딱 멈춰야 하겠죠
	그리고 매순간마다 오브젝트들과 충돌판정을 해야합니다
	1초에 1개끼리의 오브젝트들과의 충돌판정도 60프레임만 해도 60번인데
	화면 안에 모든 오브젝트들의 충돌판정을 하려면 코드가 엄청 길어지겠죠
	함수를 써서 이러한 코드를 만들어두고 호출해서 써먹으면
	코드가 훨씬 읽기도 편하고 작성시에도 굉장히 편하겠죠
	*/

	switch (oper)
	{
	case '+':
	{
		// int result = GetSumValue(num1, num2);	// 이렇게 하면 GetSumValue라는 함수에 있는 실행문을 불러온다.
		printf("%d + %d = %d\n", num1, num2, GetSumValue(num1, num2));	// 하지만 이렇게 result를 거치지 않고 그냥 함수를 쓰면 더 편하게 쓸수 있다.
	}break;
	case '-':
	{
		printf("%d - %d = %d\n", num1, num2, GetSubValue(num1, num2));
	}break;
	case '*':
	{
		printf("%d * %d = %d\n", num1, num2, GetMulValue(num1, num2));
	}break;
	case '/':
	{
		printf("%d / %d = %f\n", num1, num2, GetDivValue(num1, num2));
	}break;
	default:
	{
		printf("잘못된 수식을 입력했습니다.");
	}break;
	}

}

int GetSumValue(int num1, int num2)
{
	return num1 + num2;
}

int GetSubValue(int num1, int num2)
{

	return num1 - num2;
}

int GetMulValue(int num1, int num2)
{
	return num1 * num2;
}

float GetDivValue(int num1, int num2)
{
	return num1 / (float)num2;
}






