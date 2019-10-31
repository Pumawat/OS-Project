#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,N,H,limit,c,j;
	printf("Enter the number of requests: ");
	scanf("%d",&N);
	int a[N]={0},v[N]={0};
	printf("Enter the requests: ");
	for(i=0;i<N;++i){
		scanf("%d",&a[i]);
		v[i] = 0;
	}
	printf("Enter the cylinder size: ");
	scanf("%d",&limit);

	printf("Enter initial position of R/W head: ");
	scanf("%d",&H);

	printf("Enter choice\n1 for right\n2 for left\n");
	scanf("%d",&c);

	int seek_time=0;
	printf("%d  ",H );
	if(c==1){
		for(i=H;i<limit;i++){
			for(j=0;j<N;j++){
				if(a[j] == i && v[j] == 0){
					printf("%d  ", a[j]);
					v[j] = 1;
					seek_time += abs(a[j] - H);
					H = a[j];
				}
			}
		}
		for(i=H;i>=0;i--){
			for(j=0;j<N;j++){
				if(a[j] == i && v[j] == 0){
					printf("%d  ", a[j]);
					v[j] = 0;
					seek_time += abs(a[j] - H);
					H = a[j];
				}
			}
		}
	}
	else{
		for(i=H;i>=0;i--){
			for(j=0;j<N;j++){
				if(a[j] == i && v[j] == 0){
					printf("%d  ", a[j]);
					v[j] = 1;
					seek_time += abs(a[j] - H);
					H = a[j];
				}
			}
		}
		for(i=H;i<limit;i++){
			for(j=0;j<N;j++){
				if(a[j] == i && v[j] == 0){
					printf("%d  ", a[j]);
					v[j] = 1;
					seek_time += abs(a[j] - H);
					H = a[j];
				}
			}
		}
	}
	printf("\nSeek Time: %d\n", seek_time);
}