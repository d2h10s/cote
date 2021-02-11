#include <stdio.h>
#include <string.h>

int main(){
    char doc[2501], keyword[51], cnt = 0;
    scanf("%[^\n]\n", doc);
    scanf("%[^\n]", keyword);
    int doc_len = strlen(doc);
    int key_len = strlen(keyword);
    for(int i = 0; i < doc_len; i++){
        if (doc[i] == keyword[0] && i + key_len <= doc_len){
            if (!strncmp(doc+i, keyword, key_len)){
                cnt++;
                i += key_len - 1;
            }
        }
    }
    printf("%d", cnt);
}