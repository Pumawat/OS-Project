#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,N,initial;
	printf("Enter the number of requests: ");
	scanf("%d",&N);
	int a[N];
	printf("Enter the requests: ");
	for (i = 0; i < N; ++i){
		scanf("%d",&a[i]);
	}
	printf("Enter initial position of R/W head: ");
	scanf("%d",&initial);
	int seek_time=0;
	printf("%d ",initial );
	for(i=0;i<N;i++)
	{
		printf("%d ", a[i] );
		seek_time += abs(a[i] - initial);
		initial = a[i];
	}
	printf("\nSeek Time: %d\n", seek_time);
}




















