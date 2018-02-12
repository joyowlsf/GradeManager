/*#include <stdio.h>
#include <stdlib.h>
#include <mysql.h>

void finish_with_error(MYSQL *conn)
{
	fprintf(stderr, "%s\n", mysql_error(conn));
	mysql_close(conn);
	exit(1);
}

int printDB(int argc, char *argv[])
{
	MYSQL *conn = mysql_init(NULL);

	if (conn == NULL)
	{
		fprintf(stderr, "mysql_init() 함수 실패\n");
		exit(1);
	}

	if (mysql_real_connect(conn, "localhost", "root", "dyd1569147", "joyowlsf", 0, NULL, 0) == NULL)
	{
		finish_with_error(conn);
	}

	if (mysql_query(conn, "SELECT *FROM t_login_user")) //테이블의 모든 데이터를 화면에 출력
	{
		finish_with_error(conn);
	}

	MYSQL_RES *result = mysql_store_result(conn); //함수를 사용해서 결과셋을 가져온다.
	if (result == NULL)
	{
		finish_with_error(conn);
	}

	int num_fields = mysql_num_fields(result); //테이블에서 가져온 결과셋의 갯수를 저장합니다. 

	MYSQL_ROW row;

	while (row = mysql_fetch_row(result))
	{
		for (int i = 0; i < num_fields; i++)
		{
			printf("%s  ", row[i] ? row[i] : "NULL");
		}
		printf("\n");
	} //결과셋을 화면에 출력합니다. 데이터가 없으면 NULL출력


	mysql_free_result(result);
	mysql_close(conn);
	exit(0);

}*/