#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char string[100], rev_string[100];
    input_string(string);
    str_reverse(string, rev_string);
    output(string, rev_string);
    return 0;
   }

void input_string(char *a)
{
    printf("Enter the string\n");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str)
{
    int len=strlen(str),i, k;
    for( i=(len-1),k=0 ; i>=0 && k < len; i--, k++)
      {
          rev_str[k]=str[i];
      }
  rev_str[k]='\0';
}

void output(char *a, char *rev_a)
{
  printf("The rev of %s is %s", a, rev_a);
}
