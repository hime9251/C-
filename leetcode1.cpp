#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include<limits.h>

//break �O�ھڳ̪񪺰j�� �S��if 
//�D��[0,1,0,3,12]0�ƨ�̫��L���Ǥ��� [1,3,12,0,0] 


int main() 
{	
	int numSize [5]={0,1,0,3,12};//--->[1,3,12,0,0]
	int size=sizeof(numSize)/sizeof(numSize[0]);//�}�C���� 4*�}�C�Ӽ� / �Ĥ@��O����Ӽ� 
	
	
	while(true){ //�P�_�}�C�O�_�����T�� 
		bool isok = true;//�]�}�C�@�}�l�O�諸 
		
		for(int i = 0 ; i +1 < size ; i++){//i=0,1,2,3  
			if(numSize[i]==0 && numSize[i+1]!=0  ){//����=0�åB�k�䤣��0 
				isok = false;//���@�Ӧa��� �אּfalse 
				int t = numSize[i]; 
				numSize[i] = numSize[i+1];
				numSize[i+1]=t;
				//�洫 
			}
		
		}
		if(isok){
			break;//break ���} while  ��ܰ}�C�O�諸 
		}
	}
	for(int i=0;i<size;i++){
		printf("%d\n",numSize[i]);
	} 
	
	
	printf("==========\n");
	
	//�t�� ������ 
	 /*
	for(int k=1 ; k < size ; k++){
	 
		bool isok = true;//�]�}�C�@�}�l�O�諸 
		
		for(int i = 0 ; i +1 < size ; i++){//i=0,1,2,3  
			if(numSize[i]==0 && numSize[i+1]!=0  ){//����=0�åB�k�䤣��0 
				isok = false;//���@�Ӧa��� �אּfalse 
				int t = numSize[i]; 
				numSize[i] = numSize[i+1];
				numSize[i+1]=t;
				//�洫 
			}
		
		}
		if(isok){
			break;//break ���}while ��ܰ}�C�O�諸 
		}
	}
	for(int i=0;i<size;i++){
		printf("%d\n",numSize[i]);
	}
	*/
	
	
	//�t�� 
	int ans[size]; //�]�@�Ӹ�numSize�@�˪��}�C 
	int j= 0;
	for(int i =0;i<size;i++){ 
		if(numSize[i]!=0){ 
			ans[j]=numSize[i];//���⤣�O0���g�X�� 
			j++;
		}
	}
	while(j<size){//��ѤU����0 
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



