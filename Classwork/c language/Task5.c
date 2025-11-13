//array 2d Tasks

// To use fuction to complete task
//funtion of sum of 2D array
void function1(int array[3][3],int sum){
    sum=0;
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i==j){
                    printf("%d ",array[i][j]);
                    sum=sum+array[i][j];

                }

            }
            printf("\n");

    }
     printf("sum is : %d",sum);
     printf("\n");
}
//Function To print a number in 2D array
void function2(int arr[3][3]){
    for(int i=0;i<3;i++){
        for (int j=0;j<1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
//Print a number
void function3(int ar[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j>=i){
                printf("%d ",ar[i][j]);
            }

        }
        printf("\n");
    }
}

void main(){
    int array[3][3]={{10,20,30},{20,30,40},{30,40,50}};
    int arr[3][3]={{1,2,3},{11,22,33},{21,22,23}};
    int ar[3][3]={{20,40,60},{30,60,90},{40,18,12}};
    int sum;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    function1(array,sum);
    function2(arr);
    function3(ar);

}
