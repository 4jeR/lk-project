/*
Bartłomiej Długosz - Jądro systemu operacyjnego na przykładzie Linux.

ZADANIE 1. - Własne polecenie find (System Calls)
PRZYGOTOWANIE:
a) Uruchom skrypt: ./run_dlugosz_bartlomiej.sh clone
b) Stwórz przykładowe dane: ./run_dlugosz_bartlomiej.sh run

Napisz program, który znajdzie i wypisze na standardowe wyjście
wszystkie pliki oraz katalogi, które w swojej nazwie zawierają 
dany ciąg znaków (zadany jako argument wywołania programu).
Wyniki powinny być wypisane z widocznymi wcięciami, aby zaznaczyć
ścieżkę, w której się znajdują.


./plik_wykonywalny ciag_znakow

WSKAZÓWKA: pomocne będzie przestudiowanie manuala: opendir, readdir, string.
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