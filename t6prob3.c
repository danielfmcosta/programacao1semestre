#include <stdio.h>

int compacta(char orig[], int N, char dst[]);

int main(){
    char orig[20], dst[20];
    int N=1, k;
    scanf("%c", &orig[0]);
    for(int i=1; ; i++){
        scanf("%c", &orig[i]);
        N++;
        if(orig[i]=='.')
            break;
    }
    k = compacta(orig, N, dst);
    for(int i=0; i<k; i++){
        printf("%c", dst[i]);
    }
}

int compacta(char orig[], int N, char dst[]){
    int k=1;
    dst[0]=orig[0];
    for(int i=1; i<N; i++){
        if(orig[i]!=orig[i-1]){
            dst[k]=orig[i];
            k++;
        }
    }
    return k;
}