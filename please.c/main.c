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
		printf("1.�л��������\n");
		printf("2.�л������Է�\n");
		printf("3.����\n");

		printf("����");
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