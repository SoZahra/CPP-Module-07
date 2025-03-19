/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:46:18 by fzayani           #+#    #+#             */
/*   Updated: 2025/03/18 16:46:52 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main() {
	// Test du constructeur par défaut
	Array<int> emptyArray;
	std::cout << "Empty array size: " << emptyArray.size() << std::endl;

	// Test du constructeur avec taille
	Array<int> intArray(5);
	std::cout << "Int array size: " << intArray.size() << std::endl;

	// Accès et modification des éléments
	for (unsigned int i = 0; i < intArray.size(); i++) {
		intArray[i] = i * 10;
	}

	// Affichage des éléments
	std::cout << "Int array elements: ";
	for (unsigned int i = 0; i < intArray.size(); i++) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	// Test du constructeur par copie
	Array<int> copiedArray(intArray);
	std::cout << "Copied array size: " << copiedArray.size() << std::endl;

	// Modification de l'original après copie
	intArray[0] = 999;

	// Vérifier que la copie n'est pas affectée
	std::cout << "Original array after modification: " << intArray[0] << std::endl;
	std::cout << "Copied array (should be unchanged): " << copiedArray[0] << std::endl;

	// Test de l'opérateur d'assignation
	Array<int> assignedArray;
	assignedArray = intArray;
	std::cout << "Assigned array size: " << assignedArray.size() << std::endl;

	// Modification de l'original après assignation
	intArray[1] = 888;

	// Vérifier que l'assigné n'est pas affecté
	std::cout << "Original array after modification: " << intArray[1] << std::endl;
	std::cout << "Assigned array (should be unchanged): " << assignedArray[1] << std::endl;

	// Test avec un autre type
	Array<std::string> stringArray(3);
	stringArray[0] = "Hello";
	stringArray[1] = "Template";
	stringArray[2] = "World";

	std::cout << "String array elements: ";
	for (unsigned int i = 0; i < stringArray.size(); i++) {
		std::cout << stringArray[i] << " ";
	}
	std::cout << std::endl;

	// Test de l'exception pour index hors limites
	try {
		std::cout << "Accessing out of bounds element: ";
		std::cout << intArray[10] << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Exception caught: index out of bounds" << std::endl;
	}

	return 0;
}