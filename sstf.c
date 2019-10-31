#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,N,H,L,j,C,prev_H,seek_time=0;
	printf("Enter the number of requests: ");
	scanf("%d",&N);
	int a[N]={0},v[N]={0};
	printf("Enter the requests: ");
	for (i=0;i<N;++i){
		scanf("%d",&a[i]);
		v[i]=0;
	}
	printf("Enter initial position of R/W head: ");
	scanf("%d",&H);
	printf("%d ",H );
	int n = N;
	while(n--){
		int min = 1e9;
		int min_track_number, position;
		for(i=0;i<N;i++){
			if(abs(H-a[i])<min && v[i]==0){
				min = abs(H-a[i]);
				min_track_number = a[i];
				position = i;
			}
		}
		H = a[position];
		v[position] = 1;
		printf("%d ",min_track_number);
		seek_time += min;
	}
	printf("\nSeek Time: %d\n", seek_time);
}