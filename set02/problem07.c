#include<stdio.h>
#include<math.h>
void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
  char name[100];
  int res=0;
  input(name);
  res=has_nice_name(name);
  output(res);
  return 0;
}

void input(char *name)
{
  printf("Enter the name of the camel\n");
scanf("%s",name);
    }

int has_nice_name(char *c)
{
  int i=0, count1=0, count2=0, flag=0;
  for(i=0;c[i]!='\0';i++)
  {
if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
{
  count1++;
}
    else
  count2++;
    if(count1==2 && count2==2)
      return flag=1;
  }
  return flag;
}
void output(int res)
{
  if(res==1)
    printf("The camel has a nice name\n");
  else
    printf("The camel has a bad name\n");
}