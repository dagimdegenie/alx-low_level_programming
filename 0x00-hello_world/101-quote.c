#!/bin/bash
/**
 * main -prints out a string using write
 *Description: Program that prints out the string s followed by a new line
 * Return: int 0 when done and no errors.
 * Could not use any system call. or any standardlibrary functions.
 * Used write tooutput to stderror. Could have tried 60, 61, and higher and 
 * it just won't pass because there are prob other things in buffer
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
