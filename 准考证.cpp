#include <cstdio>
#include <iostream>
#include <vector>

typedef struct node{
	char Class;
	long long id;
	int score;
}student;

//int find_max(int count, student new_list[]);
//void order1(char * order, student list[], int stu_num);
void order2(char * order, student list[], int stu_num);
void order3(char * order, student list[], int stu_num);
int main(void)
{
	int stu_num, ord_num, t_case;
	char order[7] = {};
	
	scanf("%d %d", &stu_num, &ord_num);
	getchar();
	student list[stu_num];
	
	for(int t = 0; t < stu_num; t++)
	{
		scanf("%c%lld %d", &list[t].Class, &(list[t].id), &(list[t].score));
		getchar();
	}
	for(int t = 0; t < ord_num; t++)
	{
		for(int i = 0; i < 7; i++)
			order[i] = 0;
		scanf("%d %s", &t_case, order);
		printf("Case %d: %d %s\n", t, t_case, order);
		switch(t_case)
		{
			//case 1:order1(order, list, stu_num);break;
			case 2:order2(order, list, stu_num);break;
			default:order3(order, list, stu_num);
		}
	}
		
	return 0;
}

/*int find_max(int count, student new_list[])
{
	int max = 0;
	
	
	
	
	return max;
}

void order1(char * order, student list[], int stu_num)
{
	int count = 0, max;
	student new_list[stu_num];
	for(int t = 0; t < stu_num; t++)
		if(list[t].id[0] == order[0])
		{
			new_list[count].id = list[t].id;
			new_list[count].score = list[t].score;
			count++;
		}s
	for(int t = 0; t < count; t++)
	{
		max = find_max(count, new_list);
	}
			
	
	
	
	return 0;
}*/

void order2(char * order, student list[], int stu_num)
{
	int sum = 0, num = 0, n = 0;
	
	for(int t = 0; t < 3; t++)
	{
		if(order[t] == 0)
			break;
		num = num * 10 + (order[t] - 48);
	}
	for(int t = 0; t < stu_num; t++)
		if(num == list[t].id / 1000000000)
		{
			sum += list[t].score;
			n++;
		}
	if(n == 0)
	{
		printf("NA\n");
		return;
	}
	printf("%d %d\n", n, sum);
	
	return;
}

void order3(char * order, student list[], int stu_num)
{
	int num = 0;
	
	for(int t = 0; t < 3; t++)
	{
		if(order[t] == 0)
			break;
		num = num * 10 + (order[t] - 48);
	}
	for(int t = 0; t < stu_num; t++)
	{
		
	}
	
	return;
}
