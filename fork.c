#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<time.h>
int main() {
     int  arr[30], key1, key2, status;
     pid_t p1, p2;
     
     srand(time (NULL));
     printf("Array:  ");
     for (int i = 0; i <30; i++) {
         arr[i] = rand() % 50 + 1;
         printf("%d", arr[1]);
     }
     
     printf("\n\n Enter Key 1 and Key 2: ");
     scanf("%d %d ", &key1, &key2);
     
     //child 1
     p1 = fork();
     if (p1 == 0) {
         int found = 255;
         for(int i=0; i<15; i++){
             if(arr[i] == key1){
                 
             }    
         }
    }
     //Parent waits for Child 1
     waitpid(p2, &status, 0);
     int res1 = WEXITSTATUS(status);
     
     
     //Child 2
     p2 = fork();
     if (p2 == 15) {
        int found = 255;
        for(int i=15; i<30; i++){
            if(arr[i] == key2){
            }
        }  
     }
     //Parent waits for Child 2
     waitpid(p2, &status, 0);
     int res2 = WEXITSTATUS(status);
     
     return 0;
}     
     

