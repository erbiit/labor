#include <stdio.h>

int area[20][20];

void field(){

    for(int x = 0; x < 20; x++){
        for(int y = 0; y < 20; y++){
            if(area[y][x] == 1){
                area[y][x] = '#';
                printf("%c", area[y][x]);
            }
            else{
                area[y][x] = '.';
                printf("%c", area[y][x]);
            }
        }
        printf("\n");
    }
}

void zelle_alive(int x, int y){
    area[x][y] = 1;
}

int count_neighbour(){
    int count = 0;

    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(area[i][j] == '#'){
                count+=1;
            }
        }
    }
    return count-1;
}

void rules(){
    for(int x = 0; x < 20; x++){
        for(int y = 0; y < 20; y++){
            if(count_neighbour() < 2){
                area[x][y] = '.';
                printf("%c", area[x][y]);
            }
            if(count_neighbour() > 3){
                area[x][y] = '.';
                printf("%c", area[x][y]);
            }
            if(count_neighbour() == 2 || count_neighbour() == 3){

                printf("%c", area[x][y]);
            }
            if(count_neighbour() == 3){
                area[x][y] = '#';
                printf("%c", area[x][y]);
            }
        }
        printf("\n");
    
}

int main(){
    
    int x_pos, y_pos, g;

    scanf("%d", &g);

    char break_for[0];

    for(int i = 0; *break_for != 'e'; i++){

        scanf("%s %d %d", break_for, &x_pos, &y_pos);
        
        zelle_alive(x_pos, y_pos);

    }

    field();

    for(int i = 0; i <= 3;){

        printf("-- Generation: %d \n",i);

        count_neighbour();

        printf("\n");

        rules();

        count_neighbour();

        i++;
    }
}