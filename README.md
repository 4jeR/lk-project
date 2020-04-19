### Bartłomiej Długosz - Jądro systemu na przykładzie LINUX

## ZADANIE 1. - Własne polecenie find (System Calls)

## CEL ZADANIA:
### Wykorzystanie w praktyce wywołań systemowych - komunikacją pomiędzy jądrem systemu a programem.

### PRZYGOTOWANIE:
a) Uruchom skrypt: 
```
./run_dlugosz_bartlomiej.sh clone
```
b) Stwórz przykładowe dane:
```
./run_dlugosz_bartlomiej.sh run
```
## Co trzeba zrobić:
**Napisz program w języku C, który znajdzie i wypisze na standardowe wyjście
wszystkie pliki oraz katalogi, które w swojej nazwie zawierają 
dany ciąg znaków (zadany jako argument wywołania programu).
Wyniki powinny być wypisane z widocznymi wcięciami, aby zaznaczyć
ścieżkę, w której się znajdują.**


```
./my_find ciag_znakow
```
WSKAZÓWKA: pomocne będzie przestudiowanie manuala m.in. opendir, readdir, string.
 
## Na koniec
Aby wyczyścić to, co zostało ściągnięte przez skrypt 'clone' należy użyć flagi 'clean'.
```
./run_dlugosz_bartlomiej.sh clean
```
### UWAGA:
**USUNIE TO RÓWNIEŻ PLIK task1.c !!!**

Link do wideoprezentacji: https://www.youtube.com/watch?v=9qwW-VgKIz0
