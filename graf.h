#ifndef GRAF_H
#define GRAF_H
#include <vector>
#include <list>
#include <iostream>
#include <deque>
using namespace std;

struct Cvor {
  int vp;
  int vk;
};

class Graf {
  int n; // broj cvorova
  vector<list<int>> susjedi;
  vector<list<int>> susjedi1;
  vector<Cvor> cvorovi;
  bool usmjeren;
  bool uslovZaustavljanja(int k1);
  bool skrozPrazan();
  bool prazanGraf1(int k1);
  int  izbaciti();
  int  daj_prvi_cvor();
  int  daj_drugi_cvor();
  void izuzmi_cvor(int p);
  bool postojiGrana(int i, int j );

  public:
  Graf(int n, bool usmjeren = false);
  void dodajGranu(int i, int j);
  void ispisiGraf();



  //moja funkcija
  bool vertexCover( int k);



};





#endif // GRAF_H


