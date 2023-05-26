#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#define BUFF_SIZE 1024
#define BUFF_FLUSH -1
#define FIELD_BUF_SIZE 50  
#define NULL_STRING "(null)"
#define PARAMETRES_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define CONVERT_LOCASE   1
#define CONVERT_UNSIGNED 2

/**
 * define the struct parameters
 *
 * @unsign : if the flag is unsigned give this value 
 *
 * @plus_f: shown when plus_f is specified
 * @minus_f: shown when the minus_f is specified
 * @space_f: shown when the space_f is specified 
 * @hashtag_f: shown when the hashtag_f is specified
 * @zero_f: shown when the zero_f is specified 
 * 
 *@width: field width specified
 *@precision: field precision specified 
 *
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l_modifier is specified
 *
 */
typedef struct parameters
{
	unsigned int unisgn : 1;
	unsigned int plus_f : 1;
	unsigned int space_f : 1;
	unsigned int hashtag_f : 1;
	unsigned int zero_f : 1;
	unsigned int minus_f : 1;

	unsigned int width;
	unsigned int precision;

	unsigned int h_modifier : 1;
	unsigned int l_modifier : 1;
}_paramet;
/**
 * defining struct specifiers
 * 
 * @specifier: format 
 * @funct: function associated
 */
typedef struct specifiers
{	char *specifier;
	int (*funct) (va_list, _paramet *);
}_specif;

/*_put.c module */
int _putchar(int c);
int _puts(char *strg);

/****************** FUNCTIONS ******************/

/* functions to print */
int print_char(va_list arp, _paramet *param);
int print_int(va_list arp, _paramet *param);
int print_string(va_list arp, _paramet *param);
int print_percent(va_list arp, _paramet *param);
int print_S(va_list arp, _paramet *param);
/*


