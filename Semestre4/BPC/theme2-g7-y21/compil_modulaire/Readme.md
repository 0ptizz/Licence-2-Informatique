# Compilation modulaire

# Semaine 4 : Les outils de compilation (2/2)

## Exercice 15
La commande utilisable pour la ligne de compilation est:  
bash$ gcc -c put_numbers.c  
ou  
bash$ cc -c put_numbers.c  
A ce stade cela ne fonctionneras pas étant donner qu'aucune fonction main à été creer, il faudras creer une fonction main dans un autre fichier.


## Exercice 16
Fait dans put_numbers.c GIT commit "Exercice 16"

## Exercice 17
Pour compiler le programme il faut utiliser la commande :  
bash$ gcc -c numbers-test.c  
  
La compilation provoque des warning pour eviter cela il faut declarer toutes les fonction publique.

## Exercice 18
Fait dans numbers.h et numbers-test.c GIT commit "Exercice 18"  
Il n'est pas neccesaire de declarer les fonction privé étant donner qu'elle sont accessible seulement depuis le fichier ou elle ont été définie.  

## Exercice 19
Afin de produire l'executable en liant les deux module il faut utilisé la commande :  
bash$ gcc -o numbers_test numbers-test.o put_numbers.o

## Exercice 20
fait dans compiletestnumbers.sh  
contenu :  
gcc -c put_numbers.c  
gcc -o numbers-test.c  
gcc -o numbers_test put_numbers.o numbers-test.o  
./numbers_test  
  
Afin de rendre le .sh executable nous utilisions la commande :  
bash$ chmod +x compiletestnumbers.sh 

## Exercice 21
Fait dans Makefile GIT commit "Exercice 21 à 22"

## Exercice 22
Fait dans Makefile GIT commit "Exercice 21 à 22"

## Exercice 23
Fait dans les different scenario GIT "23 à 26"

### Exercice 24
Fait dans programme.c GIT commit "Exercice 23 à 26"  
Avec l'outil gdb nous avons remarquer un débordement de tableau nous avons donc modifier le programme afin que cela ne ce produise plus :  
for  ( i  = 0 ;  i<= 10  ;  i ++)  
devient :  
for  ( i  = 0 ;  i< 10  ;  i ++)


## Exercice 25
Fait dans programme.c GIT commit "Exercice 23 à 26"  


## Exercice 26
La valeur de i est donc :  
i = 10  
Non Debordement de tableau danc cette nouvelle version

