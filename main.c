#include <stdio.h>
#include <stdlib.h>


void btos(char animals[][100],int arraySize){//�̳�r���u
    int i ,j;
	printf("\n�̳�r���u�ƦC");
    for (i=0; i<arraySize; i++) {
    	for(j=i+1;j<arraySize;j++){
    		if(strlen(animals[i])<strlen(animals[j])){
    			char temp[50];
    			strcpy(temp,animals[i]);
				strcpy(animals[i],animals[j]);
				strcpy(animals[j],temp);
			}
		}	
	}
	for(i=0;i<arraySize;i++){
	printf("\n%s",animals[i]);
	}
}

void atoz(char animals[][100],int arraySize){//�̦r�嶶��
    int i ,j;
    printf("\n�̦r�嶶�ǱƦC");
    for (i=0; i<arraySize; i++) {
    	for(j=i+1;j<arraySize;j++){
    		if(strcmp(animals[i],animals[j])>0){
    			char temp[50];
    			strcpy(temp,animals[i]);
				strcpy(animals[i],animals[j]);
				strcpy(animals[j],temp);
			}
		}	
	}
	for(i=0;i<arraySize;i++){
	printf("\n%s",animals[i]);
	}
}



int main(int argc,char *argv[]) {
	char animals[][100]={"tiger","lion", "elephant","giraffe","leopard","panda","cheetah","bear","rabbit","cat","bat","zebra","monkey","donkey","ox","rat","snake","horse","hen",
	"goat","sheep","dog","pig","wolf","gorilla","alligator","orca","owl","ape","pelican","quail","raccoon","rattlesnake","rooster","mule","flamingo","grasshopper","hawk","eagle"};
printf("��r�`�Ƭ�%d",sizeof(animals)/100);

btos(animals,sizeof(animals)/100);
atoz(animals,sizeof(animals)/100);
} 


   






