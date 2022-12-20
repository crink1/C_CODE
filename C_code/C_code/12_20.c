#include<stdio.h>
struct Student
{
	char name[20];//名字
	int age;//年龄
	char id[15];//学号
	float score;//成绩
};


int main()
{
	struct Student s1 = { "张三", 20, "2022010823", 88.5f };
	printf("%s %d %s %f\n", s1.name, s1.age, s1.id, s1.score);

	struct Student* ps = &s1;
	printf("%s %d %s %f\n", (*ps).name, (*ps).age, (*ps).id, (*ps).score);
	printf("%s %d %s %f\n", ps->name, ps->age, ps->id, ps->score);


	return 0;
}
