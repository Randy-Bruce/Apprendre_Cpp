// ------------------------------------------------------------------------ Premier Programme
/*
#ifndef IPV4_H
#define IPV4_H
#include <math.h>


class ipv4
{
private:
    unsigned char *adresse;
    unsigned char *masque;
    void CalculerMasque(unsigned char _cidr);
    int NbBitA1(unsigned char val);
public:
    ipv4(const unsigned char * _adresse, const unsigned char _cidr);
    ipv4(const unsigned char * _adresse, const unsigned char * _masque);
    ~ipv4();
    void ObtenirMasque(unsigned char * _masque);
    void ObtenirAdresseReseau(unsigned char * _reseau);
    void ObtenirAdresseDiffusion(unsigned char * _diffusion);
    void ObtenirPremiereAdresse(unsigned char * _premiereAdresse);
    void ObtenirDerniereAdresse(unsigned char * _derniereAdresse);
    unsigned int ObtenirNombreMachine();
};

#endif // IPV4_H
*/

// ----------------------------------------------------------------------- Deuxieme Programme

#ifndef _IPV4_H
#define _IPV4_H
class ipv4
{
  private:
    unsigned char * adresse;
    unsigned char * masque ;
  public:
    ipv4(const unsigned char * _adresse, const unsigned char _cidr);
    ipv4(const unsigned char * _adresse, const unsigned char * _masque);
    ~ipv4(); // destructeur
    // Ajout pour la forme canonique en plus du destructeur
    ipv4(); // constructeur par défaut
    ipv4(const ipv4& _ipv4); // constructeur de copie
    ipv4 &operator= (const ipv4& _ipv4); // opérateur d'affectation
  private:
    void CalculerMasque(const unsigned char _cidr);
  public:
    void ObtenirMasque(unsigned char * _masque);
    void ObtenirAdresseReseau(unsigned char * _reseau);
    void ObtenirAdresseDiffusion(unsigned char * _diffusion);
};
#endif
