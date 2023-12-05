#include <stdio.h>

int main() {
    int x,n;
    bool is_p2_win = false;

    scanf("%d%d", &x, &n);
    
    while (n--)
    {   
        int temp;
        scanf("%d", &temp);
        if(is_p2_win==true) continue;

        if(temp==x) {printf("Right, Player-2 wins!"); is_p2_win=true;}
        else printf("Wrong, %d Choice(s) Left!\n", n);
    }
    if(!is_p2_win) printf("Player-1 wins!");
    
    return 0;
}
