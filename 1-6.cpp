#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
	int num, i, check = 0;
	char ch;
	
	scanf("%d\n", &num);
	int list[num];
	memset(list, 0, num);
	for(int t = 0; t < num; t++)
		list[t] = 0;
	for(int t = 0; t < num; t++)
	{
		scanf("%c", &ch);
		while(ch != ' ' && ch != '\n')
		{
			list[t] = list[t] * 10 + (ch - 48);
			scanf("%c", &ch);
		}
	}
	for(int t = 0; t < num; t++)
	{
		if(list[t] == 0)
			continue;
		i = list[t];
		while(i != 1)
		{
			if(i % 2 == 0)
				i = i / 2;
			else
				i = (3 * i + 1) / 2;
			for(int j = 0; j < num; j++)
				if(i == list[j])
					list[j] = 1;
		}
	}
	for(int t = num - 1; t >= 0; t--)
		if(list[t] != 1)
			check++;
	for(int t = 0; t < num; t++)
		for(int n = 0; n < num - 1; n++)
		{
			if(list[n] > list[n + 1])
			{
				int temp = list[n];
				list[n] = list[n + 1];
				list[n + 1] = temp;
			}
		}
	
	for(int t = num - 1; t >= 0; t--)
	{
		if(list[t] != 1)
		{
			if(check > 1)
			{
				check--;
				printf("%d ", list[t]);
			}
			else
			{
				printf("%d\n", list[t]);
				break;
			}
		}
	}
	
	return 0;
}
