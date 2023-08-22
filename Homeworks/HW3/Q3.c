#include <stdio.h>
int adad(int n); 
int main() 
{ 
    int number; 
    scanf("%d", &number); 
    for(int i=1;i<=number;i++){
        printf("%d ",adad(i));
    }
    return 0; 
} 
int adad(int n) 
{ 
    if (n == 1)  
        return 1; 
    else
        return adad(n-1)+1;
}