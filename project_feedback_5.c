#include<stdio.h>
#include<stdlib.h>
char ch;
int main()
{
	FILE *fp;
	fp=fopen("data1.txt","w");
	fprintf(fp,"1.c is a easy language\n2.It supports stuctured porgramming\n3.It uses data types like int,char,float,double\n4.It workd on different platforms\n5.Code reusability\n");
	fclose(fp);
	fp=fopen("data1.txt","a");
	fprintf(fp,"6.His name is saravanan\n7.He teaches patiently\n8.He explains clearly\n9.He tell us to practically solve problems\n10.He clarifies doubts very well");
	fclose(fp);
	fp=fopen("data.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
    return 0;
}

