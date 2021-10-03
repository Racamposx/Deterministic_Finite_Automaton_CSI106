#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc > 3){
        // to be implemented - view functionality call
        if(strcmp(argv[1], "--dot") == 0){
            return 0;
        }

        // to be implemented - complement functionality call
        if(strcmp(argv[1], "--complemento") == 0){
            return 0;
        }
        
        // to be implemented - intersection functionality call
        if(strcmp(argv[1], "--intersecao") == 0){
            return 0;
        }

        // to be implemented - union functionality call
        if(strcmp(argv[1], "--uniao") == 0){
            return 0;
        }
        
        // to be implemented - minimization functionality call
        if(strcmp(argv[1], "--minimizacao") == 0){
            return 0;
        }

        // to be implemented - minimization functionality call
        if(strcmp(argv[1], "--reconhecer") == 0){
            return 0;
        }

        printf(">>>Error: Could not recognize command: %s", argv[1]);
        printf("\n Use the correct sentence!!!");
        return -1;
    }

    printf(">>>>Error: Invalid arguments number");
    return -1;
}