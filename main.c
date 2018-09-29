/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jeanc
 *
 * Created on 29 de septiembre de 2018, 01:37 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    FILE *anuncio;
    anuncio= fopen("AnuncioImportante.txt","w");
    fprintf(anuncio, "Y ahora? xd");
    return (EXIT_SUCCESS);
}

