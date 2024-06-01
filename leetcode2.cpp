#include <stdio.h>
#include <iostream>
//題目
//一天買一天賣 算出最多可以賺多少 每次只能交易一筆  "賣出後才可再買" 
 
int main(){ //day: 0 1 2 3 4 5
	int prices[6]={7,1,5,3,6,4};
	int priceSize = sizeof(prices)/sizeof(prices[0]);
	
	int total=0;
	for(int i = 0 ; i+1 < priceSize ; i++){
		if(prices[i] < prices[i+1]){
			total += prices[i+1] - prices[i];
		}
	}
	
	printf("%d",total);//1買5賣3買6賣  => (5-1)+(6-3)=7 
	
	return 0 ;
}
