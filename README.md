# is-Vertex-cover



Poznato je da je VERTEX COVER NP-kompletan problem. Međutim, ovaj
problem spada u tzv. fixedparameter tractable (FPT) probleme, što znači da
je moguće ispitati da li postoji VERTEX COVER veličine u vremenu *,
gdje je konstanta koja ne zavisi od ( je veličina problema, u ovom slučaju
broj vrhova grafa). Implementirati algoritam koji u vremenu 2 ispituje da
li postoji vertex cover veličine n. Algoritam radi na način da odabere neku
granu grafa te onda ispituje postoji li vertex cover veličine 1 za
grafove i . Potrebno je generisati barem 5 različitih grafova i na njima
testirati rješenje. Graf čiji je vertex cover manji ili jednak 15 (a broj vrhova
relativno veliki) možete kreirati na način da se prilikom generisanja grana
grafa osigurate da je jedan kraj grane među početnih (ili krajnjih) 15 čvorova.


Vertex Cover Za svaki čvor uw od G, bilo koji Vertex-Cover od G sadrži
barem jedan od cvorova u ili w.
Vec sad je jasno da koristimo rekurzijzu, i to dva puta pri svakoj iteraciji.
algoritam je naredni:
 + vertexCover(Graf G, int k)
 + Ako G nema ivica, tada vra´ca true
 + ako k = 0 onda vrati false
 + nek su u i w Vrhovi G, i ˇcine neku granu
 + ako VertexCoverFPT (G-u, k-1) onda vrati true
 + ako VertexCoverFPT (G-w, k-1) onda vrati true
 + inace vrati false

Ovaj algoritam je očito tačan kada je k = 0. Vidimo za k veće od 0;
Ako G ima pokrivač C veličine k, tada ovaj pokrivač sadrži barem jedan
od u ili w. Ako C sadrži u, tada će se prvi rekurzivni poziv vratiti true. Ako
C sadrži w (ali ne i u), drugi rekurzivni poziv vratit ce true. Inače, ako G
nema pokrivača veličine k, tada algoritam vraća false.
