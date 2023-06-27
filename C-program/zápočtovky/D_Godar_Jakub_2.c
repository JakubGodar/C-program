#include <stdio.h>

short dlzkaRetazca(char* s){
    short len=0;
    while(s[len]!='\0')
        len++;

    return len;
}

void reverse(char *str){
    short len=0,i,j;
    char temp;
    len=dlzkaRetazca(str);

    for(i=len-1,j=0;j<(len/2); i--,j++){
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
    }
}
int main(){
    char s1[100]={0};

    printf("Zadaj retazec: ");
    scanf ("%[^\n]%*c", s1);
    printf("Povodny retazec: %s\n",s1);
    reverse(s1);
    printf("Obrateny retazec: %s\n",s1);
    printf("Dlzka retazca: %d\n",dlzkaRetazca(s1));


    return 0;
}
