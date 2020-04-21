/*
Bartłomiej Długosz - Jądro systemu na przykładzie LINUX

=== TREŚĆ ZADANIA ===
b) część druga
@@@
Można bez problemu skopiować kod z części pierwszej - 
dodając/zmieniając nowe elementy w nim + wykonanie części drugiej.
@@@

(1) tym razem wynik z konsoli zapisz w buforze (zakładamy, że rozmiar nie przekroczy 1000 znaków).  
(2) następnie z poziomu programu stwórz plik o nazwie „result.txt”, który będzie miał następujące prawa dostępu: grupa oraz inni będą mieli prawo do odczytu, natomiast użytkownik ma posiadać prawa do odczytu oraz zapisu.  
Uwaga: zabronione jest użycie funkcji:

int open(const char *pathname, int flags, mode_t mode);  
int open(const char *pathname, int flags);

Użyj odpowiedniego system calla, aby pozyskać informację na temat uprawnień do jego dostępu, które wypiszesz na konsolę.  
(3) teraz, przy użyciu system calla zmień prawa dostepu do pliku „result.txt” na 707. Ponownie wypisz jego prawa dostępu na konsolę.  
(4) następnie przywróć plik „result.txt” do praw dostępu z punktu 2), używając drugiego sposobu na zmianę a następnie wypisz tę informację na konsolę.  
(5) na koniec należy zamknąć plik, który otworzyliśmy oraz zwolnić wszelką zaalokowaną pamięć. 
*/




int main (int argc, char *argv[]) {
    

    return 0;
}
    


/*
Przykładowe poprawne wyjścia:
Powinnien zostać wypisany komunikat o poprawnym stworzeniu pliku oraz
wpisaniu do niego rezultatu wyszukiwania z cześci pierwszej.
Powinny zostać wypisane informacje w konsoli na temat uprawnień do tego pliku.
*/