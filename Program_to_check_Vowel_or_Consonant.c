#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='A' || a=='a' || a=='e' ||a=='E' ||a=='i' ||a=='I' ||a=='O' ||a=='o' ||a=='U' ||a=='u'){
    printf("Vowel");
}
else
{
    printf("Consonant");
}
    
}