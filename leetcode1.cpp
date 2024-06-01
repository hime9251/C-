#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include<limits.h>

//break 是根據最近的迴圈 沒有if 
//題目[0,1,0,3,12]0排到最後其他順序不變 [1,3,12,0,0] 


int main() 
{	
	int numSize [5]={0,1,0,3,12};//--->[1,3,12,0,0]
	int size=sizeof(numSize)/sizeof(numSize[0]);//陣列長度 4*陣列個數 / 第一位記憶體個數 
	
	
	while(true){ //判斷陣列是否為正確的 
		bool isok = true;//設陣列一開始是對的 
		
		for(int i = 0 ; i +1 < size ; i++){//i=0,1,2,3  
			if(numSize[i]==0 && numSize[i+1]!=0  ){//左邊=0並且右邊不為0 
				isok = false;//有一個地方錯 改為false 
				int t = numSize[i]; 
				numSize[i] = numSize[i+1];
				numSize[i+1]=t;
				//交換 
			}
		
		}
		if(isok){
			break;//break 離開 while  表示陣列是對的 
		}
	}
	for(int i=0;i<size;i++){
		printf("%d\n",numSize[i]);
	} 
	
	
	printf("==========\n");
	
	//另解 不推薦 
	 /*
	for(int k=1 ; k < size ; k++){
	 
		bool isok = true;//設陣列一開始是對的 
		
		for(int i = 0 ; i +1 < size ; i++){//i=0,1,2,3  
			if(numSize[i]==0 && numSize[i+1]!=0  ){//左邊=0並且右邊不為0 
				isok = false;//有一個地方錯 改為false 
				int t = numSize[i]; 
				numSize[i] = numSize[i+1];
				numSize[i+1]=t;
				//交換 
			}
		
		}
		if(isok){
			break;//break 離開while 表示陣列是對的 
		}
	}
	for(int i=0;i<size;i++){
		printf("%d\n",numSize[i]);
	}
	*/
	
	
	//另解 
	int ans[size]; //設一個跟numSize一樣的陣列 
	int j= 0;
	for(int i =0;i<size;i++){ 
		if(numSize[i]!=0){ 
			ans[j]=numSize[i];//先把不是0的寫出來 
			j++;
		}
	}
	while(j<size){//把剩下的放0 
		ans[j]=0;
		j++;
	}
	for(int j=0;j<size;j++){
		numSize[j]=ans[j];
		printf("%d\n",numSize[j]);
	}
	printf("==========\n");
	
	
	
	
	return 0;
}



