#include <iostream>
#include <fstream>

/*
This was used in the 2023 NCL spring game to generate a list
of flags to check against a program that accepted a specific
pattern given in the challenge description.
*/

using namespace std;

char alph[4]={65,65,65,65};
int num[4]={0,0,0,0};
//char alph=65;
//char num=0;
int main(){
        for(int a=0; a<26; a++){
                alph[0]=65+a;
        for(int b=0; b<26; b++){
                alph[1]=65+b;
        for(int c=0; c<26; c++){
                alph[2]=65+c;
        for(int d=0; d<26; d++){
                alph[3]=65+d;
        for(int e=0; e<10; e++){
                num[0]=0+e;
        for(int f=0; f<10; f++){
                num[1]=0+f;
        for(int g=0; g<10; g++){
                num[2]=0+g;
        for(int h=0; h<10; h++){
                num[3]=0+h;
                cout << "SKY-"<<alph[0]<<alph[1]<<alph[2]<<alph[3]<<"-"<<num[0]<<num[1]<<num[2]<<num[3]<<endl;
        }}}}}}}}
}