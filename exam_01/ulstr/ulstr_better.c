/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr_better.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:07:51 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/10 20:17:19 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void reverse_case(char *str) {
    int i = 0;
    
    while (str[i] != '\0') {
        char c = str[i];

        if (c >= 'a' && c <= 'z') {
            c -= 32;
        } else if (c >= 'A' && c <= 'Z') {
            c += 32;
        }

        write(1, &c, 1);
        i++;
    }

    write(1, "\n", 1);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        write(1, "\n", 1);
        return 0;
    }

    reverse_case(argv[1]);
    return 0;
}
