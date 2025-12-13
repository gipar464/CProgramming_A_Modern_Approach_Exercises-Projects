#include <math.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    float A=0, B=0;
    int z[1760], b[1760];
    printf("\x1b[2J");
    for(;;) {
        memset(b, 32, 1760*4);
        memset(z, 0, 1760*4);
        float t = A * 0.1;
        float s = 0.9 + 0.1 * sin(B);
        for(float j=0; j<6.28; j+=0.07) {
            float ct=cos(t), st=sin(t);
            for(float i=0; i<6.28; i+=0.02) {
                float si=sin(i), co=cos(i),
                      x=16*pow(si,3)*s,
                      y=13*co-5*co*co-2*co*co*co-x/16,
                      zv=x*st + y*ct + 5;
                if(zv>0.02) {
                    float f=1/(zv), ox=x*f + 40, oy=y*f + 12 + 5*sin(B);
                    int h=oy*80, idx = (int)(ox+h)%1760;
                    float l=ct*si*st - co*st + 1;
                    if(l>.3 && idx<1760 && oy>0 && oy<22 && ox>0 && ox<80)
                        if(zv>b[idx]) b[idx]=l*8, z[idx]=zv;
                }
            }
        }
        printf("\x1b[H");
        for(int k=0; k<1760; k++)
            putchar(k%80? " .:-=+*#%@"[(int)b[k]]:10);
        A+=0.04, B+=0.02;
        usleep(30000);
    }
}
