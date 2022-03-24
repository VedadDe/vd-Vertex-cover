#include "graf.h"

#include <queue>

#include <algorithm>

Graf::Graf(int n, bool usmjeren) : n(n), usmjeren(usmjeren) {
  susjedi.resize(n);
  cvorovi.resize(n);
}
/**
 *   funkcija koja provjerava postoji li vec grana u grafu sa pocetnim i
 * krajnjim zadatim cvorovima. Iteretorski prolaz, ako postoji
 *   vraca true, a inace false
 */

bool Graf::postojiGrana(int i, int j) {
  for (auto it = susjedi[i].begin(); it != susjedi[i].end(); it++) {
    if (*it == j) {
      return true;
    }
  }

  return false;
}

/**
 * Glavna funkcija koja ispituje posoji lo vertex cover. U pitanju je funkcija
 * clanica pa stoga ne prima graf, vec samo vrijednost za
 * koju ispituje postoji li cover te velicine.
 *
 */
bool Graf::vertexCover(int k) {
  int izuzmi = daj_prvi_cvor();    /// pozivanje funckije koja vraaca prvi cvor
                                   /// posljednje grane
  int izuzmi1 = daj_drugi_cvor();  /// pozivanje funckije koja vraca drugi cvor
                                   /// posljednje grane

  if (uslovZaustavljanja(k)) {
    /// uslov zaustava provjerava da li je dosegnuta vrijednost k=0 ili da je
    /// graf prazan ukoliko jestevraca true
    /// ukoliko je k = 0 ili graf prazan ulazimo u blok. Primjetimo da se sad
    /// vraca trazena vrijednost, tj ako je k=0 vraca se
    /// false odnosno ako nije vraca se true jer znaci da je inace graf prazan.
    /// To provjeravamo tako sto vracamo negiranu
    /// vrijednost od k=0. Odnosno ako je k=0 false inace true. Ovo mozemo
    /// vratiti ovako jer znamo da je ili k=0 (vraca false)
    /// ili prazan graf vraca true
    return k != 0;
  } else {
    /// inace kopiramo graf u novi graf H. To radimo jednim prolaskom kroz
    /// petlju pomocu iteratora
    Graf H(n, false);

    for (int i = 0; i < n; i++) {  /// prolazak kroz sve liste
      for (auto it = susjedi[i].begin(); it != susjedi[i].end(); it++) {
        if (!H.postojiGrana(i, *it)) {
          H.dodajGranu(i, *it);
        }
      }  /// dodavanje grane  => kopiranje
    }

    // ispisiGraf(); //Dio pomagao pri testiranju
    // H.ispisiGraf();//     -||-
    izuzmi_cvor(izuzmi);     /// izbacivanje iz grafa prvog cvora grane koju smo
                             /// odlucili izbaciti. Radimo na trenutnom grafu
    H.izuzmi_cvor(izuzmi1);  /// izbacivanje iz grafa drugog cvora grane koju
                             /// smo odlucili izbaciti. Radimo na kopiranom
                             /// grafu

    k--;  /// smanjujemo k za jedan

    if (vertexCover(k) ||
        H.vertexCover(k))  /// pozivamo rekurzivno za Graf G i kopirani Graf H
      return true;

    return false;
  }
}

/// Dodavanje grane u graf
void Graf::dodajGranu(int i, int j) {
  susjedi[i].push_back(j);
  if (!usmjeren)
    susjedi[j].push_back(i);
}

// faza testiranja :)   moje funkcije

/// davanje(geter) jednog cvora za izbacivanje, ali ipak vodeci racuna o
/// povezanosti grafa.
int Graf::daj_prvi_cvor() {
  int prvi = n - 1;
  while (susjedi[prvi].size() == 0) {
    /// granicni slucaj ako je prazan Graf
    prvi--;
    if (prvi < 0)
      return -1;
  }
  return (prvi);
}

/// davanje(geter) drugog cvora za izbacivanje, ali ipak vodeci racuna o da li
/// je vec prazan.
int Graf::daj_drugi_cvor() {
  int pr = daj_prvi_cvor();
  if (pr < 0)
    return -1;

  for (auto it = susjedi[pr].begin(); it != susjedi[pr].end(); it++) {
    auto j = --susjedi[pr].end();
    if (j == it) {
      return *it;
    }
  }
}
/// ispis grafa
void Graf::ispisiGraf() {
  for (int i = 0; i < n; i++) {
    cout << i << ":";
    for (auto it = susjedi[i].begin(); it != susjedi[i].end(); it++) {
      cout << " " << *it;
      // auto j = --susjedi[i].end();  ///dio koda pomagao pri testiranju
      // if(i==(n-1) &&j==it){
      // cout<<endl;
      // cout<<"izbacujem cvorove: "<<(n-1)<<" i "<<(*it)<<endl;}
    }
    cout << endl;
  }
  /// oznacava kraj ispisa grafa
  cout << "kraj" << endl;
}

/*** izbacivanje cvora iz grafa i eventualno resizeovanje(NB: bilo je još naèina
 *za uradit ovaj dio, npr iteratorski
 *** ali sam se ipak odlucio za ovaj jer skidanje elemenata tokom iteriranje i
 *nije bas najbolja opcija)
 ***
 */
void Graf::izuzmi_cvor(int p) {
  for (int i = 0; i < n; i++) {
    susjedi[i].remove(p);

    if (i == p) {
      susjedi[i].resize(0);
    }
  }
}

/// uslov zaustavljanja funkcija koja vraca true ako je k=0 ili ako je graf
/// prazan. Primjetimo da smo u glavnoj fji provjerili
/// koji od ova dva uslova je ispunjen
bool Graf::uslovZaustavljanja(int k1) {
  // int brojac = 0;za verziju trenutnu nije potreban

  /// ako je k=0 imamo usl zaustavljanja
  if (k1 == 0) {
    return true;
  }

  /// ako je svaka lista prazna -> graf je prazan -> imamo uslov zaustavljanja
  for (int i = 0; i < n; i++) {
    if (!susjedi[i].empty())
      return false;  /// ako neka lista nije prazna imamo false, a inace true

    /*if(susjedi[i].size()!=0)
        brojac++*/
    ;
  }

  /* if (brojac==0)   {
       return true;                //vraca true ako je prazan
       }*/

  return true;
}

