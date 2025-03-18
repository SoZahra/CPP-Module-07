/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:23:27 by fzayani           #+#    #+#             */
/*   Updated: 2025/03/18 14:34:03 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

// Fonction qui affiche un élément de n'importe quel type
template <typename T>
void printElement(T const & element) {
	std::cout << element << " ";
}

// Fonction qui double un nombre
void doubleNumber(int const & number) {
	std::cout << (number * 2) << " ";
}

// Fonction qui affiche la longueur d'une chaîne
void printLength(std::string const & str) {
	std::cout << str.length() << " ";
}

int main() {
	// Test avec un tableau d'entiers
	int intArray[] = {1, 2, 3, 4, 5};
	std::cout << "Int array: ";
	iter(intArray, 5, printElement<int>);
	std::cout << std::endl;

	// Test avec la fonction doubleNumber
	std::cout << "Doubled: ";
	iter(intArray, 5, doubleNumber);
	std::cout << std::endl;

	// Test avec un tableau de chaînes
	std::string stringArray[] = {"Hello", "World", "Templates", "Are", "Cool"};
	std::cout << "String array: ";
	iter(stringArray, 5, printElement<std::string>);
	std::cout << std::endl;

	// Test avec la fonction printLength
	std::cout << "String lengths: ";
	iter(stringArray, 5, printLength);
	std::cout << std::endl;

	// Test avec un tableau de flottants
	float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
	std::cout << "Float array: ";
	iter(floatArray, 5, printElement<float>);
	std::cout << std::endl;

	return 0;
}