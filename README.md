# is-Vertex-cover

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
