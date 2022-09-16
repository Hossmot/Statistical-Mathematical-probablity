#include<stdio.h>
#include<stdlib.h>
#include<time.h>
long long int N[100001][1001],a,R=0,r,n,m,F=0, L=0,lock=0, lockcount=0;
main()
{
	srand(time(NULL));
	printf("지정된 범위 내의 숫자를 중복하여 정해진 횟수만큼 뽑았을 때, 모두 짝수인 경우를 새는 프로그램입니다.\n");
	while(R<=100000){
		L=0 ,lock=0, lockcount=0;
	printf("몇 번 시행할지 입력하여 주십시오(최대 100000번).\n");
	scanf("%d", &R);
	if(R>100000){
		break;
	}
	printf("몇 까지의 자연수 중에 수를 뽑을지 입력하여 주십시오.\n");
	scanf("%d", &m);
	printf("몇 개의 수를 뽑을지 입력하여 주십시오.(최대 1000)\n");
	scanf("%d", &n); 
	for(lock=0;lock<1;lock){
	for(r=0;r<=R;r++){      
	for(a=1;a<=n;a++)
	N[r][a]=rand()%m+1;
	for(a=1;a<=n;a++){
		printf("%d ", N[r][a]);
		if(N[r][a]%2==0){
			F++;
		}
	}
	if(F==n){
		L++;
		printf("---");
	}
	F=0;
	printf("%\n");
}
if(L>0){
	lock++;
}else{
	lockcount++;
}
}
	printf("%d번\n", L);
	printf("%d번의 재시행\n", lockcount);
}
}

	
