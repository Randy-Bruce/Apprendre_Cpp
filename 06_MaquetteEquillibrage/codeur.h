#ifndef CODEUR_H
#define CODEUR_H

class MccUldaq;
class Codeur
{
public:
    Codeur(const MccUldaq & _laCarte);
    int ObtenirVitesse();
private:
    const MccUldaq & laCarte; // Pour la relation d’agrégation,
                              // l’attribut est ici constant pour être en accord avec le passage de
                              // paramètres. Il n’est pas modifié dans la classe Moteur.
};

#endif // CODEUR_H
