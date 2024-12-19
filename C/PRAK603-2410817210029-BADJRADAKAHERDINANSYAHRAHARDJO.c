#include <stdio.h>

int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    if(n1!=n2){
    printf("Jumlah tidak sama");
    return 0;
    }

    int angka1[n1];
    int angka2[n2];
    int hasilkali[n1];

    for(int i=0;i<n1;i++){
        scanf("%d",&angka1[i]);
    }

    for(int i=0;i<n2;i++){
        scanf("%d",&angka2[i]);
    }

    for(int i=0; i<n1;i++){
        hasilkali[i]=angka1[i]*angka2[i];
    } 

    for(int i=0; i<n1; i++){
        printf("%d ",hasilkali[i]);
    }
    printf("\n");

    return 0;
}