# Maitrise de la Programmation en C.

* Dewame Remi


# Semaine 7 : Les pointeur

## Exercice 1 
Fait dans swap.c GIT commit "Ajout Makefile, Readme, dossier src et build + Exercice 1"  

## Exercice 2
Fait dans division.c GIT commit "Exercice 2"  
## Exercice 3
Fait dans arg_main.c GIT commit "Exercice 3"  

La commande suivante:
```
$ ./build/arg_main "test"
```
Renvoie :
```
test
```
Explication : Le main print chaque caractere de la chaine placer en argument dans le terminal.
## Exercice 4
### Commande 1
Fait dans skip_space.c GIT commit "Exercice 4"  
  

La commande suivante :
```
$ ./build/strip_spaces_tst "FOO BAR"
```
Renvoie :
```
argv  : FOO BAR
strip : FOO BAR
strip : FOO BAR
argv  : FOO BAR
```
Explication : Les pointeurs argv et strip pointent une chaine de caractére à des endroit différent, la chaine de caractere ne change pas selon l'endroit donc le print est le mếme.

### Commande 2
La commande suivante :
```
$ ./build/strip_spaces_tst "       FOO BAR"
```
Renvoie :
```
argv  :        FOO BAR
strip : FOO BAR
strip : FOO BAR
argv  :        FOO BAR

```
Explication : Le pointeurs argv et strip pointent une même chaine de caractére à des endroit différent.  
* le premier argv print la chaine original sans retirer les espace.
* Le second argv print la même chaine que la premiére étant donner que les caractere sont deja en majuscule incluent les espaces.
* Le premier strip print la chaine en retirant les espace.
* Le second strip print la mếme choses étant donner que la chaine est déja en majuscule.


### Commande 3
La commande suivante :
```
$ ./build/strip_spaces_tst "Foo Bar"
```
Renvoie :
```
argv  : Foo Bar
strip : Foo Bar
strip : FOO BAR
argv  : FOO BAR

```
Explication : Le pointeurs argv et strip pointent une même chaine de caractére à des endroit différent.  
* le premier argv print la chaine original sans retirer les espace.
* Le second argv print la même chaine en passant les caractere en majuscule.
* Le premier strip print la chaine(aucun espace a retirer).
* Le second strip print la mếme chaine en passant les caractere en majuscule.

### Commande 4
La commande suivante :
```
$ ./build/strip_spaces_tst "       Foo Bar"

```
Renvoie :
```
argv  :        Foo Bar
strip : Foo Bar
strip : FOO BAR
argv  :        FOO BAR
```
Explication : Le pointeurs argv et strip pointent une même chaine de caractére à des endroit différent.  
* le premier argv print la chaine original sans retirer les espace.
* Le second argv print la même chaine en passant les caractere en majuscule incluent les espace.
* Le premier strip print la chaine en retirant les espace.
* Le second strip print la mếme chaine en passant les caractere en majuscule.



## Exercice 5
Fait dans swap_ptr.c GIT commit "Exercice 5" 
## Exercice 6
Fait dans search_dicho GIT commit "Exercice6"