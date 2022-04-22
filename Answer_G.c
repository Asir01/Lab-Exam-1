#include <stdio.h>
int main(){
int A,B,C;
scanf("%d %d %d",&A, &B, &C);
printf("", A,B,C);
	if(A<B && B>C && C>A){   //Yes Condition Apply
	printf("Yes");
		}
		else if (A==B && B==C && C==A){   //Yes Condition Apply
		printf("Yes");
		}
	else{     //No Condition Apply
		printf("No");
		}
}
