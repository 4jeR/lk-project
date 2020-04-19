/*
Bartłomiej Długosz - Jądro systemu na przykładzie LINUX

ZADANIE 1. - Własne polecenie find (System Calls)
CEL ZADANIA:
Wykorzystanie w praktyce wywołań systemowych do zarządzania
wirtualnym systemem plikowym poprzez program w języku C.

### PRZYGOTOWANIE:
a) Uruchom skrypt: 

./run_dlugosz_bartlomiej.sh clone

b) Stwórz przykładowe dane:

./run_dlugosz_bartlomiej.sh run

=== TREŚĆ ZADANIA ===

Napisz program w języku C, który znajdzie i wypisze na standardowe wyjście
wszystkie pliki oraz katalogi, które w swojej nazwie zawierają 
dany ciąg znaków (zadany jako argument wywołania programu).
Wyniki powinny być wypisane z widocznymi wcięciami, aby zaznaczyć
ścieżkę, w której się znajdują.


./my_find ciag_znakow

WSKAZÓWKA: pomocne będzie przestudiowanie manuala m.in. opendir, readdir, string.
 
Na koniec
Aby wyczyścić to, co zostało ściągnięte przez skrypt 'clone' należy użyć flagi 'clean'.

./run_dlugosz_bartlomiej.sh clean

UWAGA:
USUNIE TO RÓWNIEŻ TEN PLIK !!!

Link do wideoprezentacji: https://www.youtube.com/watch?v=9qwW-VgKIz0
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