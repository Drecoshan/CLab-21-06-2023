#include <stdio.h>
int main() {

//Question number 01
//while loop
    int x=0;
    while (x<=100)
    {
        printf("\t%d\n",x);
        x++;
    }
//Do while loop
{


    int x=0;
    do
    {
        printf("\t%d\n",x);
        x++;
    }    while (x<=100);




}
//for while loop
{


    int x=0;
    for(x=0; x<=100; x++)
    {
        printf("\t%d\n",x);
    }

}
//Question number 02

{


    int mark[10],total=0;
    float avg;
    printf("Enter the your 10 mark \n");
    for (int i=0; i<10; i++){
    printf("Mark %d: ",i+1);
    scanf("%d",&mark[i]);
    total+= mark[i];
    }
    avg=total/10;
    printf("total mark: %d\n",total);
    printf("AVG mark: %.2f\n",avg);

    if (avg<50.0){
        printf("Result: Fail\n");
    }
        else{
            printf("Result: Pass\n");
}
}

}

