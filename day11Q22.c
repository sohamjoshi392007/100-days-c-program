//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    double cp, sp;
    
 
    scanf("%lf %lf", &cp, &sp);
    

    if (sp > cp) {
        double profit = sp - cp;
        double profit_pct = (profit / cp) * 100;
  
        printf("Profit %g%%\n", profit_pct);
    } 
    else if (cp > sp) {
        double loss = cp - sp;
        double loss_pct = (loss / cp) * 100;
        printf("Loss %g%%\n", loss_pct);
    } 
    else {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}