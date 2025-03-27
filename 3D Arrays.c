//3D Array
#include<stdio.h>

int main()
{
int i;
int j;
int k;

int marks[2][2][3]={
{
{11,12,13},
{14,15,16}
},
{
{2,3,4},
{5,6,7}		
}
};
//for(start;stop;step)
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		for(k=0;k<3;k++);
			printf("%d\t",marks[i][j][k]);
		}
	printf("\n");		
	}			
return 0;

       }
						