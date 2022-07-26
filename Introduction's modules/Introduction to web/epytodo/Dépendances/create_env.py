#!/bin/env python3
##
## EPITECH PROJECT, 2021
## epiTodo
## File description:
## create_env.py
##

__Version__ = "1.0.0"
__AUthor__ = "Henry Letellier"
__Description__ = """This program is here to help you set up the .env file used for the project Epytodo."""

# Il faut utiliser un .sql, un pip install sqlalchemy
# to design sql databases, use drawsql
# //# to create a database, use createdb

from sys import argv
from os.path import exists
from os import remove

class Constants():
    """ Global variables """
    def __init__(self) -> None:
        """ local variables """
        self.success = 0
        self.err = 84
        self.error = 84
        self.cont = True
        self.env_cont = True
        self.env_changes_written = True
        self.choice = ""
        self.filename = argv[0]
        self.encoding = "utf-8"
        self.args = argv
        self.encoding = "utf-8"
        self.env_filepath = ".env"
        self.help_option = ["-h", "/?", "-?", "h", "--?", "?", "--h", "--help", "-help", "help", "help"]
        self.create_option = ["--c", "-c", "c", "--create", "-create", "create"]
        self.delete_option = ["d", "-d", "--d", "-r", "--r", "-r", "r", "--delete", "-delete", "delete", "remove", "--remove", "-remove"]
        self.list_option = ["-l", "--list", "-list", "list", "l"]
        self.show_option = ["s", "--s", "-s", "--show", "-show", "show", "display", "-display", "--display"]
        self.version_option = ["-v", "--v", "v", "--version", "-version", "version"]
        self.environement_version_option = ["-ev", "--ev", "ev", "--environement-version", "-environement-version", "environement-version", "environement version"]
        self.quit_option = ["--q", "-q", "q", "--quit", "-quit", "quit", "--exit", "-exit", "exit", "leave", "-leave", "--leave"]
        self.edit_option = ["--edit", "-edit", "edit", "e", "-e", "--e", "--edit-env", "-edit-env", "edit-env", "edit env", "--edit env", "-edit env"]
        self.env_add_option = ["-a", "--a", "a", "--add", "-add", "add", "--env-add", "-env-add", "env-add", "--env add", "-env add", "env add"]
        self.env_view_option = ["-f", "--f", "f", "-v", "--v", "v", "--view", "-view", "view", "--env-view", "-env-view", "env-view", "--env view", "-env view", "env view", "--file", "-file", "file", "--env-file", "-env-file", "env-file", "--env file", "-env file", "env file"]
        self.env_write_option = ["-w", "--w", "w", "--write", "-write", "write", "--env-write", "-env-write", "env-write", "--env write", "-env write", "env write", "-apply", "--apply", "apply", "--env-apply", "-env-apply", "env-apply", "--env apply", "-env apply", "env apply"]
        self.env_term_option = ["l", "-l", "--l", "term", "--term", "-term", "--list t", "-list t", "list t", "--listt", "-listt", "listt", "--list_t", "-list_t", "list_t", "--list-term", "-list-term", "list-term", "--list term", "-list term", "list term"]
        self.env_definition_option = ["c", "-c", "--c", "definition", "--definition", "-definition", "--list d", "-list d", "list d", "--listd", "-listd", "listd", "--list_d", "-list_d", "list_d", "--list-definition", "-list-definition", "list-definition", "--list definition", "-list definition", "list definition"]
        self.env_filepath = ".env"
        self.env_file_content = list()

