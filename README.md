# holbertonschool-printf

-------

Description:

-------

Ce projet d'équipe fait partie du programme holberton school où le but est de reproduire la fonction prinf() de la bibliotèque standard C.

Ce que l'on a appris avec ce projet :

- [ ] Comment utiliser git en équipe
- [ ] Appliquer les fonctions variadiques à un grand projet
- [ ] Les complexités de printf
- [ ] Gérer un grand nombre de fichiers et trouver un bon flux de travail

-----------------

# Prototype

int _printf(const char *format, ...);

-----------------

COMMENT UTILISER LA FONCTION

Vous pouvez appeler la fonction _printf() :
```
#include "main.h"

int main() 
{
    _printf("texte:[format]\n", "se que l'on veux comme valeur");
    return (0);
}
```

-----------------

FORMATAGE :

Vous pouvez utiliser un indicateur de format pour intégrer une variable dans votre texte à afficher, voici la liste des formats disponibles :

|Format	| Type	| Description |
| --- | --- | --- |
|%d	| int	| Afficher un nombre décimal |
|%i	| int	| Afficher un nombre entier |
|%c	| int/char	| Afficher un char OU convertir un int en sa valeur char |
|%s	| char *	| Afficher une chaîne de caractères |

-----------------

EXEMPLE D'UTILISATION DE _printf:

```
_printf("Exemples decimaux:[%d]\n", 42);
_printf("Exemples entiers:[%i]\n", 42);
_printf("Exemples char:[%c]\n", "holberton school sont les meilleurs");
```

-----------------

EXEMPLE DE SORTIE :

```
$ ./a.out
Exemples decimaux:[42]
Exemples entiers:[42]
Exemples char:[holberton school sont les meilleurs]
```

-----------------

FLOWCHART :
![flowchart printf 26_07_2024](https://github.com/user-attachments/assets/0ffecb85-b5fb-4a3f-bb29-b313df445def)

-----------------

AUTEUR
TIAB Houcine, GLE Rosario
