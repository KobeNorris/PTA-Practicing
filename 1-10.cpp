#include <stdio.h>

int main(int argc, char * argv[])
{
	char sentence[81] = "", ch, list[80][81] = {};
	int i = 0, j = 0, count = 1;
	
	scanf("%c", &ch);
	while(ch != '\n')
	{
		if(ch == ' ')
		{
			list[i][j] = '\0';
			j = 0;
			i++;
		}
		else
		{
			list[i][j] = ch;
			j++;
		}
		scanf("%c", &ch);
	}
	for(int t = i; t >= 0; t--)
	{
		if(t == 0)
			printf("%s", list[t]);
		else
			printf("%s ", list[t]);
	}
	
	return 0;
}
