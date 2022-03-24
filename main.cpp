
#include "graf.h"
#include <bits/stdc++.h>

using namespace std;

int main() {



  //Graf G(6,false);
  //Graf G2(6,false);
  //Graf G3(4,false);
   // Graf G4(7,false);





  /*
  G.dodajGranu(0,1);
  G.dodajGranu(0,2);
  G.dodajGranu(0,4);
  G.dodajGranu(0,5);

  G.dodajGranu(1,2);
  G.dodajGranu(1,3);
  G.dodajGranu(1,5);

  G.dodajGranu(2,3);
  G.dodajGranu(2,4);

  G.dodajGranu(3,4);
  G.dodajGranu(3,5);

  G.dodajGranu(4,5);

  int k = 5;
  */

  /*
  int k=4;
  G2.dodajGranu(0,3);
  G2.dodajGranu(0,4);
  G2.dodajGranu(0,5);
  G2.dodajGranu(1,3);
  G2.dodajGranu(1,4);
  G2.dodajGranu(1,5);
  G2.dodajGranu(2,3);
  G2.dodajGranu(2,4);
  G2.dodajGranu(2,5);
  */
          /*
    int k=3;
    G3.dodajGranu(0,1);
    G3.dodajGranu(0,2);
    G3.dodajGranu(0,3);
    G3.dodajGranu(1,2);
    G3.dodajGranu(1,3);
    G3.dodajGranu(2,3);
             */
    /*int k=3;
    G4.dodajGranu(0,1);
    G4.dodajGranu(0,2);
    G4.dodajGranu(0,4);
    G4.dodajGranu(0,5);

    G4.dodajGranu(1,2);
    G4.dodajGranu(1,3);
    G4.dodajGranu(1,5);

    G4.dodajGranu(2,3);
    G4.dodajGranu(2,4);

    G4.dodajGranu(3,6);

    G4.dodajGranu(4,6);

    G4.dodajGranu(5,6);
       */
     /*
       int n=;
       int k=;
        Graf G10(n, false);
       int prvi_cv=0;
       for(int i=k; i<n; i++){
        int drugi_cv=i;



            G10.dodajGranu(prvi_cv, drugi_cv);
            prvi_cv++;
            if(prvi_cv==k)
                prvi_cv=0;

       }



  k=k+1;
  cout<<"Rezultat postoji Vertex Cover Trazene velicine : "<< (G10.vertexCover(k) ? "DA" : "NE");//treba da vrati postoji


       */








       ///generisani grafovi- prvi za testiranje ->treba da vrati da
       /*Graf G5(75, false);
       int prvi_cv=0;
       for(int i=15; i<75; i++){
        int drugi_cv=i;



            G5.dodajGranu(prvi_cv, drugi_cv);
            prvi_cv++;
            if(prvi_cv==15)
                prvi_cv=0;

       }



  k=16;
  cout<<"Rezultat postoji Vertex Cover Trazene velicine : "<< (G5.vertexCover(k) ? "DA" : "NE");//treba da vrati postoji
         */
         ///kraj prvog i poceteak drugog



     /*
       Graf G6(750, false);
       int prvi_cv=0;
       for(int i=9; i<75; i++){
        int drugi_cv=i;



            G6.dodajGranu(prvi_cv, drugi_cv);
            prvi_cv++;
            if(prvi_cv==9)
                prvi_cv=0;

       }


    int k=8;
    int k1=10;
  cout<<"Rezultat postoji Vertex Cover Trazene velicine : "<< (G6.vertexCover(k1) ? "DA" : "NE");//treba da vrati postoji za k1 a ne za k
*/
    ///kraj drugog i pocetak treceg

 /*
    Graf G7(400, false);
       int prvi_cv=0;
       for(int i=11; i<400; i++){
        int drugi_cv=i;



            G5.dodajGranu(prvi_cv, drugi_cv);
            prvi_cv++;
            if(prvi_cv==11)
                prvi_cv=0;

       }



    int k=7;//za k vrati ne
    int k1=13;//za k1 vrati se da
  cout<<"Rezultat postoji Vertex Cover Trazene velicine : "<< (G7.vertexCover(k1) ? "DA" : "NE");//treba da vrati postoji  za k1
   */
    ///pocetak cetvrtog primjera
    /*
    Graf G8(170, false);
       int prvi_cv=0;
       for(int i=13; i<170; i++){
        int drugi_cv=i;



            G8.dodajGranu(prvi_cv, drugi_cv);
            prvi_cv++;
            if(prvi_cv==13)
                prvi_cv=0;

       }



    int k=7;//za k vrati ne
    int k1=14;//za k1 vrati se da
  cout<<"Rezultat postoji Vertex Cover Trazene velicine : "<< (G8.vertexCover(k1) ? "DA" : "NE");//treba da vrati postoji
  */




    Graf G9(999, false);
       int prvi_cv=0;
       for(int i=8; i<999; i++){
        int drugi_cv=i;



            G9.dodajGranu(prvi_cv, drugi_cv);
            prvi_cv++;
            if(prvi_cv==8)
                prvi_cv=0;

       }



    int k=5;//za k vrati ne
    int k1=10;//za k1 vrati se da
  cout<<"Rezultat postoji Vertex Cover Trazene velicine : "<< (G9.vertexCover(k1) ? "DA" : "NE");//treba da vrati postoji


}


