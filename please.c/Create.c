/*#include<mysql.h>
#include<string.h>
#include<stdio.h>

#define DB_HOST "127.0.0.1"
#define DB_USER "root"
#define DB_PASS "dyd1569147"
#define DB_NAME "joyowlsf"
#define CHOP(x) x[strlen(x) - 1] = ' '

int InputDB(void)
{
	MYSQL *connection = NULL, conn; //MYSQL DB����������, �� ������ �ٷ������ ���Ǵ� ����ü�̴�.
	MYSQL_RES *sql_result; //(SELECT,SHOW)���� ������ �������� �� ����� �ٷ�� ���� ���Ǵ� ����ü�̴�.
	MYSQL_ROW sql_row; //�̰��� ����Ÿ�� �ϳ��� ROW���� ����Ų��.���� ROW���� ���ٸ� NULL�� ����Ű�� �ȴ�
	int query_stat;

	char name[12];
	char address[80];
	char tel[12];
	char query[255];

	mysql_init(&conn); //MYSQL������ �ʱ�ȭ �Ѵ�.

	connection = mysql_real_connect(&conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	//MYSQL������ ������ �����ϰԵȴ�.

	if (connection == NULL)
	{
		fprintf(stderr, "Mysql connection error : %s", mysql_error(&conn));
		return 1;
	}
	//���ῡ �����ϸ� connection �ڵ� ���� �Ѱ��ְ� �����ϰ� �Ǹ� NULL���� �Ѱ� �ְ� �ȴ�. � ������ ����
	//�ߴ��� �˾ƺ��� �ʹٸ� mysql_error()�� ���
	
	query_stat = mysql_query(connection, "select *from t_login_user");
	
	if (query_stat !=0)
	{
		fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
		return 1;
	}

	sql_result = mysql_store_result(connection); //������ ������� �ǵ��� �������ִ�.

	printf("%+11s %-30s %-10s", "�̸�", "�ּ�", "��ȭ��ȣ");
	while ((sql_row = mysql_fetch_row(sql_result)) != NULL) //row������ ������� �����ü��ִ�.
	{
		printf("%+11s %-30s %-10s", sql_row[0], sql_row[1], sql_row[2]);
	} 

	mysql_free_result(sql_result); //����������� ���̻� �ʿ䰡 ������ �޸𸮿� �ǵ����ش�.

	
	printf("�̸�:");
	fgets(name, 12, stdin);
	CHOP(name);

	printf("�ּ�:");
	fgets(address, 80, stdin);
	CHOP(address);

	printf("��ȭ:");
	fgets(tel, 12, stdin);
	CHOP(tel);

	//fgets()�Լ��� ���Ͽ��� �Է¹ް� �Է¹��� ������ ������ �����

	sprintf(query, "insert into address values" "('%s','%s','%s')", name, address, tel);

	query_stat = mysql_query(connection, query); //mysql_query()�� �̿��ؼ� DB�� �����Ѵ�.
	if (query_stat != 0)
	{
		fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
		return 1;
	}

	mysql_close(connection);


}*/