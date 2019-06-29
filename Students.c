#include<stdio.h>
#include<string.h>

typedef struct students{
char name[20];
int marks;
}student;

int stuMax=50;
student stu[stuMax];

void enterdetails();
void sortb();
void print();


void main()
{
    enterdetails();
    sortb();
    print();

}

void enterdetails()
{

    int x;

    printf("Enter the no of students: ");
    scanf("%d", &stuMax);

    for(x=0; x<stuMax; x++ )
    {
        printf("Enter the name of the students: ");
        scanf("%s",&stu[x].name);

        printf("Enter the marks of the students: ");
        scanf("%d",&stu[x].marks);
    }

}

void sortb()
{
    int result1, result2, x, y;
    char temp[20];

    for(x=0; x<stuMax; x++)
    {
          for(y=0; y<stuMax-1; y++)
          {
              result1 = strcmp( stu[y].name, stu[y+1].name );
              if(result1 > 0)
              {
                  strcpy(temp, stu[y].name);
                  strcpy(stu[y].name, stu[y+1].name);
                  strcpy(stu[y+1].name, temp);
              }
          }
    }

}

void print()
{
    FILE *fp;
    fp = fopen("C:\\Users\\pankajan_se16032\\Documents\\kajan.txt", "w");

    int x;
    for(x=0; x<stuMax; x++)
        fprintf(fp, "%s\t",stu[x].name);

        fcolse(fp);
}
