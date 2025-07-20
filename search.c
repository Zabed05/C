//For Linear Searching

#include<stdio.h>
int main(){
    int i,n;
    int a[]={11,22,33,44,55,66};
    printf("Enter the Number for Searching:");
    scanf("%d",&n);
    for(i=0;i<6;i++){
        if(a[i]==n){
            printf("Search Successful,Position:%d",i+1);
            break;
        }
    }
    if(i==6){
        printf("data not found!!");
    }
} 
//For iterative Binary Searching

#include<stdio.h>
int ibs(int a[], int lb, int ub, int key);
int main() {
    int n, a[5] = {11, 22, 33, 44, 55};
    printf("Enter The Data for searching: ");
    scanf("%d", &n);
    int result = ibs(a, 0, 4, n);
    if (result == -1) {
        printf("Data not found!!\n");
    }
    return 0;
}

int ibs(int a[], int lb, int ub, int key) {
    int mid;
    while (lb <= ub) {
        mid = (lb + ub) / 2;
        if (a[mid] == key) {
            printf("Search Successful, Position: %d\n", mid + 1);
            return mid;
        } else if (key < a[mid]) {
            ub = mid - 1;
        } else {
            lb = mid + 1;
        }
    }
    return -1;
}
//For Recursive Binary Searching

#include<stdio.h>
int rbs(int a[], int lb, int ub, int key);
int main() {
    int n, a[5] = {11, 22, 33, 44, 55};
    printf("Enter The Data for searching: ");
    scanf("%d", &n);
    int result = rbs(a, 0, 4, n);
    if (result == -1) {
        printf("Data not found!!\n");
    }
    return 0;
}

int rbs(int a[], int lb, int ub, int key) {
    int mid;
    if(lb>ub)
        return -1;
        mid = (lb + ub) / 2;
        if (a[mid] == key) {
            printf("Search Successful, Position: %d\n", mid + 1);
            return mid;
        } else if (key < a[mid]) {
           rbs(a,lb,mid-1,key);
        } else {
            rbs(a,mid+1,ub,key);
        }
    
}