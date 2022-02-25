# Bases de la Programmation en C.

* Dewame Remi


# Semaine 5 : Les types composés (1/2)

## Exercice 4
Fait dans MakeFile mcu_fatal.c mcu_putint.c mcu_readl.c GIT commit "Exercice 4"
## Exercice 5
Fait dans MakeFile mcu_wc.c mcu_wc.h mcu_putint.c mcu_wl.c mcu_wl.h  GIT commit "Exercice 5"
## Exercice 6
Fait dans MakeFile mcu_rev.c mcu_rev.h GIT commit "Exercice 6"
## Exercice 7
Fait dans MakeFile mcu_uniq.c GIT commit "Exercice 7"

# Semaine 6 : Les types composés (2/2)

## Exercice 8
Taille int = 4bits
la valeur 0x41424344 est divisé par 4 44 43 42 41
code ascii DCBA
```
exo_8: exo_8.c
	cc -o exo_8 exo_8.c

./exo_8 > data.bin
hd output.bin

00000000  44 43 42 41           |DCBA|
00000004


```

## Exercice 9
```
make output
./output > output.bin
hd output.bin

00000000  2a 2c 0a 00 00 00 a0 41                           |*,.....A|
00000008
```
## Exercice 10
```
make input
./input < output.bin

666666
20.000000
```
## Exercice 11
Fait dans common.h output.c intput.c GIT commit "Exercice 11 à 12"
## Exercice 12
Fait dans common.h output.c intput.c GIT commit "Exercice 11 à 12"
## Exercice 13
Fait dans common.h output.c intput.c GIT commit "Exercice 13"