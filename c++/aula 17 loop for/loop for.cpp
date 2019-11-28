
#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
int main(){
 string cse="[X]", csd="[X]", cie="[X]", cid="[X]", m="[X]", ms="[X]", mi="[X]", me="[X]", md="[X]";
 int q=0, w=0, e=0, a=0, s=0, d=0, z=0, x=0, c=0;
 int ja;
 int i=0;
 int j;
 goto i;
 Velha:
 system("cls");
 cout << "Deu Velha";
 system("pause > nul");
 i:
 q=0, w=0, e=0, a=0, s=0, d=0, z=0, x=0, c=0;
 cse="[ ]", csd="[ ]", cie="[ ]", cid="[ ]", m="[ ]", ms="[ ]", mi="[ ]", me="[ ]", md="[ ]";
 system("cls");
 int op;
 system("color a");
 cout << "Digite a Opcao Desejada:\n";
 cout << "[1]Jogar\n";
 cout << "[2]Sair\n";
 cout << "[3]Como Jogar\n";
 cin >> op;
 switch(op){
  case 1:
   goto v;
   break;
  case 2:
   return 0;
  case 3:
   goto c;
   break;
  default:
   system("cls");
   cout << "Valor Invalido, Apenas Sao Permitidos Numeros de 1 a 3";
   system("pause > nul");
   system("cls");
   goto i;
 }
 c:
 system("cls");
 cout << "Digite onde vc quer colocar o X de acordo com o seu Num Lock exemplo:\n";
 cout << "Se vc digitar 7 ele vai colocar um X no canto superior esquerdo";
 system("pause > nul");
 goto i;
 v:
 if(cse=="[X]" && m=="[X]" && cid=="[X]" || csd=="[X]" && m=="[X]" && cie=="[X]" || ms=="[X]" && m=="[X]" && mi=="[X]" || me=="[X]" && m=="[X]" && md=="[X]" || cse=="[X]" && me=="[X]" && cie=="[X]" || csd=="[X]" && md=="[X]" && cid=="[X]" || cse=="[X]" && ms=="[X]" && csd=="[X]" || cie=="[X]" && mi=="[X]" && cid=="[X]"){
  system("ping -n 2 -w 1000 0.0.0.1 > nul");
  system("cls");
  cout << "Vc Venceu!";
  system("pause > nul");
  goto i;
 }
 if(cse=="[O]" && m=="[O]" && cid=="[O]" || csd=="[O]" && m=="[O]" && cie=="[O]" || ms=="[O]" && m=="[O]" && mi=="[O]" || me=="[O]" && m=="[O]" && md=="[O]" || cse=="[O]" && me=="[O]" && cie=="[O]" || csd=="[O]" && md=="[O]" && cid=="[O]" || cse=="[O]" && ms=="[O]" && csd=="[O]" || cie=="[O]" && mi=="[O]" && cid=="[O]"){
  system("ping -n 2 -w 1000 0.0.0.1 > nul");
  system("cls");
  cout << "Vc Perdeu";
  system("pause > nul");
  goto i;
 }
 system("cls");
 cout << cse << ms << csd << "\n" << me << m << md << "\n" << cie << mi << cid << "\n";
 cin >> j;
 switch(j){
  case 1:
   if(z==0){
    cie="[X]";
   }else{
    goto v;
   }
   break;
     case 2:
      if(x==0){
       mi="[X]";
   }else{
    goto v;
   }
      break;
     case 3:
      if(c==0){
       cid="[X]";
   }else{
    goto v;
   }
      break;
     case 4:
      if(a==0){
       me="[X]";
   }else{
    goto v;
   }
      break;
     case 5:
      if(s==0){
       m="[X]";
   }else{
    goto v;
   }
      break;
     case 6:
      if(d==0){
       md="[X]";
   }else{
    goto v;
   }
      break;
     case 7:
      if(q==0){
       cse="[X]";
   }else{
    goto v;
   }
      break;
     case 8:
      if(w==0){
       ms="[X]";
   }else{
    goto v;
   }
      break;
     case 9:
      if(e==0){
       csd="[X]";
   }else{
    goto v;
   }
      break;
     default:
      cout << "Numero Invalido";
     system("ping -n 2 -w 1000 0.0.0.1 > nul");
     goto v;
 }
 system("cls");
 cout << cse << ms << csd << "\n" << me << m << md << "\n" << cie << mi << cid;
 if(cie=="[X]" || cie=="[O]"){
  z=1;
 }
 if(cid=="[X]" || cid=="[O]"){
     c=1;
 }
 if(mi=="[X]" || mi=="[O]"){
  x=1;
 }
 if(me=="[X]" || me=="[O]"){
  a=1;
 }
 if(m=="[X]" || m=="[O]"){
  s=1;
 }
 if(md=="[X]" || md=="[O]"){
  d=1;
 }
 if(cse=="[X]" || cse=="[O]"){
  q=1;
 }
 if(ms=="[X]" || ms=="[O]"){
  w=1;
 }
 if(csd=="[X]" || csd=="[O]"){
  e=1;
 }
 ja=rand() % 9;
 switch(ja){
  case 1:
   c1:
   if(z==0){
    cie="[O]";
   }else{
    goto c2;
   }
   break;
     case 2:
      c2:
      if(x==0){
       mi="[O]";
   }else{
    goto c3;
   }
      break;
     case 3:
      c3:
      if(c==0){
       cid="[O]";
   }else{
    goto c4;
   }
      break;
     case 4:
      c4:
      if(a==0){
       me="[O]";
   }else{
    goto c5;
   }
      break;
     case 5:
      c5:
      if(s==0){
       m="[O]";
   }else{
    goto c6;
   }
      break;
     case 6:
      c6:
      if(d==0){
       md="[O]";
   }else{
    goto c7;
   }
      break;
     case 7:
      c7:
      if(q==0){
       cse="[O]";
   }else{
    goto c8;
   }
      break;
     case 8:
      c8:
      if(w==0){
       ms="[O]";
   }else{
    goto c9;
   }
      break;
     case 9:
      c9:
      if(q==1 && w==1 && e==1 && a==1 && s==1 && d==1 && z==1 && x==1 && c==1){
       goto Velha;
   }
      if(e==0){
       csd="[O]";
   }else{
    goto c1;
   }
      break;
    }
    if(cie=="[X]" || cie=="[O]"){
  z=1;
 }
 if(cid=="[X]" || cid=="[O]"){
     c=1;
 }
 if(mi=="[X]" || mi=="[O]"){
  x=1;
 }
 if(me=="[X]" || me=="[O]"){
  a=1;
 }
 if(m=="[X]" || m=="[O]"){
  s=1;
 }
 if(md=="[X]" || md=="[O]"){
  d=1;
 }
 if(cse=="[X]" || cse=="[O]"){
  q=1;
 }
 if(ms=="[X]" || ms=="[O]"){
  w=1;
 }
 if(csd=="[X]" || csd=="[O]"){
  e=1;
 }
 goto v;
 return 0;
}

