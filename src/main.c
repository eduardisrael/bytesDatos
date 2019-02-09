

#include "codigo.h"

int main(int argc, char const *argv[])
{
	
	
    char s[1025]={0};
    
    int entero=0;
    int short1=0;
    int char1=0;
    int long1=0;
    int float1=0;
    int double1=0;
    int exit = 1;
    do{
        if(!scanf("%s",s)){
            return 0;
        }
        if(cmp(s,"int")){

            entero=1;
            short1=0;
            long1=0;
            char1=0;
            double1=0;
            float1=0;

            
        }else if(cmp(s,"short")){

            short1=2;
            entero =0;
            long1=0;
            char1=0;
            double1=0;
            float1=0;
        }else if(cmp(s,"char") ){

            char1=1;
            short1=0;
            entero =0;
            long1=0;
            double1=0;
            float1=0;
        }else if(cmp(s,"long")){


            entero=0;
            short1=0;
            long1=1;
            char1=0;
            double1=0;
            float1=0;
        }else if(cmp(s,"float") ){

            entero=0;
            short1=0;
            long1=0;
            char1=0;
            double1=0;
            float1=1;
        }else if(cmp(s,"double")){


            entero=0;
            short1=0;
            long1=0;
            char1=0;
            double1=1;
            float1=0;

        }else if(cmp(s,"x")){
            exit=0;
        }
        
        else if(short1){
            short x;
            sscanf(s,"%hu",&x);
            printf("%s %s\n","short",s);
            bytesShort(x);
        }
        else if(char1){
            char x;
            sscanf(s,"%c",&x);
            printf("%s %s\n","char",s);
            bytesChar(x);
        }
        else if(long1){
            long x;
            sscanf(s,"%ld",&x);
            printf("%s %s\n","long",s);
            bytesLong(x);
        }
        else if(float1){
            float x;
            sscanf(s,"%f",&x);
            printf("%s %s\n","float",s);
            bytesFloat(x);
        }

        else if(double1){
            double x;
            sscanf(s,"%lf",&x);
            printf("%s %s\n","double",s);
            bytesDouble(x);
        }
        else if(entero){
            int x;
            sscanf(s,"%d",&x);
            printf("%s %s\n","int",s);
            bytesInt(x);
        }
    }while(exit);





}


