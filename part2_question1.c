#include <stdio.h>
int main(){
FILE *fin=open("input.txt","r");
char text[11][330],c; int row=1,col=0,m,n,k;

while((c=fgetc(fin))!=EOF){
if(c!='\n'){
text[row][col]=c;
col++;
}
else{ // is '\n
text[row][col]='\0';
row++;
col=0;
}
}
text[row][col]='\0';

while(1){
scanf("%c",&c);
if(c=='I'){
scanf("%d",&m);
for(i=row;i>m;i--){//copy line i to i+1
for(j=0;j<=strlen(text[row]);j++){
text[i+1][j]=text[i][j];
}

}

col=0;
while(1){
scanf("%c",&c);
if(c!='\n'){
text[m+1][col]=c;
col++;
}
else{
text[m+1][col]='\0';
break;
}

}
row++;
}
else if(c=='D'){
scanf("%d %d",&m,&n);
for(i=m,j=n;j<=row;i++,j++){//line [i]=line[j]
for(k=0;k<=strlen(text[j]);k++){
text[i][k]=text[j][k];
}
}
row-=(n-m+1);
}
else if(c=='R'){
scanf("%d %d",&m,&n);
for(i=0;i<n;i++){
printf("Newline %d: "i; scanf("%c",&c)
}

}
}
}

	
