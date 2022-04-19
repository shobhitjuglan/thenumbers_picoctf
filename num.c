
//PICOCTF : The Numbers [cryptography]

#include<stdio.h>
int main(){
    int b[100];char c[100];
    int i=0;
    //input the number one by one and then press endoffile at last when done
    for(;b[i]!=EOF;i++){
        scanf("%d",&b[i]);
        if(1<=b[i] && b[i]<=26)
            c[i]=(char)(b[i]+96);
}
puts(c);
}
