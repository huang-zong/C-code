#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////�������
//int main()
//{
//	//����
//	int num = 0;//��ʼ��
//	printf("���룺");
//	scanf("%d", &num);
//	//���
//	printf("�����%d", num);
//	return 0;
//}

//���������
//int main()
//{
//	//����
//	float num = 0;
//	printf("���룺");
//	scanf("%f", &num);
//	//���
//	printf("�����%.3f", num);
//	
//	return 0;
//}

////����ַ�
//int main()
//{
//	//����
//	char ch = 0;
//	scanf("%c",&ch);
//	//���
//	printf("%c", ch);
//
//	return 0;
//
//}

//��������ڶ�����
//int main()
//{
//	//��������
//	int num[3] = { 0 };
//	//ѭ������
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		scanf("%d",&num[i]);
//	}
//	//���
//	printf("%d", num[1]);
//	return 0;
//}

//����ַ�����
//int main()
//{
//	//����
//	char ch = 0;
//	scanf("%c", &ch);
//	//���
//	printf("%c%c%c\n", ch, ch, ch);
//	printf("%c%c%c\n", ch, ch, ch);
//	printf("%c%c%c\n", ch, ch, ch);
//
//	return 0;
//}

//����ַ�����
//int main()
//{
//	//����
//	char ch = 0;
//	scanf("%c", &ch);
//	//���
//	printf("  %c  \n", ch);
//	printf(" %c%c%c \n", ch, ch, ch);
//	printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);
//	printf(" %c%c%c \n", ch, ch, ch);
//	printf("  %c  \n", ch);
//	return 0;
//}

//�ַ�תASCII��
//int main()
//{
//	//����ַ�
//	char ch = 0;
//	scanf("%c", &ch);
//	//���ASCII��
//	printf("%d", ch);
//	return 0;
//}

//������ת������ʵ����������
//#include <math.h>
//int main()
//{
//	//���븡����
//	float num = 0;
//	scanf("%f", &num);
//	//���
//	int num1 = round(num);//round�⺯�����Ը�������������
//	printf("%d", num1);
//	return 0;
//}

//�ɼ��������
//int main()
//{
//	//����ɼ�����Χ0-100
//	int score1 = 0;
//	int score2 = 0;
//	int score3 = 0;
//	scanf("%d %d %d", &score1, &score2, &score3);
//	//����ɼ�
//	printf("score1=%d,score2=%d,score3=%d", score1, score2, score3);
//	return 0;
//}

//ѧ��������Ϣ�������
//int main()
//{
//	//����ѧ�ź����Ƴɼ�
//	long id = 0;
//	float score1 = 0;
//	float score2 = 0;
//	float score3 = 0;
//	scanf("%ld;%f,%f,%f", &id, &score1, &score2, &score3);
//	//����ұ���2λС��
//	printf("The each subject score of No.%ld is %.2f,%.2f,%.2f.", id, score1, score2, score3);
//	return 0;
//}


//���������������
//int main()
//{
//	//�����������
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year,&month,&date);
//	//���
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}

//���ո�ʽ���벢�������
//int main() {
//	//���ո�ʽ����
//	int num1 = 0;
//	int num2 = 0;
//	int swap = 0;
//	scanf("a=%d,b=%d", &num1, &num2);
//	//�������
//	swap = num1;
//	num1 = num2;
//	num2 = swap;
//	printf("a=%d,b=%d", num1, num2);
//	return 0;
//}

//ʵ����ĸ�Ĵ�Сдת���������������
int main() {
	//�����д��ĸ
	char ch = 0;
	//getchar��ȡ��������һ���ַ� https://www.jb51.net/article/234742.htm
	while ((ch = getchar()) != EOF) {
		getchar();//��ȡ�����ַ�'\n'
		//��Сд��ĸASCII�����32����32���Сд
		putchar(ch + 32);
		printf("\n");
	}
	
	return 0;

}
