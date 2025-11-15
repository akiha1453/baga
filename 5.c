#include<stdio.h>
#include<string.h>
struct message {
	char phone[12];
	char mail[100];
};
struct student {
	char name[100];
	int age;
	char gender;
	double height;
	struct message msg;
};
int main() {
	struct student stu;
	strcpy_s(stu.name,100, "akiha");
	stu.age = 18;
	stu.gender = 'm';
	stu.height = 170;
	strcpy_s(stu.msg.phone,sizeof(stu.msg.phone), "13623372738");
	strcpy_s(stu.msg.mail,100, "cptbtptpbcptdtptpy@qq.com");
	printf("%s\n",stu.name);
	printf("%d\n",stu.age);
	printf("%c\n", stu.gender);
	printf("%lf\n", stu.height);
	printf("%s\n", stu.msg.phone);
	printf("%s\n", stu.msg.mail);
}