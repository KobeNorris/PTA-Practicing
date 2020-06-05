#include <cstdio>
#include <cstring>
#include <algorithm>
typedef struct node{
	char name[9];
	int height;
}student;

using namespace std;
bool cmp(student A, student B);
int main(int argc, char * argv[])
{
	int size, number, line, last, index = 0, flag;
	scanf("%d %d", &size, &number);
	line = size / number;
	last = size % number + line;
	student list[size];
	for(int t = 0; t < size; t++)
		scanf("%s %d", list[t].name, &list[t].height);
	sort(list, list + size, cmp);
	for(int t = 0, flag = 0; t < last; t++)
	{
		if(t < last / 2)
		{
			if(flag == 0)
			{
				printf("%s", list[(last / 2 - t) * 2 - 1].name);
				flag++;
			}
			else
				printf(" %s", list[(last / 2 - t) * 2 - 1].name);
		}
		else if(t == last / 2)
		{
			if(flag == 0)
			{
				printf("%s", list[0].name);
				flag++;
			}
			else
				printf(" %s", list[0].name);
		}
		else if(t > last / 2)
			printf(" %s", list[(t - last / 2) * 2].name);
	}
	index += last;
	for(int i = 0; i < number - 1; i++)
	{
		for(int t = 0, flag = 0; t < line; t++)
		{
			if(t < line / 2)
			{
				if(flag == 0)
				{
					printf("\n%s", list[(line / 2 - t) * 2 - 1 + index].name);
					flag++;
				}
				else
					printf(" %s", list[(line / 2 - t) * 2 - 1 + index].name);
			}
			else if(t == line / 2)
			{
				if(flag == 0)
				{
					printf("\n%s", list[0 + index].name);
					flag++;
				}
				else
					printf(" %s", list[0 + index].name);
			}
			else if(t > line / 2)
				printf(" %s", list[(t - line / 2) * 2 + index].name);
		}
		index += line;
	}
	
	return 0;
}

bool cmp(student A, student B)
{
	if(A.height == B.height)
	{
		for(int t = 0; t < 8; t++)
		{
			if(A.name[t] != B.name[t])
				return A.name[t] < B.name[t];
		}
	}
	else
		return A.height > B.height;
}
