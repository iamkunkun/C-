#include<stdio.h>
struct students {
	int age;
	char sex;
	double score;
};

int main(){
	struct students s1={
		19,
		'M',
		94
	};
	printf("%d\t%c\t%lf\n",s1.age,s1.sex,s1.score);
	struct students * p = &s1;
	p->age=20;
	p->sex='M';
	p->score=100;
	printf("%d\t%c\t%lf\n",s1.age,s1.sex,s1.score);
	
	return 0;
}
