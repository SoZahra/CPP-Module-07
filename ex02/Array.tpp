/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:11:04 by fzayani           #+#    #+#             */
/*   Updated: 2025/03/18 15:15:55 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : elements(NULL), length(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : length(n) {
    elements = new T[n]();  // Le () initialise par défaut les éléments
}

template <typename T>
Array<T>::Array(const Array& other) : length(other.length) {
    elements = new T[length]();
    for (unsigned int i = 0; i < length; i++) {
        elements[i] = other.elements[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        // Libérer la mémoire existante
        delete[] elements;

        // Allouer et copier les nouveaux éléments
        length = other.length;
        elements = new T[length]();
        for (unsigned int i = 0; i < length; i++) {
            elements[i] = other.elements[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] elements;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= length) {
        throw std::exception();
    }
    return elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= length) {
        throw std::exception();
    }
    return elements[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return length;
}

#endif