/*
Bartłomiej Długosz - Jądro systemu na przykładzie LINUX

=== TREŚĆ ZADANIA ===
a) część pierwsza

Napisz program w języku C, który znajdzie i wypisze na standardowe wyjście
wszystkie pliki oraz katalogi, które w swojej nazwie zawierają 
dany ciąg znaków (zadany jako argument wywołania programu).
Wyniki powinny być wypisane z widocznymi wcięciami, aby zaznaczyć
ścieżkę, w której się znajdują, a katalogi oznaczone: [to_jest_katalog].

Kompilować do pliku wykonywalnego o nazwie 'my_find'.

./my_find ciag_znakow

WSKAZÓWKA: pomocne będzie przestudiowanie manuala m.in. opendir, readdir, string.

*/




int main (int argc, char *argv[]) {
    

    return 0;
}
    


/*
Przykładowe poprawne wyjścia:
=== PRZYKŁAD 1 === 
Szukany ciąg znaków: foo1
Wyniki:
[find_here]
    [dir1]
        foo1.txt
    [dir2]
        [dir2_1]
        foo1.txt

=== PRZYKŁAD 2 === 
Szukany ciąg znaków: boo4
Wyniki:
[find_here]
    [dir1]
        boo4foo.txt
    [dir2]
        [dir2_1]
            boo4.txt
            xooboo4.txt

=== PRZYKŁAD 3 === 
Szukany ciąg znaków: oo1
Wyniki:
[find_here]
    xoo1boo.txt
    [dir1]
        foo1.txt
    [dir2]
        goo1moo.txt
        xoo1.txt
        [dir2_1]
            moo1.txt
        foo1.txt
    booxoo1.txt
*/