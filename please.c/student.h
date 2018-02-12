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
		fprintf(stderr, "mysql_init() �Լ� ����\n");
		exit(1);
	}

	if (mysql_real_connect(conn, "localhost", "root", "dyd1569147", "joyowlsf", 0, NULL, 0) == NULL)
	{
		finish_with_error(conn);
	}

	if (mysql_query(conn, "SELECT *FROM t_login_user")) //���̺��� ��� �����͸� ȭ�鿡 ���
	{
		finish_with_error(conn);
	}

	MYSQL_RES *result = mysql_store_result(conn); //�Լ��� ����ؼ� ������� �����´�.
	if (result == NULL)
	{
		finish_with_error(conn);
	}

	int num_fields = mysql_num_fields(result); //���̺��� ������ ������� ������ �����մϴ�. 

	MYSQL_ROW row;

	while (row = mysql_fetch_row(result))
	{
		for (int i = 0; i < num_fields; i++)
		{
			printf("%s  ", row[i] ? row[i] : "NULL");
		}
		printf("\n");
	} //������� ȭ�鿡 ����մϴ�. �����Ͱ� ������ NULL���


	mysql_free_result(result);
	mysql_close(conn);
	exit(0);

}*/