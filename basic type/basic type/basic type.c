#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////输出整数
//int main()
//{
//	//输入
//	int num = 0;//初始化
//	printf("输入：");
//	scanf("%d", &num);
//	//输出
//	printf("输出：%d", num);
//	return 0;
//}

//输出浮点数
//int main()
//{
//	//输入
//	float num = 0;
//	printf("输入：");
//	scanf("%f", &num);
//	//输出
//	printf("输出：%.3f", num);
//	
//	return 0;
//}

////输出字符
//int main()
//{
//	//输入
//	char ch = 0;
//	scanf("%c",&ch);
//	//输出
//	printf("%c", ch);
//
//	return 0;
//
//}

//数组输出第二个数
//int main()
//{
//	//定义数组
//	int num[3] = { 0 };
//	//循环输入
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		scanf("%d",&num[i]);
//	}
//	//输出
//	printf("%d", num[1]);
//	return 0;
//}

//输出字符矩形
//int main()
//{
//	//输入
//	char ch = 0;
//	scanf("%c", &ch);
//	//输出
//	printf("%c%c%c\n", ch, ch, ch);
//	printf("%c%c%c\n", ch, ch, ch);
//	printf("%c%c%c\n", ch, ch, ch);
//
//	return 0;
//}

//输出字符菱形
//int main()
//{
//	//输入
//	char ch = 0;
//	scanf("%c", &ch);
//	//输出
//	printf("  %c  \n", ch);
//	printf(" %c%c%c \n", ch, ch, ch);
//	printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);
//	printf(" %c%c%c \n", ch, ch, ch);
//	printf("  %c  \n", ch);
//	return 0;
//}

//字符转ASCII码
//int main()
//{
//	//输出字符
//	char ch = 0;
//	scanf("%c", &ch);
//	//输出ASCII码
//	printf("%d", ch);
//	return 0;
//}

//浮点数转整数，实现四舍五入
//#include <math.h>
//int main()
//{
//	//输入浮点数
//	float num = 0;
//	scanf("%f", &num);
//	//输出
//	int num1 = round(num);//round库函数，对浮点数四舍五入
//	printf("%d", num1);
//	return 0;
//}

//成绩输入输出
//int main()
//{
//	//输入成绩，范围0-100
//	int score1 = 0;
//	int score2 = 0;
//	int score3 = 0;
//	scanf("%d %d %d", &score1, &score2, &score3);
//	//输出成绩
//	printf("score1=%d,score2=%d,score3=%d", score1, score2, score3);
//	return 0;
//}

//学生基本信息输入输出
//int main()
//{
//	//输入学号和三科成绩
//	long id = 0;
//	float score1 = 0;
//	float score2 = 0;
//	float score3 = 0;
//	scanf("%ld;%f,%f,%f", &id, &score1, &score2, &score3);
//	//输出且保留2位小数
//	printf("The each subject score of No.%ld is %.2f,%.2f,%.2f.", id, score1, score2, score3);
//	return 0;
//}


//出生日期输入输出
//int main()
//{
//	//输入出生日期
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year,&month,&date);
//	//输出
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}

//按照格式输入并交换输出
//int main() {
//	//按照格式输入
//	int num1 = 0;
//	int num2 = 0;
//	int swap = 0;
//	scanf("a=%d,b=%d", &num1, &num2);
//	//交换输出
//	swap = num1;
//	num1 = num2;
//	num2 = swap;
//	printf("a=%d,b=%d", num1, num2);
//	return 0;
//}

//实现字母的大小写转换，多组输入输出
int main() {
	//输入大写字母
	char ch = 0;
	//getchar读取缓冲区第一个字符 https://www.jb51.net/article/234742.htm
	while ((ch = getchar()) != EOF) {
		getchar();//读取结束字符'\n'
		//大小写字母ASCII码相差32，加32输出小写
		putchar(ch + 32);
		printf("\n");
	}
	
	return 0;

}
