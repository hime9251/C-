#include <stdio.h>
#include <iostream>
//�D��
//�@�ѶR�@�ѽ� ��X�̦h�i�H�Ȧh�� �C���u�����@��  "��X��~�i�A�R" 
 
int main(){ //day: 0 1 2 3 4 5
	int prices[6]={7,1,5,3,6,4};
	int priceSize = sizeof(prices)/sizeof(prices[0]);
	
	int total=0;
	for(int i = 0 ; i+1 < priceSize ; i++){
		if(prices[i] < prices[i+1]){
			total += prices[i+1] - prices[i];
		}
	}
	
	printf("%d",total);//1�R5��3�R6��  => (5-1)+(6-3)=7 
	
	return 0 ;
}
