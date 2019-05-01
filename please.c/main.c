#include <stdio.h>
#include "student.h"

int main(void)
{
	while (1)
	{
		int argc;
		char *argv[20];
		int Number;
		printf("----------Menu----------\n");
		printf("1.학생정보출력\n");
		printf("2.학생정보입력\n");
		printf("3.종료\n");

		printf("선택");
		scanf("%d", &Number);

		switch (Number)
		{
		case1:
			printDB(argc,&argv);
			break;
		case2:
			InputDB();
			break;
			
		case3:
			exit();
		}
	}
	return 0;
}