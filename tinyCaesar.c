#include <stdio.h>
char shift(char c,int n){return(c>='a'&&c<='z')?'a'+((c-'a'+n)%26):(c>='A'&&c<='Z')?'A'+((c-'A'+n)%26):c;}
int main(){char c='J';printf("%c\n",shift(c,3));return 0;}
