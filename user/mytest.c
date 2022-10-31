#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
void main(){
    char *c = " \\\\ ";
    char *c1 = " // ";
    int pid = fork();
    int i; 
    if(pid > 0){
        for(i = 0 ; ;i++){
            if(i % 1000000 == 0)
                printf("%s",c);
        }
        // int pid1 = fork();

        // if(pid1 >0 ){
        //     for(i = 0 ; ;i++){
        //         if(i % 1000000 == 0)
        //             printf("pid3");
        //     }
        // }else if(pid1 < 0){
        //     printf("fork panic");
        //     exit(1);
        // }else if(pid1 == 0){
        //     printf("1111");
        // }
    }else {
        int pid1 = fork();
        for(i = 0 ; ;i++){
            if(i % 1000000 == 0)
                printf("%s",c1);
        }

        if(pid1 >0 ){
            for(i = 0 ; ;i++){
                if(i % 1000000 == 0)
                    printf("pid3");
            }
        }else if(pid1 < 0){
            printf("fork panic");
            exit(1);
        }else if(pid1 == 0){
            printf("1111");
        }

    }
}