#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int rollDice(){
    
  return rand() % 6 + 1;

}

char playSingleRound(int round){
    

    int rand1 = rollDice();
    int rand2 = rollDice();

    while (rand1 == rand2){

        rand1 = rollDice();
        rand2 = rollDice();
    }

    if(rand1>rand2){
        return 'P';
    }else if(rand1<rand2){
        return 'S';
    }
    
}


int main(){

    char round_results[5];

    for (int i = 0; i < 5; i++){
        round_results[i] = playSingleRound(i+1);
    }
    
    int cnt_for_p=0, cnt_for_s=0;


    for (int i = 0; i < 5; i++){
        if(round_results[i] == 'P') {
            cnt_for_p++;
        }else{
            cnt_for_s++;
        }
    }

    printf("Player %c wins the game!", (cnt_for_p>cnt_for_s)? 'P' : 'S');
}






















