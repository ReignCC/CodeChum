//CodeChum Nested Decision Activity
//Activit Title: Special Name, or Age, or Birthyear?

#include <stdio.h>

int main(){

    int i;
    char name[100];
    printf("Enter name: ");
    scanf("%[^\n]s",name);

    for(i=0; name[i]!= '\0'; i++);

    int c = i - 1;

    if (name[c] == 'a' || name[c] == 'e' || name[c] == 'i' || name[c] == 'o' || name[c] == 'u'){
        
        int age;
        printf("Enter age: ");
        scanf("%d",&age);

        if(age%2==0){
            printf("Wow, you're special!");
        }

        else{
            int by;
            printf("Enter birth year: ");
            scanf("%d",&by);

            if(by%2==0){
                printf("Oh, you're still special!");
            }
            else{
                printf("You will be special next year.");
            }
        }
    }

    else{
        printf("You're awesome!");
    }


    
}
