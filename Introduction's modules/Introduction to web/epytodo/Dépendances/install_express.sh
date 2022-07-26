#!/bin/bash
##
## EPITECH PROJECT, 2021
## epitodo - install_npm.sh
## File description:
## jitter jitter
##

OA='\033[1;32m\033[1;40m'
OE='\033[1;33m\033[1;40m'
decoLine="###########################################################"
C='\033[0m'
CONTINUE=1

install_express() {
    echo "Running: 'sudo npm install express --save'"
    sudo npm install express --save
    echo "Check out this website for more info about exress:"
    echo "https://expressjs.com/en/starter/installing.html"
}

remove_express() {
    echo "Running: 'sudo npm uninstall -g express'"
    sudo npm uninstall -g express
}

echo -ne "${OA}\n"
echo -ne "${OE}${decoLine}\n"
echo -ne "${OE}#                      ${OA}WELCOME TO                         ${OE}#\n"
echo -ne "${OE}#               ${OA}THE EXPRESS INSTALLER                     ${OE}#\n"
echo -ne "${OE}#                      ${OA}FOR FEDORA                         ${OE}#\n"
echo -ne "${OE}#                   ${OA}                                      ${OE}#\n"
echo -ne "${OE}#                      ${OA}Created by                         ${OE}#\n"
echo -ne "${OE}#                   ${OA}                                      ${OE}#\n"
echo -ne "${OE}#                ${OA}(c) Henry Letellier                      ${OE}#\n"
echo -ne "${OE}#                   ${OA}                                      ${OE}#\n"
echo -ne "${OE}#                   ${OA}    Website:                          ${OE}#\n"
echo -ne "${OE}#         ${OA}https://hanralatalliar.wordpress.com/           ${OE}#\n"
echo -ne "${OE}${decoLine}${OA}\n\n"
echo -ne "${OE}\nThis program is provided as if and without any warranty.\nUse at your own risk.\n"
while [ $CONTINUE -eq 1 ]
do
    echo -e "${OE}What do you wish to do with EXPRESS?"
    PS3='> '   # le prompt
    LISTE=('[i] install' '[r] remove' '[l] link to the website' '[q] quit program') # liste de choix disponibles
    select CHOIX in "${LISTE[@]}" ; do
        case $REPLY in
            1|i)
                echo "Installing a express"
                install_express
                break
                ;;

            2|r)
                echo "Removing a package"
                remove_express
                break
                ;;

            3|l)
                echo "Check out this website for more info about exress:"
                echo "https://expressjs.com/en/starter/installing.html"
                break
                ;;

            4|q)
                echo -ne "You have decided quit the program\n"
                echo -ne "The program will now exit.\n"
                CONTINUE=0
                break
                ;;
        esac;
    done
done
echo -ne "\nEnd of Script.\e[0;0m\n"
