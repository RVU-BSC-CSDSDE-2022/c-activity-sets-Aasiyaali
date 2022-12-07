#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input_string(char* a, char* b){
    scanf("%s",a);
    scanf("%s",b);
}

int sub_str_index(char* string, char* substring){
    int pos=-1;
    for(int i=0,j=0;i<strlen(string);i++){
        if(string[i]==substring[j]){
            if(pos==-1)
                pos=i;
            j++;
        }
        else{
            j=0;
            pos=-1;
        }
        if(j==strlen(substring)){
            return pos;
        }
            
    }
    
    return pos;
}

void output(char *string, char *substring, int index){
    if(index>-1)
        printf("The index of '%s' in '%s' is %d",substring,string,index);
    else
        printf("Substring not present in the string");
}

int main(){
    
    char *a=malloc(sizeof(char)*1000);
    char *b=malloc(sizeof(char)*1000);
    input_string(a,b);
    int res= sub_str_index(a,b);
    output(a,b,res);
    return 0;
}
