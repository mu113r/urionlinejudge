#include <stdio.h>

int mdc (int a, int b) {
    int dividendo, divisor, resto = 1;
    dividendo = a;
    divisor = b;
    
    while(resto != 0) {
        resto = dividendo % divisor;
        dividendo = divisor;
        divisor = resto;
    }
    return dividendo;
}

int main() {
    int x1, y1, x2, y2, xt1, yt1, q, mdc1, xf, yf;
    char operador;
    
    scanf("%d", &q);
    
    for( ;q > 0; q--) {
        scanf("%d / %d %c %d / %d", &x1, &y1, &operador, &x2, &y2);
        
        if(operador == '+') {
        
            //mdc1 = mdc(y1, y2);
            
            xt1 = y2*x1 + y1*x2;
            yt1 = y1*y2;
            //mmc = yt1/mdc1;
            mdc1 = mdc(xt1, yt1);
            if(mdc1 < 0) {
                mdc1 = mdc1 * -1;
            }
            xf = xt1/mdc1;
            yf = yt1/mdc1;
        
        } else if (operador == '-') {
        
            //mdc1 = mdc(y1, y2);
            
            xt1 = y2*x1 - y1*x2;
            yt1 = y1*y2;
            //mmc = yt1/mdc1;
            mdc1 = mdc(xt1, yt1);
            if(mdc1 < 0) {
                mdc1 = mdc1 * -1;
            }
            xf = xt1/mdc1;
            yf = yt1/mdc1;
            
        } else if (operador == '*') {
        
            //mdc1 = mdc(y1, y2);
            
            xt1 = x1*x2;
            yt1 = y1*y2;
            //mmc = yt1/mdc1;
            mdc1 = mdc(xt1, yt1);
            if(mdc1 < 0) {
                mdc1 = mdc1 * -1;
            }
            xf = xt1/mdc1;
            yf = yt1/mdc1;
            
        } else if (operador == '/') {
        
            //mdc1 = mdc(y1, x2);
            
            xt1 = x1*y2;
            yt1 = y1*x2;
            //mmc = yt1/mdc1;
            mdc1 = mdc(xt1, yt1);
            if(mdc1 < 0) {
                mdc1 = mdc1 * -1;
            }
            xf = xt1/mdc1;
            yf = yt1/mdc1;
            
        }
        
        printf("%d/%d = %d/%d\n", xt1, yt1, xf, yf);
        
    }
    
    return 0;
}
