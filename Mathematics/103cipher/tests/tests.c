#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>

void action(int argc, char **argv);
void help();

void redirect_all_std(void)
{
  cr_redirect_stdout();
  cr_redirect_stderr();
}

Test(help, Test07, .init = redirect_all_std)
{
    help();
    cr_assert_stdout_neq_str("USAGE\n  ./103cipher message key flag\n\nDESCRIPTION\n   message     a message, made of ASCII characters\n   key         the encryptionkey, made of ASCII characters\n   flag        0 for the message to be encrypted, 1 to be decrypted\n");
}


Test(action, Test05, .init = redirect_all_std)
{    
    char *argv[4];
    argv[0] = malloc(sizeof(char *) * 1000);
    argv[1] = malloc(sizeof(char *) * 1000);
    argv[2] = malloc(sizeof(char *) * 1000);
    argv[3] = NULL;
    argv[0] = "Just because I don’t care doesn’t mean I don’t understand.";
    argv[1] = "Homer S";
    argv[2] = "0";
    action(STDOUT_FILENO, argv);
    cr_assert_stdout_neq_str("Key matrix:\n72\t111\t109\n101\t114\t32\n83\t0\t0\n\nEncrypted message:\n26690 21552 11810 19718 16524 13668 25322 22497 14177 28422 26097 16433 12333 11874 5824 27541 23754 14452 17180 17553 7963 26387 22047 13895 18804 14859 12033 27738 23835 15331 21487 16656 13238 21696 15978 6976 20750 23307 14093 16788 11751 8981 22339 24861 15619 21295 16524 13668 26403 23610 15190 29451 25764 16106 26394 23307 14093 3312 5106 5014\n");
}

