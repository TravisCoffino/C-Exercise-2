//Travis Coffino
#include <stdio.h>
#include <stdlib.h>
#define NRROWS 5
#define NRCOLS 5

int main(){
	FILE *fin;
	float a[5][5],b[5][5],c[5][5], sum=0,sum2=0;
	int i,j,k,m,n,row;
	float temp;
	// float a[NRROWS][NRCOLS];
	if((fin=fopen("lab7test1.txt","r"))==NULL){
		printf("File lab7test1.txt cannot be opened\n");
		exit(1);
	}

    for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			fscanf(fin,"%f",&a[i][j]);
			b[j][i]=a[i][j];
		}
	}
	
/*	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			fscanf(inp,"%f",&b[i][j]);
		}
	}
	*/
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			c[i][j]=0;
			for(k=0;k<5;/*same size rows and columns, so doesn't matter*/k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%f\t",c[i][j]);
		}
		printf("\n");
	}

   
}