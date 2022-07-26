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

install_npm(){
    echo "Installing npm (that will also install Node.js)"
    echo "Runnning: 'sudo dnf install -y npm'"
    sudo dnf install -y npm
}

remove_npm(){
    echo "Removing npm (that will also remove Node.js)"
    echo "Runnning: 'sudo dnf remove -y npm'"
    sudo dnf remove -y npm
}

list_npm_packages(){
    echo "Listing npm packages"
    # echo "Runnning: 'npm list -g --depth=0'"
    # npm list -g --depth=0
    echo "Runnning: 'npm ls'"
    npm ls
}

list_npm(){
    echo "Listing npm"
    echo "Runnning: 'npm list -g'"
    npm list -g
}

search_npm_package(){
    read -p "Enter the name of the package you want to search: " package
    echo "Searching for '$package' with 'npm search $package'"
    npm search $package
}

install_a_package(){
    read -p "What package do you want to install?: " package
    echo "Runnning: 'sudo npm install -g $package'"
    sudo npm install -g $package
}

remove_a_package(){
    read -p "What package do you want to remove?:" package
    echo "Runnning: 'sudo npm uninstall -g $package'"
    sudo npm uninstall -g $package
}

echo -ne "${OA}\n"
echo -ne "${OE}${decoLine}\n"
echo -ne "${OE}#                      ${OA}WELCOME TO                         ${OE}#\n"
echo -ne "${OE}#                  ${OA}THE NPM INSTALLER                      ${OE}#\n"
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
    echo "What do you wish to do with npm?"
    PS3='> '   # le prompt
    LISTE=('[i] install' '[r] remove' '[u] update' '[v] npm version' '[l] list npm' '[lp] list packages installed with npm' '[sp] search for an npm package' '[ip] install a package with npm' '[rp] remove a package with npm' '[q] quit program') # liste de choix disponibles
    select CHOIX in "${LISTE[@]}" ; do
        case $REPLY in
            1|i)
                install_npm
                break
                ;;
            2|r)
                remove_npm
                break
                ;;
            3|u)
                echo -ne "running 'sudo dnf update -y' to update npm\n"
                sudo dnf update -y
                break
                ;;
            4|v)
                echo "npm's version: $(npm -v)"
                break
                ;;
            
            5|l)
                echo "Listing npm"
                list_npm
                break
                ;;
            
            6|lp)
                echo "Listing npm packages"
                list_npm_packages
                break
                ;;

            7|sp)
                echo "Searching for an npm package"
                search_npm_package
                break
                ;;

            8|ip)
                echo "Installing a package"
                install_a_package
                break
                ;;
            
            9|rp)
                echo "Removing a package"
                remove_a_package
                break
                ;;

            10|q)
                echo -ne "You have decided quit the program\n"
                echo -ne "The program will now exit.\n"
                CONTINUE=0
                break
                ;;
        esac;
    done
done
echo -ne "\nEnd of Script.\e[0;0m\n"