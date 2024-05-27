#include "stdafx.h"
#include "Parts_13.h"

void Parts_13()
{
	TextIO();
}

void TextIO()
{
	/*
	스트림 생성 모드
	w - write 쓰기가 가능한 모드
	r - 
	a

	데이터 입출력 모드
	t - 메모장 같은 텍스트 
	b - 이진 형태로 하겠다
	*/

	FILE* wStream = fopen("01.txt", "wt");

	if (wStream != NULL)
	{
		// fprintf(wStream, "Hello, World!\n");
		for (int i = 0; i < 10; ++i)
			fputs("Hello, World!\n", wStream);

		fseek(wStream, 0, SEEK_SET);
		fputs("Olleh", wStream);

		fseek(wStream, 2, SEEK_CUR);
		fputs("w", wStream);

		fseek(wStream, -3, SEEK_END);
		fputs("s", wStream);

		fclose(wStream);
	}
	else
	{
		printf("Write Stream Open Error!\n");

		return;
	}
}
