// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[10],b[10],sum[10];
    int i,n;
    printf("Enter the size of array A and B\n");
    scanf("%d",&n);
    printf("Enter the element of Array of A\n");
    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element of Array of B\n");
    for(i = 0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i = 0;i<n;i++){
        sum[i] = a[i] + b[i];
    }
    printf("Array 's sum:\n");
    for(i = 0;i<n;i++){
            printf("%d\n",sum[i]);
        }

        
    
 
   
    return 0;