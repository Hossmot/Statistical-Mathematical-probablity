#include<stdio.h>
#include<stdlib.h>
#include<time.h>
long long int N[100001][1001],a,R=0,r,n,m,F=0, L=0,lock=0, lockcount=0;
main()
{
	srand(time(NULL));
	printf("������ ���� ���� ���ڸ� �ߺ��Ͽ� ������ Ƚ����ŭ �̾��� ��, ��� ¦���� ��츦 ���� ���α׷��Դϴ�.\n");
	while(R<=100000){
		L=0 ,lock=0, lockcount=0;
	printf("�� �� �������� �Է��Ͽ� �ֽʽÿ�(�ִ� 100000��).\n");
	scanf("%d", &R);
	if(R>100000){
		break;
	}
	printf("�� ������ �ڿ��� �߿� ���� ������ �Է��Ͽ� �ֽʽÿ�.\n");
	scanf("%d", &m);
	printf("�� ���� ���� ������ �Է��Ͽ� �ֽʽÿ�.(�ִ� 1000)\n");
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
	printf("%d��\n", L);
	printf("%d���� �����\n", lockcount);
}
}

	
