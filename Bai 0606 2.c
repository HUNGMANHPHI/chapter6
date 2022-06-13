#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){

int mark1;
int mark2;
float avgGPA;

printf ("nhap diem 1 \n");
scanf("%d",&mark1);

printf("nhap diem 2 \n");
scanf("%d",&mark2);

avgGPA=(float)(mark1 + mark2)/2;

printf("ket qua la :%f",avgGPA);
return 0;
}
