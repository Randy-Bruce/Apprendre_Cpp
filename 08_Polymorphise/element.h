#ifndef ELEMENT_H
#define ELEMENT_H


class Element
{
public:
    Element(const int _numero, const int _vitesse);
    virtual ~Element();
    virtual void Afficher()=0;
    int getNumero() const;
    void setNumero(int value);

protected:
    int numero;
    int vitesse;
};

#endif // ELEMENT_H
