#include<stdio.h>
void main(){
int i;
for(i=1;i<=10;i++){
if(i==5 || i==6)
continue;
printf("%d",i);
}
}
