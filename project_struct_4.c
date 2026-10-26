#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    char city[10];
    char dream[10];
    int  roll;
    float marks; 

};
void read(struct student s[],int i)

{
 printf("enter the 1.name 2.roll no 3.marks 4.city 5.dream \n");
 for(i=0;i<10;i++)
 {
 scanf("%s %d %f %s %s",s[i].name,&s[i].roll,&s[i].marks,s[i].city,s[i].dream);
 }
}
void display(struct student s[],int i)
{ 
    
 for(i=0;i<10;i++)
 {
 printf("name=%s\n roll=%d\n marks=%f\n city=%s\n dream=%s\n",s[i].name,s[i].roll,s[i].marks,s[i].city,s[i].dream);
 }
}
int main()
{
    struct student s[10];
    read(s,10);
    display(s,10);
    return 0;

}



