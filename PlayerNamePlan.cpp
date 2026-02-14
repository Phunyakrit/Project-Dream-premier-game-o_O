#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct player
{
    string name;
    string position;
    int power;
};

vector<player> FW;
FW.push_back({"Mohamed Salah","FW",91}); // 0
FW.push_back({"Alexander Isak","FW",88}); // 1
FW.push_back({"Hugo Ekitiké","FW",83}); // 2
FW.push_back({"Cody Gakpo","FW",84}); // 3
FW.push_back({"Federico Chiesa","FW",81}); // 4 
FW.push_back({"Viktor Gyökeres", "FW", 87}); // 5
FW.push_back({"Leandro Trossard", "FW", 83});  // 6
FW.push_back({"Kai Havertz", "FW", 83}); // 7 
FW.push_back({"Gabriel Martinelli", "FW", 83}); // 8
FW.push_back({"Noni Madueke", "FW", 77}); // 9
FW.push_back({"Gabriel Jesus", "FW", 82}); // 10
FW.push_back({"Erling Haaland", "FW", 91}); // 11
FW.push_back({"Omar Marmoush", "FW", 79}); // 12
FW.push_back({"Phil Foden", "FW", 88}); // 13
FW.push_back({"Savinho", "FW", 82}); // 14
FW.push_back({"Rayan Cherki", "FW", 76}); // 15
FW.push_back({"Jérémy Doku", "FW", 80}); // 16
FW.push_back({"Oscar Bobb", "FW", 73}); // 17
FW.push_back({"João Pedro", "FW", 77}); // 18
FW.push_back({"Liam Delap", "FW", 70}); // 19
FW.push_back({"Raheem Sterling", "FW", 81}); // 20
FW.push_back({"Pedro Neto", "FW", 77}); // 21
FW.push_back({"Estêvão", "FW", 73}); // 22
FW.push_back({"Jamie Gittens", "FW", 74}); // 23
FW.push_back({"Bryan Mbeumo", "FW", 79}); // 24
FW.push_back({"Benjamin Šeško", "FW", 79}); // 25
FW.push_back({"Joshua Zirkzee", "FW", 79}); // 26
FW.push_back({"Anthony Gordon", "FW", 81}); // 27
FW.push_back({"Yoane Wissa", "FW", 77}); // 28
FW.push_back({"Jacob Murphy", "FW", 75}); // 29
FW.push_back({"Anthony Elanga", "FW", 75}); // 30
FW.push_back({"Harvey Barnes", "FW", 79}); // 31
FW.push_back({"Nick Woltemade", "FW", 70}); // 32
FW.push_back({"Jacob Ramsey", "FW", 78}); // 33
FW.push_back({"Ollie Watkins", "FW", 85}); // 34
FW.push_back({"John McGinn", "FW", 82}); // 35
FW.push_back({"Evann Guessand", "FW", 74}); // 36
FW.push_back({"Donyell Malen", "FW", 81}); // 37
FW.push_back({"Jadon Sancho", "FW", 81}); // 38
FW.push_back({"Brian Brobbey", "FW", 79}); // 39
FW.push_back({"Simon Adingra", "FW", 75}); // 40
FW.push_back({"Bertrand Traoré", "FW", 75}); // 41
FW.push_back({"Chemsdine Talbi", "FW", 65}); // 42
FW.push_back({"Wilson Isidor", "FW", 71}); // 43
FW.push_back({"Eliezer Mayenda", "FW", 63}); // 44
FW.push_back({"Romaine Mundle", "FW", 64}); // 45
FW.push_back({"Abdoullah Ba", "FW", 68}); // 46
FW.push_back({"Ian Poveda", "FW", 68}); // 47
FW.push_back({"Jack Grealish", "FW", 84}); // 48
FW.push_back({"Illiman Ndiaye", "FW", 76}); // 49
FW.push_back({"Dwight McNeil", "FW", 77}); // 50
FW.push_back({"Thierno Barry", "FW", 68}); // 51
FW.push_back({"Beto", "FW", 76}); // 52
FW.push_back({"Tyler Dibling", "FW", 62}); // 53
FW.push_back({"Randal Kolo Muani", "FW", 82}); // 54
FW.push_back({"Mohammed Kudus", "FW", 82}); // 55
FW.push_back({"Dominic Solanke", "FW", 81}); // 56
FW.push_back({"Brennan Johnson", "FW", 78}); // 57
FW.push_back({"Richarlison", "FW", 81}); // 58
FW.push_back({"Mathys Tel", "FW", 77}); // 59
FW.push_back({"Wilson Odobert", "FW", 73}); // 60
FW.push_back({"Dane Scarlett", "FW", 67}); // 61
FW.push_back({"Dejan Kulusevski", "FW", 81}); // 62
FW.push_back({"Alex Iwobi", "FW", 77}); // 63
FW.push_back({"Samuel Chukwueze", "FW", 79}); // 64
FW.push_back({"Raúl Jiménez", "FW", 76}); // 65
FW.push_back({"Adama Traoré", "FW", 75}); // 66
FW.push_back({"Harry Wilson", "FW", 76}); // 67
FW.push_back({"Kevin", "FW", 75}); // 68
FW.push_back({"Rodrigo Muniz", "FW", 76}); // 69
FW.push_back({"Kaoru Mitoma", "FW", 81}); // 70
FW.push_back({"Danny Welbeck", "FW", 76}); // 71
FW.push_back({"Yankuba Minteh", "FW", 74}); // 72
FW.push_back({"Solly March", "FW", 78}); // 73
FW.push_back({"Charalampos Kostoulas", "FW", 62}); // 74
FW.push_back({"Stefanos Tzimas", "FW", 65}); // 75
FW.push_back({"Tom Watson", "FW", 60}); // 76
FW.push_back({"Jean-Philippe Mateta", "FW", 79}); // 77
FW.push_back({"Yeremy Pino", "FW", 79}); // 78
FW.push_back({"Chrisantus Uche", "FW", 68}); // 79
FW.push_back({"Eddie Nketiah", "FW", 76}); // 80
FW.push_back({"Jesurun Rak-Sakyi", "FW", 70}); // 81
FW.push_back({"Romain Esse", "FW", 62}); // 82
FW.push_back({"Kevin Schade", "FW", 73}); // 83
FW.push_back({"Dango Ouattara", "FW", 74}); // 84
FW.push_back({"Reiss Nelson", "FW", 74}); // 85
FW.push_back({"Igor Thiago", "FW", 75}); // 86
FW.push_back({"Myles Peart-Harris", "FW", 65}); // 87
FW.push_back({"Gustavo Nunes", "FW", 70}); // 88
FW.push_back({"Antoine Semenyo", "FW", 75}); // 89
FW.push_back({"Evanilson", "FW", 78}); // 90
FW.push_back({"Amine Adli", "FW", 79}); // 91
FW.push_back({"Enes Ünal", "FW", 78}); // 92
FW.push_back({"Marcus Tavernier", "FW", 76}); // 93
FW.push_back({"Romain Faivre", "FW", 76}); // 94
FW.push_back({"David Brooks", "FW", 74}); // 95
FW.push_back({"Eli Junior Krouli", "FW", 70}); // 96
FW.push_back({"Ben Doak", "FW", 66}); // 97


