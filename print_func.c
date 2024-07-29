#include "main.h"

/**
 * print_char - Imprime un caractère
 *
 * @args: La liste des arguments
 *
 * Return: Le nombre de caractères imprimés
 */

int print_char(va_list args)
{
    // Récupère prochain argument le convertit en char le int
    char c = va_arg(args, int);

    // Utilise fonction _putchar afficher le caractère
    _putchar(c);

    // Retourne 1 pour dire qu'un seul caractère a été imprimé
    return (1);
}

/**
 * print_string - Imprime chaîne de caractères
 *
 * @args: La liste des arguments
 *
 * Return: Le nombre de caractères imprimés
 */

int print_string(va_list args)
{
    int i, len;
    char *str;

    // Récupère le prochain argument en supposant qu'il est de type char*
    str = va_arg(args, char*);
    
    // Si la chaîne est NULL, la remplacer par "(null)"
    if (str == NULL)
    {
        str = "(null)";
    }
    
    // Calcule la longueur de la chaîne
    len = strlen(str);

    // Boucle pour afficher chaque caractère de la chaîne
    for (i = 0; i < len; i++)
    {
        _putchar(str[i]);
    }
    
    // Retourne le nombre de caractères imprimés
    return (len);
}

/**
 * print_percent - Imprime un signe pourcentage
 *
 * @args: La liste des arguments
 *
 * Return: Le nombre de caractères imprimés
 */

int print_percent(va_list args)
{
    // Indique explicitement que le paramètre args ne sera pas utilisé
    (void)args;
    
    // Utilise la fonction write pour écrire le caractère '%' sur la sortie standard
    write(1, "%", 1);
    
    // Retourne 1 pour indiquer qu'un seul caractère a été imprimé
    return (1);
}
