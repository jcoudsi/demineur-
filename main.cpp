/* Jeu de d�mineur en C++ avec Qt

Par ApeX

Le 15 Janvier 2009 
Derni�re mise � jour : 22 Janvier 2009 */

#include <QApplication>
#include "Options.h"
#include "Fenetre.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

	Fenetre fenetre;
	fenetre.show();

    return app.exec();
}