class Display(Constants):
    """ Display messages for the program """
    def welcome_message(self) -> int:
        """ Display a welcome message """
        print("Welcome to epiTodo environement manager!")
        print(f"Enter {self.filename} -h to display the help section help")
        return self.success

    def help_message(self) -> int:
        """ Display a help message """
        print("Usage:")
        print("\tcreate_env.py [OPTION]")
        print("\t-h\t\tdisplay this help")
        print("\t-c\t\tcreate the environement")
        print("\t-d\t\tdelete the environement")
        print("\t-l, -s\t\tlist the environement's content")
        print("\t-e\t\tedit the environement")
        print("\t-v\t\tdisplay this program's version")
        print("\t-ev\t\tdisplay the environement version")
        return self.success
        
    def starting_options(self) -> int:
        """ Display the menu """
        print("[c] - Create environement  \t[d] - Delete environement")
        print("[l] - List environement    \t[s] - Show environement")
        print("[v] - Version              \t[ev] - Environement version")
        print("[e] - edit the environement\t[h] - Help")
        print("[q] - Quit")
        return self.success

    def option_not_found(self) -> int:
        """ Display an error message """
        print("The option you entered is unknown or not supported by this program")
        return self.success

    def env_empty_msg(self) -> int:
        """ Inform the user that the environement is empty """
        print("The environement is empty")
        return self.success

    def env_content(self, env_path:str, encoding:str) -> int:
        """ Display the content of an environement file """
        if exists(env_path) == True:
            file=open(env_path, "r", encoding=encoding)
            content = file.read()
            file.close()
            print("================= Filename ==================")
            print(f"{env_path}")
            print("===== Beginning of environement content =====")
            print(f"{content}")
            print("======== End of environement content ========")
        else:
            print(f"The file '{env_path}' does not exist")
        return self.success

    def exit_msg(self) -> int:
        """ Display a goodbye message """
        print("Goodbye, see you next time!")
        self.cont = False
        return self.success

    def edit_help(self) -> None:
        """ Display help for the edit section """
        print("USAGE:")
        print("\t-h\t\tdisplay this help")
        print("\t-a\t\tadd a new variable")
        print("\t-e\t\tedit a variable's value")
        print("\t-f\t\tview the environement file")
        print("\t-d\t\tdelete an existing variable")
        print("\t-l\t\tlist the environement variables")
        print("\t-c\t\tlist the content of the environement variables")
        print("\t-w\t\twrite the changes\n\t\t\t(if not used, the environement will be left untouched")
        print("\t-q\t\tquit the editing mode")

    def env_dict_view(self, env_content:str, part:str) -> None:
        """ Display the environement variables based off a dictionnary """
        blank = " "
        inner_lines = "-"
        top_line = "-"
        bottom_line = "_"
        nb_chars = 52
        top_corners = "+"
        bottom_corners = "|"
        side_corners = "|"
        saved = ""
        if self.env_changes_written == False:
            saved = "*"
        what_to_dislay="all"
        if part == "term":
            what_to_dislay = "the terms"
        elif part == "definition":
            what_to_dislay = "the definitions"
        print(f"\nShowing {what_to_dislay} of the environement variables {saved}\n")
        print(f"{top_corners}{Get.nb_white_spaces(self, top_line, (nb_chars+2))}{top_corners}")
        for index, term in enumerate(env_content):
            if part == "term":
                print(f"{side_corners} {term}{Get.nb_white_spaces(self, blank, (nb_chars-len(term))) } {side_corners}")
            elif part == "definition":
                print(f"{side_corners} {env_content[term]}{Get.nb_white_spaces(self, blank, (nb_chars-len(env_content[term])))} {side_corners}")
            else:
                print(f"{side_corners} {term}={env_content[term]}{Get.nb_white_spaces(self, blank, (nb_chars-(len(term)+1+len(env_content[term]))))} {side_corners}")
            if index < len(env_content)-1:
                print(f"{side_corners}{Get.nb_white_spaces(self, inner_lines, (nb_chars+2))}{side_corners}")
            else:
                print(f"{bottom_corners}{Get.nb_white_spaces(self, bottom_line, (nb_chars+2))}{bottom_corners}")
        if self.env_changes_written == False:
            print(f"{saved} (The changes have not been written yet)")

class Add(Display):
    """ The class in charge of adding elements"""
    def content_to_file(self, filepath:str, filecontent:list, content_to_add:str, beginning:bool=False) -> int:
        """ Add an element to beginning or end of the file """
        file = open(filepath, "w", encoding=self.encoding)
        if beginning == True:
            file.write(content_to_add)
            file.write(filecontent)
        else:
            file.write(filecontent)
            file.write(content_to_add)
        file.close()
        return self.success

