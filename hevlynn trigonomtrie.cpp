#include<iostream>
int factoriel(unsigned int n);
float puissance(float z,int exp);
float cosinus(float y);
float sinus(float y);
float tangente(float y);
float a,x,cos,sin,tan;
const float pi=3.14;
int main(int argv,char** argc){
    std::cout<<"entrez la mesure de l'angle en degre"<<std::endl;
    std::cin>>a;
    x=a*pi/180;
    cos=cosinus(x);
    sin=sinus(x);
    tan=sinus(x)/cosinus(x);
    std::cout<<"cosinus"<<a<<"="<<cos<<std::endl;
        std::cout<<"sinus"<<a<<"="<<sin<<std::endl;
            std::cout<<"tangente"<<a<<"="<<tan<<std::endl;
            return 0;
}
int factoriel(unsigned int n){
    int i,f=1;
    for(i=2;i<=n;i++){
        f=f*i;
    }
    return f;
}
float puissance(float z,int exp){
    float result =1.0f;
    for(int i=0;i<exp;i++){
        result=result*z;
    }
    return result;
}
float cosinus(float y){
    float terme;
    float c=0.0f;
    for(int i=0;i<10;i++){
        /*pour les 10 premiers termes*/
        int texpo=2*i;/*1qcalculer les puissances impaire*/
        terme = puissance(y,texpo)/factoriel(texpo);
        if(i%2==0){
            /*pour alterner les signes*/
            c=c+terme;}
            else{
                c=c-terme;
            }
        }
        return c;
    }
    float sinus(float y){
        float terme;
        float s=0.0f;
        for(int i=0;i<10;i++){
            int texpo=2*i+1;
            terme =puissance(y,texpo)/factoriel(texpo);
            if(i%2==0){
                s=s+terme;
            }else{
                s=s-terme;
            }
        }
        return s;
    }