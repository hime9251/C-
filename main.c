#include <stdio.h>
#include <stdlib.h>


void btos(char animals[][100],int arraySize){//¨Ì³æ¦rªøµu
    int i ,j;
	printf("\n¨Ì³æ¦rªøµu±Æ¦C");
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

void atoz(char animals[][100],int arraySize){//¨Ì¦r¨å¶¶§Ç
    int i ,j;
    printf("\n¨Ì¦r¨å¶¶§Ç±Æ¦C");
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
printf("³æ¦rÁ`¼Æ¬°%d",sizeof(animals)/100);

btos(animals,sizeof(animals)/100);
atoz(animals,sizeof(animals)/100);
} 


   






