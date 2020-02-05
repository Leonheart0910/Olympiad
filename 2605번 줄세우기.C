#include <stdio.h>

int main(){
	int i, j, num, index, temp=0;
	int a[100]={0,}, b[100]={0,};
	
	scanf("%d", &num);
	
	for(i=0; i<num; ++i){
		a[i] = (i+1);	
	}
	
	for(i=0; i<num; ++i){
		scanf("%d", &index);
		for(j=0; j<index; ++j){	
			temp = a[i-j];
			a[i-j] = a[i-j-1];
			a[i-j-1] = temp;
		}
	}

	for(i=0; i<num; ++i){
		printf("%d ", a[i]);	
	}
	return 0;
}