vector<player> MF;
MF.push_back({"Florian Wirtz","MF",89}); // 0
MF.push_back({"Alexis Mac Allister","MF",87}); // 1
MF.push_back({"Ryan Gravenberch", "MF", 78}); // 2
MF.push_back({"Dominik Szoboszlai", "MF", 81}); // 3
MF.push_back({"Curtis Jones", "MF", 79}); // 4
MF.push_back({"Wataru Endo", "MF", 80}); // 5
MF.push_back({"Declan Rice", "MF", 87}); // 6
MF.push_back({"Martin Ødegaard", "MF", 89}); // 7
MF.push_back({"Mikel Merino", "MF", 84}); // 8
MF.push_back({"Zubimendi", "MF", 83}); // 9
MF.push_back({"Eberechi Eze", "MF", 81}); // 10
MF.push_back({"Rodri", "MF", 91}); // 11
MF.push_back({"Tijjani Reijnders", "MF", 80}); // 12
MF.push_back({"Bernardo Silva", "MF", 88}); // 13
MF.push_back({"Mateo Kovačić", "MF", 83}); // 14
MF.push_back({"Nico González", "MF", 80}); // 15
MF.push_back({"Kalvin Phillips", "MF", 78}); // 16
MF.push_back({"Cole Palmer", "MF", 85}); // 17
MF.push_back({"Moisés Caicedo", "MF", 82}); // 18
MF.push_back({"Enzo Fernández", "MF", 82}); // 19
MF.push_back({"Andrey Santos", "MF", 71}); // 20
MF.push_back({"Romeo Lavia", "MF", 77}); // 21
MF.push_back({"Alejandro Garnacho", "MF", 79}); // 22
MF.push_back({"Dário Essugo", "MF", 69}); // 23
MF.push_back({"Bruno Fernandes", "MF", 87}); // 24
MF.push_back({"Matheus Cunha", "MF", 80}); // 25
MF.push_back({"Casemiro", "MF", 84}); // 26
MF.push_back({"Manuel Ugarte", "MF", 81}); // 27
MF.push_back({"Amad Diallo", "MF", 77}); // 28
MF.push_back({"Kobbie Mainoo", "MF", 77}); // 29
MF.push_back({"Mason Mount", "MF", 80}); // 30
MF.push_back({"Bruno Guimarães", "MF", 85}); // 31
MF.push_back({"Sandro Tonali", "MF", 85}); // 32
MF.push_back({"Joelinton", "MF", 82}); // 33
MF.push_back({"Joe Willock", "MF", 78}); // 34
MF.push_back({"Youri Tielemans", "MF", 82}); // 35
MF.push_back({"Boubacar Kamara", "MF", 81}); // 36
MF.push_back({"Morgan Rogers", "MF", 73}); // 37
MF.push_back({"Amadou Onana", "MF", 80}); // 38
MF.push_back({"Harvey Elliott", "MF", 78}); // 39
MF.push_back({"Emiliano Buendía", "MF", 80}); // 40
MF.push_back({"Ross Barkley", "MF", 79}); // 41
MF.push_back({"Granit Xhaka", "MF", 86}); // 42
MF.push_back({"Habib Diarra", "MF", 75}); // 43
MF.push_back({"Enzo Le Fée", "MF", 77}); // 44
MF.push_back({"Noah Sadiki", "MF", 71}); // 45
MF.push_back({"Dan Neil", "MF", 73}); // 46
MF.push_back({"Chris Rigg", "MF", 61}); // 47
MF.push_back({"Idrissa Gueye", "MF", 78}); // 48
MF.push_back({"Kiernan Dewsbury-Hall", "MF", 77}); // 49
MF.push_back({"James Garner", "MF", 75}); // 50
MF.push_back({"Carlos Alcaraz", "MF", 74}); // 51
MF.push_back({"Merlin Röhl", "MF", 73}); // 52
MF.push_back({"Tim Iroegbunam", "MF", 70}); // 53
MF.push_back({"Xavi Simons", "MF", 83}); // 54
MF.push_back({"James Maddison", "MF", 84}); // 55
MF.push_back({"João Palhinha", "MF", 85}); // 56
MF.push_back({"Rodrigo Bentancur", "MF", 81}); // 57
MF.push_back({"Pape Matar Sarr", "MF", 79}); // 58
MF.push_back({"Yves Bissouma", "MF", 81}); // 59
MF.push_back({"Lucas Bergvall", "MF", 73}); // 60
MF.push_back({"Archie Gray", "MF", 73}); // 61
MF.push_back({"Sander Berge", "MF", 78}); // 62
MF.push_back({"Saša Lukić", "MF", 77}); // 63
MF.push_back({"Emile Smith Rowe", "MF", 78}); // 64
MF.push_back({"Tom Cairney", "MF", 75}); // 65
MF.push_back({"Harrison Reed", "MF", 77}); // 66
MF.push_back({"Josh King", "MF", 73}); // 67
MF.push_back({"Carlos Baleba", "MF", 73}); // 68
MF.push_back({"Mats Wieffer", "MF", 79}); // 69
MF.push_back({"Georginio Rutter", "MF", 77}); // 70
MF.push_back({"Jack Hinshelwood", "MF", 71}); // 71
MF.push_back({"Yasin Ayari", "MF", 69}); // 72
MF.push_back({"Brajan Gruda", "MF", 74}); // 73
MF.push_back({"Diego Gómez", "MF", 71}); // 74
MF.push_back({"James Milner", "MF", 76}); // 75
MF.push_back({"Adam Wharton", "MF", 77}); // 76
MF.push_back({"Ismaïla Sarr", "MF", 77}); // 77
MF.push_back({"Jefferson Lerma", "MF", 78}); // 78
MF.push_back({"Daichi Kamada", "MF", 79}); // 79
MF.push_back({"Cheick Doucouré", "MF", 79}); // 80
MF.push_back({"Will Hughes", "MF", 75}); // 81
MF.push_back({"Justin Devenny", "MF", 60}); // 82
MF.push_back({"Naouirou Ahamada", "MF", 71}); // 83
MF.push_back({"Mikkel Damsgaard", "MF", 75}); // 84
MF.push_back({"Jordan Henderson", "MF", 79}); // 85
MF.push_back({"Mathias Jensen", "MF", 78}); // 86
MF.push_back({"Vitaly Janelt", "MF", 77}); // 87
MF.push_back({"Frank Onyeka", "MF", 75}); // 88
MF.push_back({"Fábio Carvalho", "MF", 77}); // 89
MF.push_back({"Antoni Milambo", "MF", 69}); // 90
MF.push_back({"Yehor Yarmoliuk", "MF", 69}); // 91
MF.push_back({"Ryan Christie", "MF", 77}); // 92
MF.push_back({"Tyler Adams", "MF", 78}); // 93
MF.push_back({"Lewis Cook", "MF", 76}); // 94
MF.push_back({"Justin Kluivert", "MF", 78}); // 95
MF.push_back({"Alex Scott", "MF", 74}); // 96
