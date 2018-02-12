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
	MYSQL *connection = NULL, conn; //MYSQL DB연결했을떄, 이 연결을 다루기위해 사용되는 구조체이다.
	MYSQL_RES *sql_result; //(SELECT,SHOW)등의 쿼리를 내렸을떄 그 결과를 다루기 위해 사용되는 구조체이다.
	MYSQL_ROW sql_row; //이것은 데이타의 하나의 ROW값을 가리킨다.만약 ROW값이 없다면 NULL을 가르키게 된다
	int query_stat;

	char name[12];
	char address[80];
	char tel[12];
	char query[255];

	mysql_init(&conn); //MYSQL연결을 초기화 한다.

	connection = mysql_real_connect(&conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	//MYSQL서버에 실제로 접근하게된다.

	if (connection == NULL)
	{
		fprintf(stderr, "Mysql connection error : %s", mysql_error(&conn));
		return 1;
	}
	//연결에 성공하면 connection 핸들 값을 넘겨주고 실패하게 되면 NULL값을 넘겨 주게 된다. 어떤 이유로 실패
	//했는지 알아보고 싶다면 mysql_error()을 사용
	
	query_stat = mysql_query(connection, "select *from t_login_user");
	
	if (query_stat !=0)
	{
		fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
		return 1;
	}

	sql_result = mysql_store_result(connection); //쿼리의 결과값을 되돌려 받을수있다.

	printf("%+11s %-30s %-10s", "이름", "주소", "전화번호");
	while ((sql_row = mysql_fetch_row(sql_result)) != NULL) //row단위로 결과값을 가져올수있다.
	{
		printf("%+11s %-30s %-10s", sql_row[0], sql_row[1], sql_row[2]);
	} 

	mysql_free_result(sql_result); //쿼리결과값을 더이상 필요가 없을떄 메모리에 되돌려준다.

	
	printf("이름:");
	fgets(name, 12, stdin);
	CHOP(name);

	printf("주소:");
	fgets(address, 80, stdin);
	CHOP(address);

	printf("전화:");
	fgets(tel, 12, stdin);
	CHOP(tel);

	//fgets()함수를 통하여서 입력받고 입력받은 정보로 쿼리를 만든다

	sprintf(query, "insert into address values" "('%s','%s','%s')", name, address, tel);

	query_stat = mysql_query(connection, query); //mysql_query()을 이용해서 DB에 적재한다.
	if (query_stat != 0)
	{
		fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
		return 1;
	}

	mysql_close(connection);


}*/