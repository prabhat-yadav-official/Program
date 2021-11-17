#include <stdio.h>
#define SIZE 100
/***************Intersection of set***********************************/
int *IntersectionOfSet(int set1[],int set2[],int s1,int s2){
    static int InterSet[2*SIZE];
    int i=0,j=0,k=0;
    while(i<s1&&j<s2){
        if(set1[i]==set2[j]){
            InterSet[k++]=set1[i++];
            j++;
        }
        else{
            if(set1[i]<set2[j])
                i++;
            else
                j++;
        }
    }
  return InterSet;
}
/*********Printing Sets************************************************/
void PrintSets(int *set){
	printf("{");
	for(int i=0;set[i]!='\0';){
		printf("%d",set[i]);
		i++;
		if(set[i]!='\0')
			printf(",");
		else
			break;
  }
  printf("}");
}
/************************Main function*********************************/
int main(void){
	int set1[SIZE];
	int set2[SIZE];
	int size1,size2;
	printf("Enter Size of set 1\n");
	scanf("%d",&size1);
	printf("Enter the elements of set 1\n");
	for(int i=0;i<size1;i++)
		scanf("%d",&set1[i]);
	printf("Enter Size of set 2\n");
	scanf("%d",&size2);
	printf("Enter the elements of set 2\n");
	for(int i=0;i<size2;i++)
		scanf("%d",&set2[i]);
	printf("\nINTERSECTION : ");
	PrintSets(IntersectionOfSet(set1,set2,size1,size2));
}
	