class Get(Add):
    """ Get the user's choices """
    def question_response(self, question:str, response_type:str="str") -> str:
        """ Ask the user a question and return the answer """
        cont = True
        while cont == True:
            answer=input(question)
            if response_type == "str":
                return answer
            elif response_type == "int":
                try:
                    answer = int(answer)
                    cont = False
                    return answer
                except ValueError:
                    print(f"Please enter a number.\nYou have entered: {answer}")
            elif response_type == "float":
                try:
                    answer = float(answer)
                    cont = False
                    return answer
                except ValueError:
                    print(f"Please enter a number.\nYou have entered: {answer}")
            elif response_type == "bool":
                try:
                    answer = bool(answer)
                    cont = False
                    return answer
                except ValueError:
                    print(f"Please enter a boolean (True/False/1/0).\nYou have entered: {answer}")
            elif response_type == "advbool":
                if answer.lower() == "yes" or answer.lower() == "y" or answer.lower() == "1":
                    cont = False
                    return True
                elif answer.lower() == "no" or answer.lower() == "n" or answer.lower() == "0":
                    cont = False
                    return False
                else:
                    print(f"Please enter Yes or No.\nYou have entered: {answer}")
            elif response_type == "list":
                answer = answer.split(",")
                if len(answer) > 1:
                    cont = False
                    return answer
                else:
                    print(f"Please enter a list (seperated by ',').\nYou have entered: {answer}")
            else:
                cont = False
                return answer
    def nb_white_spaces(self, white_spaces:str, nb:int) -> str:
        """ make a string of white spaces """
        nb_spaces = ""
        i=0
        while i < nb:
            nb_spaces+=white_spaces
            i+=1
        return nb_spaces

    def file_content(self, filepath) -> str:
        """ Display the file content """
        file = open(filepath, "r", encoding=self.encoding)
        content = file.read()
        file.close()
        return content

    def environement_version(self) -> None:
        """ Display the environement version """
        if exists(self.env_filepath) == True:
            env_content = self.file_content(self.env_filepath)
            env_content = env_content.split('\n')
            if len(env_content) == 1:
                self.env_empty_msg()
                return self.err
            else:
                for index, elements in enumerate(env_content):#range(len(env_content)):
                    env_content[index] = elements.split("=")
                    if "VERSION" in env_content[index][0]:
                        print(f"The environement version is: {env_content[index][1]}")
                        return self.success
                print("No version was found in the environement file.")
                print("It will thus be added an set to 1")
                if Add.content_to_file(self, self.env_filepath, env_content, "VERSION=1\n", beginning=True) == self.err:
                    return self.err
                return self.success

        else:
            print("There is no version for the environement because there is no environement file")
            return self.err

    def version(self) -> None:
        """ Display the version """
        print(f"The version of the program is: {__Version__}")

    def who_to_run(self, argument) -> None:
        """ Display the user's choices """
        if argument in self.help_option:
            self.help_message()
        elif (argument.lower() in self.create_option) == True:
            Env.create(self)
        elif (argument.lower() in self.delete_option) == True:
            Env.delete(self)
        elif (argument.lower() in self.list_option) == True:
            self.env_content(self.env_filepath, self.encoding)
        elif (argument.lower() in self.show_option) == True:
            self.env_content(self.env_filepath, self.encoding)
        elif (argument.lower() in self.version_option) == True:
            self.version()
        elif (argument.lower() in self.environement_version_option) == True:
            self.environement_version()
        elif (argument.lower() in self.edit_option) == True:
            Env.edit(self)
        elif (argument.lower() in self.quit_option)==True:
            self.exit_msg()
        else:
            self.option_not_found()

    def arguments(self) -> None:
        """ Get the user's choices """
        if len(self.args) > 1:
            for i, element in enumerate(self.args):
                if i > 0:
                    self.who_to_run(element)

    def env_dict(self, env_content:str) -> list[dict, int]:
        """ Return a dict of the environement file """
        cut_env = dict()
        unknown_key_counter = 0
        if (len(env_content) > 0):
            env_content = env_content.split('\n')
            for element in env_content:
                if (element != ""):
                    element = element.split("=")
                    if len(element) == 2:
                        if element[0] != "" and element[1] != "":
                            cut_env[element[0]] = element[1]
                        elif element[0] != "" and element[1] == "":
                            cut_env[element[0]] = ""
                        else:
                            cut_env[f"unknown_key{unknown_key_counter}"] = element[1]
                            unknown_key_counter+=1
                    else:
                        cut_env[f"unknown_key{unknown_key_counter}"] = element[1]
                        unknown_key_counter+=1
            return cut_env, self.success
        else:
            print("The environement file is empty, please create an environement file using the c option.")
            return cut_env, self.err
    def env_args(self, args:str, env_content:dict) -> None:
        """ Return a dict of the environement file """
        if (args.lower() in self.quit_option) == True: # -q
            if self.env_changes_written == False:
                answer = self.question_response("You have unsaved changes.\nDo you want to quit anyway? (y/n)", "advbool")
                if answer == True:
                    self.env_cont = False
            else:
                self.env_cont = False
        elif (args.lower() in self.help_option) == True: # -h
            self.edit_help()
        elif (args.lower() in self.env_add_option) == True: # -a
            self.env_changes_written = False
            Env.edit_add(self, env_content)
        elif (args.lower() in self.edit_option) == True: # -e
            self.env_changes_written = False
            Env.edit_edit(self, env_content)
        elif (args.lower() in self.env_view_option) == True: # -f
            Display.env_dict_view(self, env_content, "all")
        elif (args.lower() in self.env_term_option) == True: # -l
            Display.env_dict_view(self, env_content, "term")
        elif (args.lower() in self.env_definition_option) == True: # -c
            Display.env_dict_view(self, env_content, "definition")
        elif strcmp(args.lower(), self.delete_option)==True:#(args.lower() in self.delete_option) == False:
            Env.edit_delete(self, env_content)
        elif (args.lower() in self.env_write_option) == True: # -w
            self.env_changes_written = True
            Env.edit_apply(self, self.env_filepath, env_content)
        else:
            self.option_not_found()

