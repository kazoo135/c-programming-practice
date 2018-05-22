/*
 * ternaryOperator_0.c
 * 
 * Copyright 2018 Caruso <kazoo135@github.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main()
{
	int x, y, a, b, bigger, less_than_zero;
	printf("Enter and integer: ");
	scanf("%d", &x);
	printf("Enter one more: ");
	scanf("%d", &y);
	
	x > y ? printf("x %d is greater than y %d\n", x, y): printf("y %d is greater than x %d\n", y, x);
	a = 20;
	b = 12;
	// Assign value to a or b depending on condigition
	bigger = a > b ? a: b;
	printf("The larger of the two is %d\n", bigger);
	
	a = 10;
	b = 30;
	less_than_zero = (a-b)< 0 ? -1 : 1; 
	printf("%d\n", less_than_zero);
	
	
	
	
	return 0;
}

