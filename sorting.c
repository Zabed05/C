//BUBBLE SORT//

#include<stdio.h>
int main()
{
    int n;
    int i,j,temp;
    printf("Enter size");
    scanf("%d",&n);
    int a[n];
    printf("Enter Element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            /* Swapping without using temp variable
            a[j]= a[j]^a[j+1];
            a[j+1]= a[j+1]^a[j];
            a[j]= a[j]^a[j+1]; */
        }
        }
    }
    printf("Sorted data:");
    for(j=0;j<n;j++){
        printf("%d\n",a[j]);}
    
}

//SELECTION SORT//

#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort logic
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < temp) {
                temp = a[j];
                k = j;
            }
        }
        a[k] = a[i];
        a[i] = temp;
    }

    // Print sorted array
    printf("Sorted data:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
