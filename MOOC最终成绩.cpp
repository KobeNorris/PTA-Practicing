#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

typedef struct node{
	char id[21];
	int p;
	int mid;
	int fin;
	int g;
}data;

using namespace std;

bool cmp(data a, data b)
{
	if(a.p == b.p)
	{
		if(a.fin == b.fin)
		{
			for(int t = 0; t < 21; t++)
				if(a.id[t] != b.id[t])
					a.id[t] > b.id[t];
		}
		else
			return a.fin > b.fin;
	}
	else
		return a.g > b.g;
}
int main(void)
{
	int num_p, num_mid, num_fin, student_num = 0, check = 0;
	int mid, fin;
	float g;
	char id[21];
	
	scanf("%d%d%d", &num_p, &num_mid, &num_fin);
	getchar();
	data list[num_p + num_mid + num_fin];
	for(int i = 0; i < num_p + num_mid + num_fin; i++)
	{
		for(int j = 0; j < 21; j++)
			list[i].id[j] = 0;
		list[i].p = -1;
		list[i].mid = -1;
		list[i].fin = -1;
	}
	for(int t = 0; t < num_p; t++)
		scanf("%s %d", list[t].id, &list[t].p);
	student_num = num_p;
	for(int t = 0; t < num_mid; t++)
	{
		scanf("%s %d", id, &mid);
		for(int i = 0; i < student_num; i++)
		{
			if(strcmp(id, list[i].id) == 0)
			{
				check = 1;
				list[i].mid = mid;
				break;
			}	
		}
		if(check == 0)
		{
			strcpy(list[student_num].id, id);
			list[student_num].mid = mid;
			student_num++;
		}
		check = 0;
	}
	for(int t = 0; t < num_fin; t++)
	{
		scanf("%s %d", id, &fin);
		for(int i = 0; i < student_num; i++)
		{
			if(strcmp(id, list[i].id) == 0)
			{
				check = 1;
				list[i].fin = fin;
				break;
			}	
		}
		if(check == 0)
		{
			strcpy(list[student_num].id, id);
			list[student_num].fin = fin;
			student_num++;
		}
		check = 0;
	}
	for(int t = 0; t < student_num; t++)
	{
		if(list[t].fin < list[t].mid)
		{
			g = list[t].fin * 0.6 + list[t].mid * 0.4;
			list[t].g = (int)g;
			if(g - list[t].g >= 0.5)
				list[t].g++;
		}
		else
			list[t].g = list[t].fin;
	}
	sort(list, list + student_num + 1,cmp);
	for(int t = 0; t < student_num; t++)
	{
		if(list[t].p < 200)
			continue;
		if(list[t].g < 60)
			break;
		printf("%s %d %d %d %d\n", list[t].id, list[t].p, list[t].mid, list[t].fin, list[t].g);
	}

	return 0;
}
