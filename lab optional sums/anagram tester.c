#include<stdio.h>
#include<string.h>

int main(){
    char str1[101], str2[101];
    int freq1[26]={0};
    int freq2[26] = {0};
    int i;

    scanf(" %100[^\n]", str1);
    scanf(" %100[^\n]", str2);

    for(i=0;str1[i]='\0';i++){
        if(str1[i]>='A' && str1[i]<='Z'){
            freq1[str1[i]-'A']++;
        }
        else if (str1[i]>='a'&&str1[i]<='z'){
            freq1[str1[i]-'a']++;
        }
    }
    for(i=0;str2[i]!='\0';i++){
        if(str2[i]>='A' && str2[i]<='Z'){
            freq2[str2[i]-'A']++;
        }
        else if (str2[i]>='a'&&str2[i]<='z'){
            freq2[str2[i]-'a']++;
        }
    }
    int anagram=0;
    for(i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            anagram = 1;
            break;
        }
    }
    if(anagram==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
