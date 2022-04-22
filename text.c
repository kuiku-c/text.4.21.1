#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int my_len(char *arr)
//{
//	int *p = arr;
//	int *p1 = arr;
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		p++;
//		i++;
//	}
//	return p - p1;
//}
//int main()
//{
//	char arr[10] = "Zzha";
//	int ret = 0;
//	ret = my_len(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//typedef struct stu
//{
//	char name[20];
//	int year;
//	char sex[5];
//	char tel[20];
//}stu;
//void PP(stu * Z)
//{
//	printf("名字：%s; 年龄： %d; 性别： %s; 手机号： %s", Z->name, Z->year, Z->sex, Z->tel);
//}
//int main()
//{
//	stu Z = { "Zh", 20, "gm", "18888d888" };
//	PP(&Z);
//	return 0;
//}



typedef struct stu
{
	char name[20];
	int age;
	char sex[5];
	int tel;
}stu;
void PP(stu *TT)
{
	printf("姓名：%s; 年龄：%d; 性别： %s; 手机号：%d", TT->name, TT->age, TT->sex, TT->tel);
}
int main()
{
	stu bb = { "张粮成", 26, "男", 18325609992 };
	PP(&bb);
	return 0;
}