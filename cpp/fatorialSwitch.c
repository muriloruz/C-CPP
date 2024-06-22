/*
    Name: recursividadeSwitch.c
    Author: Murilo
    Date: 23/10/23 18:30
*/
#include <stdio.h>
#include <stdlib.h>

int switchzada(int);
main(){
    switchzada(1);
}
int switchzada(int n){
    if(n==2){
        return 0;
    }
    int op;
    scanf("%d",&op);
    switch(op){
    case 1:
        puts("Foda pae");
        switchzada(2);
        break;
    case 2:
        puts("Lucao do esmaga");
        switchzada(2);
        break;
    default:
        return switchzada(1);
        break;
    }
}
