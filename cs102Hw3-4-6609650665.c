#include <stdio.h>
#include <limits.h>

int main(){
	
	int N, i, j, sum = 0, k = 0, max = INT_MIN, m = 0;
	
	scanf("%d",&N);
	
	int matric[N][N];
	int matric1[100];
	int matric2[100];
	
	printf("\n");
	
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N;j++)
		{
			scanf("%d",&matric[i][j]);
		}
		printf("\n");
	}
	
	if(N % 2 == 0)
	{
		for(i = 0;i < N;i++)
		{
			for(j = 0;j < N;j++)
			{
				if(j == N - j - 2)
				{
					sum = matric[i][j] + sum;
					continue;
				}
				if(j == N - j)
				{
					sum = matric[i][j] + sum;
					sum = sum/2;
				    matric2[m] = sum;
				    m++;
				    sum = 0;
				    break;
				}
			}
		}
		
		for(i = 0;i < m;i++)
		{
			sum = matric2[i] + sum;
		}
		matric1[k] = sum;
		k++;
		sum = 0;
		m = 0;
		
		for(j = 0;j < N;j++)
		{
			for(i = 0;i < N;i++)
			{
				if(i == N - i - 2)
				{
					sum = matric[i][j] + sum;
					continue;
				}
				if(i == N - i)
				{
					sum = matric[i][j] + sum;
					sum = sum/2;
					matric2[m] = sum;
					m++;
					sum = 0;
					break;
				}
			}
		}
		
		for(i = 0;i < m;i++)
		{
			sum = matric2[i] + sum;
		}
		matric1[k] = sum;
		k++;
		sum = 0;
		m = 0;
		
		for(i = 0;i < N;i++)
		{
			for(j = 0;j < N;j++)
			{
				if(i == j)
				{
					sum = matric[i][j] + sum;
					break;
				}
			}
		}
		matric1[k] = sum;
		k++;
		sum = 0;
		
		for(i = 0;i < N;i++)
		{
			for(j = N - 1;j >= 0;j--)
			{
				if((i + j) + 1 == N)
				{
					sum = matric[i][j] + sum;
					break;
				}
			}
		}
		matric1[k] = sum;
		k++;
		sum = 0;
		
		for(i = 0; i < k;i++)
		{
			if(matric1[i] > max)
			{
				max = matric1[i];
			}
		}
		printf("%d",max);
	}
	else
	{
		for(i = 0;i < N;i++)
		{
			for(j = 0;j < N;j++)
			{
				if(j == N - j - 1)
				{
					sum = matric[i][j] + sum;
					break;
				}
			}
		}
		matric1[k] = sum;
		k++;
		sum = 0;
		
		for(i = 0;i < N;i++)
		{
			if(i == N - i - 1)
			{
			    for(j = 0;j < N;j++)
				{
					sum = matric[i][j] + sum;
				}
				break;
			}
			else
			{
				continue;
			}
		}
		matric1[k] = sum;
		k++;
		sum = 0;
		
		for(i = 0;i < N;i++)
		{
			for(j = 0;j < N;j++)
			{
				if(i == j)
				{
					sum = matric[i][j] + sum;
					break;
				}
			}
		}
		matric1[k] = sum;
		k++;
		sum = 0;
		
		for(i = 0;i < N;i++)
		{
			for(j = N - 1;j >= 0;j--)
			{
				if((i + j) + 1 == N)
				{
					sum = matric[i][j] + sum;
					break;
				}
			}
		}
		matric1[k] = sum;
		k++;
		sum = 0;
		
		for(i = 0; i < k;i++)
		{
			if(matric1[i] > max)
			{
				max = matric1[i];
			}
		}
		printf("%d",max);
	}
	
	return 0;
	
}
