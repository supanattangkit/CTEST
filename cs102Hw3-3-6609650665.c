#include <stdio.h>
#include <string.h>

int main(){
	

	
	char name[700];
	char name1[700];
	char name2[700];
	char name3[700];
	int i;
	int k = 0;
	int month = 0;
	int m = 0;
	int a = 0;
	int j;
	int y = 0;
	
	scanf("%s",&name);
	
	printf("\n");
	
	for(i = 0;i < strlen(name);i++)
	{
		printf("%c\n\n",name[i]);
	}
	
	for(i = 0;i < strlen(name);i++)
	{
		if(i % 2 == 0)
		{
			if(name[i] == '1')
			{
				name1[k] = name[i] + name[i + 1];
				printf("%d\n\n",name1[k]);
				k++;
				a++;
				if(name[i] < name[i + 2] || i + 2 == strlen(name))
				{
					if(a == 1)
					{
						month = month + 1;
						name2[m] = month;
						printf("%5d",name2[0]);
						m++;
						a = 0;
						month = 0;
						continue;
					}
					else
					{
						month = month + 1;
					    for(i = 0;i < 1;i++)
					    {
						    for(j = 1;j < k;j++)
						    {
							    if(name1[i] != name1[j] && j == 1)
							    {
								   name3[y] = name1[j];
								   y++;
								   month = month + 1;
								   continue;
							    }
							    if(name1[i] != name1[j])
							    {
								    for(i = 0;i < y;i++)
								    {
									    if(name1[j] != name3[i])
									    {
										    if(i == y - 1)
										    {
											   month = month + 1;
											   break;
										    }
							                else
										    {
											   continue;
										    }
									    }
									    if(name1[j] == name3[i])
									    {
										    break;
									    }
								    }
								    continue;
							    }
						        if(name1[i] == name1[j])
							    {
								    continue;
							    }
						    }
					    }
					    name2[m] = month;
					    printf("%7d",name2[0]);
					    m++;
					    month = 0;
					    break;
				    }
				}   
				else
				{
					continue;
				}
		    }
		    else
		    {
		    	continue;
			}
		}
		else
		{
			continue;
		}
	}
	
	return 0;
	
}
