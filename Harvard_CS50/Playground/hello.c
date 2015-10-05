#include <cs50.h>
#include <stdio.h>

int main(void) {

    printf("Lets just spit out some random data\n");
    
    
    printf("Whats your name: ");
    
    string name = GetString();
    
    printf("Whats your age: ");
    
    int age = GetInt();
    int retirement = 68;
    
    if(age <= 20) {
        printf("Wow %s you are a kid!\n",name);
    } else {
        printf("Ok %s, you are getting old.. you have %i  years left till your retirement!", name, retirement-age); 
    }
    
    
    
    

}
