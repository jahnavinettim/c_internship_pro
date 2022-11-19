#include<stdio.h>
int printS[7][7];
int printA[7][7];
int printM[7][7];
int printR[7][7];
int printE[7][7];
int printE[7][7];
int printN[7][7];
void gap(){
for(int i=0;i<7;i++){
for(int j=0;j<1;j++){
printf(" ");
}}
}//end gap()
void printConsole(){
for(int i=0;i<7;i++){
gap();
for(int j=0;j<7;j++){
char ch=printS[i][j];
printf("%c",ch);
system("COLOR 0D");
}
gap();
for(int j=0;j<7;j++){
char ch=printA[i][j];
printf("%c",ch);
}

gap();
for(int j=0;j<7;j++){
char ch=printM[i][j];
printf("%c",ch);
}
gap();
for(int j=0;j<7;j++){
char ch=printR[i][j];
printf("%c",ch);
}
gap();
for(int j=0;j<7;j++){
char ch=printE[i][j];
printf("%c",ch);
}
gap();
for(int j=0;j<7;j++){
char ch=printE[i][j];
printf("%c",ch);
}
gap();
for(int j=0;j<7;j++){
char ch=printN[i][j];
printf("%c",ch);
}
printf("\n");
}// end top most for

} // end printConsole()
void S(){
for(int i=0;i<7;i++){
for(int j=0;j<7;j++){
if((i==0)||(i==3)||(i==6)||(i<3&&j==0)||(i>3&&j==6))
{
printS[i][j]=42;
}
else{
printS[i][j]=32;
}}}}
void A(){
for(int i=0;i<7;i++){
for(int j=0;j<7;j++){
if((i>0&&j==0)||(j==6&&i>0||i==0&&j>0&&j<6||i==3))
{
printA[i][j]=42;
}
else{
printA[i][j]=32;
}}}}
void M(){
for(int i=0;i<7;i++){
for(int j=0;j<7;j++){
if((j==0||j==6||i==1&&j!=2&&j!=3&&j!=4||i==2&&j!=1&&j!=3&&j!=5||i==3&&j==3))
{
printM[i][j]=42;
}
else{
printM[i][j]=32;
}}}}
void R(){
for(int i=0;i<7;i++){
for(int j=0;j<7;j++){
if(j==0||i==0&&j<6||i==3&&j<6||j==6&&i>=1&&i<=2||i==4&&j==2||i==5&&j==3||i==6&&j==5)
{
printR[i][j]=42;
}
else{
printR[i][j]=32;
}}}}
void E(){
for(int i=0;i<7;i++){
for(int j=0;j<7;j++){
if(i==0||i==6||i==3||j==0)
{
printE[i][j]=42;
}
else{
printE[i][j]=32;
}}}}
void N(){
for(int i=0;i<7;i++){
for(int j=0;j<7;j++){
if(j==0||j==6||i==1&&j==1||i==2&&j==2||i==3&&j==3||i==4&&j==4)
{
printN[i][j]=42;
}
else{
printN[i][j]=32;
}}}}
int main(){
S();
A();
M();
R();
E();
E();
N();
printConsole();
}
