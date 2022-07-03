#include<stdio.h>
int main(){
 char ch[]={ 0 };
 gets(ch);
 if(ch >= 'A' && ch <= 'Z')
  ch +=32;
 else if(ch >= 'a' && ch <= 'z')
  ch -=32;
 printf("%c\n",ch);

}