#include <stdio.h>

int main(){
    int batas;
    scanf("%d",&batas);
    int angka[batas];

    for(int z=0; z<batas; z++){
    scanf("%d",&angka[z]);
    }

    for(int z=0; z<batas; z++){
    printf("%d ",angka[z]*(z+1));
    }
return 0;
}