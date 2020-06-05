#include <stdio.h>
#define start 32
#define end 126

int main(int argc, char * argv[])
{
	int flag = 0, words[95] = {};
	char ch = 0;
	
	while(flag < 2)
	{
		scanf("%c", &ch);
		if(ch == '\n')
			flag++;
		else
		{
			if(words[ch - 32] == 0)
			{
				printf("%c", ch);
				words[ch - 32] = 1;
			}
		}
	}
	
	return 0;
}