class Env(Get, Constants):
    """ Create the environement file """
    def create(self) -> None:
        """ Create the environement file """
        if exists(self.env_filepath) == True and len(self.file_content(self.env_filepath)) > 0:
            print("An environement file already exists")
            answer = self.question_response("Do you want to overwrite it? (y/n)", "advbool")
            if answer == False:
                return self.err
        print("========================== Beginning of gathering content =================================")
        version = self.question_response("What is the version of the environement file?", "float")
        self.env_file_content.append(f"VERSION={version}\n")
        port = self.question_response("What is the connection port of the database that is going to be used?", "str")
        self.env_file_content.append(f"PORT={port}\n")
        usr_account = self.question_response("What is the name of the account used to connect to the database?", "str")
        self.env_file_content.append(f"USER_ACCOUNT={usr_account}\n")
        passwd = self.question_response("What is the password of the account used to connect to the database?", "str")
        self.env_file_content.append(f"PASSWORD={passwd}\n")
        table_name = self.question_response("What is the name of the table that is going to be used?", "str")
        self.env_file_content.append(f"TABLE_NAME={table_name}\n")
        need_more_info = self.question_response("Do you need to add more information to the environement file? (y/n)", "advbool")
        if need_more_info == True:
            while need_more_info == True:
                name = self.question_response("What is the name of the variable?", "str")
                value = self.question_response("What is the value of the variable?", "str")
                self.env_file_content.append(f"{name}={value}\n")
                need_more_info = self.question_response("Do you need to add more information to the environement file? (y/n)", "advbool")

        print("======================== End of gathering content ====================================")
        print("========================== Beginning of env content =================================")
        for k in self.env_file_content:
            print(k, end = "")
        print("============================= End of env content ===================================")
        print("======================= Beginning of writing content ================================")
        file = open(self.env_filepath, "w", encoding=self.encoding)
        for k in self.env_file_content:
            file.write(k)
        file.close()
        print("======================== End of writing content ====================================")
        return self.success

    def pre_process(self) -> list[int, dict]:
        """ Pre-process the environement file """
        filecontent = Get.file_content(self, self.env_filepath)
        cut_env = Get.env_dict(self, filecontent)
        if cut_env[1] != self.err:
            cut_env = cut_env[0]
            return cut_env, self.success
        else:
            return "", self.err

    def edit_delete(self, env_content:dict) -> int:
        """ Delete a variable in the environement file """
        self.env_changes_written = False
        cont = True
        print("Enter -1triton to cancel.")
        while cont == True:
            term = self.question_response("What is the name of the variable you want to delete?", "str")
            if term.lower() == "-1triton":
                self.env_changes_written = True
                cont = False
            elif term in env_content:
                env_content.pop(term)
                cont = False
            else:
                print("The term you entered does not exist in the environement")
        return self.success

    def edit_apply(self, file_path:str, env_content:dict) -> int:
        """ Apply the changes to the environement file """
        file = open(file_path, "w", encoding=self.encoding)
        for term in env_content:
            file.write(f"{term}={env_content[term]}\n")
        file.close()
        print(f"The content has been save to {file_path}")
        return self.success

    def edit_edit(self, env_content:dict) -> int:
        """ Edit a variable in the environement file """
        var_name = self.question_response("What is the name of the variable to edit?", "str")
        if var_name not in env_content:
            answ = self.question_response(f"The variable {var_name} is not in the environement file, add it? (y/n)", "advbool")
            if answ == False:
                return self.err
        var_value = self.question_response("What is the value of the variable?", "str")
        env_content[var_name] = var_value
        return self.success

    def edit_add(self, env_content:dict) -> int:
        """ Add a variable into the environement file """
        var_name = self.question_response("What is the name of the variable to add?", "str")
        if var_name in env_content:
            if self.question_response(f"The variable {var_name} is already in the environement file, overwrite it? (y/n)", "advbool") == False:
                return self.err
        var_value = self.question_response("What is the value of the variable?", "str")
        env_content[var_name] = var_value
        return self.success

    def edit_var(self, env_content:dict) -> None:
        """ edit a variable in the environement file """
        self.env_cont = True
        print("========================== Beginning of editing content =================================")
        while self.env_cont == True:
            print("Enter -h for help")
            args = self.question_response("Enter an option:", "str")
            Get.env_args(self, args, env_content)
        print("========================== End of editing content =================================")

    def edit(self) -> int:
        """ Edit the environement file """
        self.env_changes_written = True
        if exists(self.env_filepath) == True:
            status = self.pre_process()
            self.edit_var(status[0])
            return self.success
        else:
            print("There is no existing environement file, please create one using the c option of this program")
            return self.err

    def delete(self) -> None:
        """ Delete the environement file """
        if exists(self.env_filepath) == True:
            answer = self.question_response("Do you want to delete the environement file? (y/n)", "advbool")
            if answer == True:
                remove(self.env_filepath)
                print("The environement file has been deleted")
                return self.success
            else:
                print("The environement file has not been deleted.")
                return self.err
        else:
            print("There is no environement file to delete")
            return self.err

class Globals(Env):
    """ Global variables """
    def main(self) -> int:
        """ main function """
        Get.arguments(self)
        Display.welcome_message(self)
        while self.cont == True:
            Display.starting_options(self)
            self.choice = Get.question_response(self, "Enter an option:", "str")
            Get.who_to_run(self, self.choice)
        return self.success

def strcmp(str1:str, str2:list) -> bool:
    """ Compare two strings """
    for i in str2:
        if str1 == i:
            return True

EI = Env()
Globals.main(EI)
