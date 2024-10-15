#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(char you, char computer){

    if(you == computer){

    return -1;

    }else if(you == 'r' && computer == 'p'){

    return 0;

    }else if(you == 'p' && computer == 'r'){

    return 1;

    }else if(you == 'r' && computer == 's'){

    return 1;

    }else if(you == 's' && computer == 'r'){

    return 0;

    }else if(you == 'p' && computer == 's'){

    return 0;

    }else if(you == 's' && computer == 'p'){
    return 1;
    }else{
    return 2;
    }
}

int main(){
    int n,result;
    char you,computer;
    srand(time(NULL));
    n = rand() % 100;

    if(n >= 0 && n<= 33){

     computer = 'r';
    }else if(n > 33 && n <= 66){
     computer = 'p';
    }else{
     computer = 's';
    }

printf("\n\n\n\n\n\t\t\t\tEnter 'r' For Rock\tEnter 'p' For Paper\tEnter 's' For scissor: ");
scanf("%c", &you);

result = game(you,computer);

if(result == -1){
printf("\n\n\n\n\n\t\t\t\tIt Is Draw");
}else if(result == 1){
printf("\n\n\n\n\n\t\t\t\tHurrah! You Won");
}else if(result == 0){
printf("\n\n\n\n\n\t\t\t\tAlas! You Lost");
}else{
printf("\n\n\n\n\n\t\t\t\tOpps! Wrong Selection");
}

printf("\n\n\n\n\n\t\t\t\tYou Choose %c and Computer Choose %c\n",you,computer);

return 0;
}

