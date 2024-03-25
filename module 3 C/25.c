#include <stdio.h>
int main()
{
    int electricity,gas_bill,home_rent,phone_bill,tution_fees,m,n;
    printf("Enter your electricity,gas_bill,home_rent,phone_bill,tution_fees");
    scanf("%d%d%d%d%d",&electricity,&gas_bill,&home_rent,&phone_bill,&tution_fees);
    m=(electricity+gas_bill+home_rent+phone_bill+tution_fees)/5;
    printf("Everage of expense =%d",m);

}