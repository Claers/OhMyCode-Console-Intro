#include <iostream>
#include <windows.h>
#include <ctime>
#include <unistd.h>

using namespace std;

#define n_str 39

string texte[n_str] = { "Connexion en cours au reseau universel",
                        "Essaye d'affronter un dragon",
                        "Se renseigne sur la regle 34",
                        "42 est la reponse",
                        "Compilation du script python",
                        "Regarde un poney volant au travers de la fenetre",
                        "Debut de l'enregistrement audio",
                        "Initialisation de la camera (c'est une blague, on en utilise pas)",
                        "Encodage de la video...",
                        "Progression de l'envoi : 100%",
                        "php est lent",
                        "Who is the doctor",
                        "La chaine OhMyCode a pour but de federer une communaute autour de la decouverte du developpement,\n"
                        "de la programmation et de maniere generale l'informatique.\n"
                        "Tout cela de maniere accessible et digeste par tous avec l'approche de la vulgarisation.",
                        "Erreur : la variable 'respect' n'as pas ete trouvee",
                        "We'll be fine, you just have to go",
                        "La vie de developpeur, c'est pas toujours facile",
                        "sudo rm -rf /*",
                        "LEEEEROY JEEENKINS",
                        "Who let the dogs out",
                        "Rejoignez la conversation Discord",
                        "On a fait un forum",
                        "echo respect > /dev/null",
                        "Silo ne nous laisse pas la parole",
                        "Re",
                        "N'utilisez JAMAIS la SDL",
                        "Mais si c'est possible avec la carte kiwi",
                        "Nyan ?!",
                        "Peuplage de la chaine avec des intelligences artificielles",
                        "Simulation de personnalite",
                        "Accordage de la musique et des voix pre-enregistrees",
                        "Passage en 1080p 60ips 48kHz non compresse",
                        "Violation de la bande passante",
                        "Erreur de segmentation, veuillez mieux gerer vos pointeurs",
                        "Missing semicolon (but I'm too lazy to fix it by my own)",
                        "Erreur 404 : la page 'respect.html' est introuvable",
                        "Erreur 418 : le serveur est une theiere",
                        "L'application ne reponds pas, voulez-vous l'attendre inutilement ou essayer de la fermer sans succes ?",
                        "Je suis une chevre",
                        "On a deja vu des filles, meme que c'est dans notre pokedex !"
                        };
int tir[n_str];

int main()
{
    for (int i(0); i<n_str; ++i) tir[i] = i;

    srand(time(0));
    HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");

    SetConsoleTextAttribute(hCons, 10);
    cout << "@OhMyCode ";
    SetConsoleTextAttribute(hCons, 13);
    cout << "~ ";
    SetConsoleTextAttribute(hCons, 15);
    cout << "$ ";
    cin.ignore();

    cout << endl << "Chargement de l'interface Youtube de OhMyCode, veuillez patienter..." << endl << endl << endl;

    for (int a(0); 1+a<n_str; ++a) {
        int b(a + rand()%(n_str-a));
        cout << texte[tir[b]] << endl;
        tir[b] = tir[a];
        Sleep(rand()%100+50);
    }
    cout << endl << endl;
    cout << "Chargement termine !" << endl << endl << endl;
    return 0;
}
