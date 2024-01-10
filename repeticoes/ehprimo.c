#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, div=0;
    printf("Digite um numero e direi se eh primo ou nao: ");
    scanf("%d", &num);


    if(num==0 || num == 1){
        printf("%d NAO EH PRIMO", num);
    } else{
    for(int i = 1; i <= num ; i++){
        
        if(num%i==0){
            
            div++;
        }
    }
    if(div>2){
        printf("O numero %d NAO EH PRIMO", num);
    } else{
        printf("O numero %d  EH PRIMO", num);
    }
    }



    // if(num==0 || num==1  ){
    //    printf("O numero %d NAO EH PRIMO ",num); } 
    //    else{

    // for(int i = 2; i<=num; i++){
    //     if (num%i==0){
    //         printf("O número %d NAO EH PRIMO ",num);
    //         break;
    //     } else if(i==num){
    //    printf("O número %d EH PRIMO ",num); 
    //    break;
    // }
    // }
    //    }
    
    return 0;
}