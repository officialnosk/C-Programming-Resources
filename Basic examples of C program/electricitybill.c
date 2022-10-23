/* Print electric bill according to progresively
increasing price.*/

#include <stdio.h>

int main(){
    float unit,pay;
    printf("Your Unit Consumption is?\n");
    scanf("%f",&unit);

    if(unit<=50.00){
        pay=(0.50*unit);
    }
    else if(unit<=150.00){
        pay=0.50*50.0+0.75*(unit-50.0);
    }
    else if( unit<=250.00){
        pay=0.50*50.0+0.75*100.0+1.20*(unit-150.0);
    }
    else if(unit>250.00){
        pay=0.50*50.0+0.75*100.0+1.20*100.0+1.50*(unit-250.0);
    }
    printf("You need to pay %.3f Rupees",(pay+(20.00/100.00)*pay));

    return 0;
} 