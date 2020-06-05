#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <algorithm>

using namespace std;
int main(void)
{
	int size, time, former, later, temp, index;
	scanf("%d", &size);
	unordered_map<int, int> num_map;
	for(int t = 0; t < size; t++)
	{
		scanf("%d %d", &former, &later);
		num_map[former + 1] = later + 1;
		num_map[later + 1] = former + 1;
	}
	scanf("%d", &time);
	int array[time];
	for(int t = 0; t < time; t++)
	{
		scanf("%d", &temp);
		array[t] = temp + 1;
	}
	for(int i = 0; i < time - 1; i++)
	{
		if(array[i] == 0)
			continue;
		for(int j = i + 1; j < time; j++)
		{
			if(array[j] == 0)
				continue;
			if(num_map[array[i]] == array[j])
			{
				array[i] = 0;
				array[j] = 0;
			}
		}
	}
	sort(array, array + time);
	for(index = 0; index < time; index++)
		if(array[index] != 0)
		{
			printf("%d\n", time - index);
			break;
		}
	if(index == time)
		printf("0\n");
	if(index < time)
	{
		printf("%05d", array[index] - 1);
		index++;
	}
	for(; index < time; index++)
		printf(" %05d", array[index] - 1);
	
	return 0;
}
