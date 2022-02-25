# TP d'introduction à la pratique du lanange C

* Dewame Remi


# Semaine 3 : Les outils de compilation (1/2)

## Exercice 1
Le programme ne peut pas fonctionner étant donner que T n'est pas définie.

## Exercice 2
Premiére solution  
bash$ gcc macro1.c -DT=65  
La compilation est donc effectuer car nous définition le T   
   
Deuxieme solution  
Fait dans macro1.C GIT commit "Exercice 1 à 2 + Modification du ReadMe"

## Exercice 3
bash$ gcc -E macro1.c  
La commande permet d'executer seulment le traitement préprocesseur et de produire le fichier resultant.

## Exercice 4
bash$ gcc -E macro1.c | grep -v "#"  
La commande permet d'executer le traitement préprocesseur et retire les ligne commençant par "#".

## Exercice 5
Fait dans macro1.c GIT commit "Exercice 5"

## Exercice 6
En exécutant ont obtient "01"  
Le resultat est donc different de ce qu'on avais predit en TD.

## Exercice 7
(1)bash$ gcc compcond.c  
(2)bash$ gcc -E compcond.c  

## Exercice 8
(1)bash$ gcc compcond.c -DNO_LOG  
(2)bash$ gcc compcond.c  
La commande 1 et 2 effectue une compilation normal mais en verifiant avec -E nous pouvont voir une différence en effet "NO_Log" est definie dans la premiere commande or dans la deuxieme ce n'est pas le cas.

## Exercice 9
La commande suivante :  
bash$ gcc compchk.c   
Renvoie l'erreur :  
compchk.c:2:2: error: #error "définissez SIZE avec l'option -D SIZE=n"  
2 | #error "définissez SIZE avec l'option -D SIZE=n"  

## Exercice 10
Si nous tentons de definir SIZE avec une valeur non puissance de Deux nous obtenons un Warning :  
compchk.c:6:2: warning: #warning "SIZE devrait être une puissance de 2." [-Wcpp]  
6 | #warning "SIZE devrait être une puissance de 2."  

## Exercice 11
La fonction putchar est definie dans le fichier systeme "<stdio.h>"

## Exercice 12
Fait dans include_file.c GIT commit "Exercice 12"
La commande :  
bash$ gcc -E include_file.c  
Permet d'obtenir le nombre de ligne du fichier produit par le préprocesseur:
"# 858 "/usr/include/stdio.h" 3 4"  
extern int __uflow (FILE *);" 

## Exercice 13
Bob fais des erreurs, en effet il definit deux fois <abs.h> ce qui n'est pas correcte car une fonction ne peux avoir plusieurs definition.

## Exercice 14
fait dans abs.h GIT commit "Exercice 13 à 14"

# Semaine 4 : Les outils de compilation (2/2)

## Exercice 15 à 25

Fait dans compil_modulaire/ReadMe


