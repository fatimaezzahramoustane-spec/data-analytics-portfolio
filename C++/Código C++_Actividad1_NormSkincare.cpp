#include <iostream>
#include <iomanip>

using namespace std;
// Programa para analizar las ventas de Nörm Skincare
// Calcula los totales anuales, los totales por región
// y el porcentaje de ventas de cada región en 2023.

int main() {

    cout << fixed << setprecision(2);

    // Titulo del informe
    cout << "====================================" << endl;
    cout << "NORM SKINCARE - INFORME DE VENTAS" << endl;
    cout << "====================================" << endl;
    cout << "Importes expresados en euros" << endl;
    cout << endl;

// Datos de ventas de Nörm Skincare correspondientes a 2021.
// Los importes están expresados en euros.
    double norte2021 = 345.67;
    double centro2021 = 567.89;
    double sur2021 = 234.56;

    // Datos de ventas correspondientes a 2022.
    double norte2022 = 389.45;
    double centro2022 = 598.34;
    double sur2022 = 778.90;

    // Datos de ventas correspondientes a 2023.
    double norte2023 = 412.78;
    double centro2023 = 623.45;
    double sur2023 = 301.23;

    // Sumar las ventas de las tres regiones para obtener
   // el total de ventas de cada año.
    double total2021 = norte2021 + centro2021 + sur2021;
    double total2022 = norte2022 + centro2022 + sur2022;
    double total2023 = norte2023 + centro2023 + sur2023;

    // Sumar las ventas de cada región durante los tres años
   // para conocer el total acumulado de Norte, Centro y Sur.
    double totalNorte = norte2021 + norte2022 + norte2023;
    double totalCentro = centro2021 + centro2022 + centro2023;
    double totalSur = sur2021 + sur2022 + sur2023;

    // Calcular qué porcentaje representa cada región
   // sobre el total de ventas de la empresa en 2023.
    double porcentajeNorte = (norte2023 / total2023) * 100;
    double porcentajeCentro = (centro2023 / total2023) * 100;
    double porcentajeSur = (sur2023 / total2023) * 100;

    // Mostrar en pantalla los resultados de los cálculos,
   // organizados por años, regiones y porcentajes.
    cout << "TOTALES DE VENTAS POR AÑO" << endl;
    cout << "Total ventas 2021: " << total2021 << " €" << endl;
    cout << "Total ventas 2022: " << total2022 <<" €" << endl;
    cout << "Total ventas 2023: " << total2023 << " €" << endl;

    cout << endl;
    cout << "TOTALES DE VENTAS POR REGION" << endl;
    cout << "Total ventas Norte: " << totalNorte << " €" << endl;
    cout << "Total ventas Centro: " << totalCentro << " €" << endl;
    cout << "Total ventas Sur: " << totalSur << " €" << endl;

    cout << endl;
    cout << "PORCENTAJES DE VENTAS EN 2023" << endl;
    cout << "Norte: " << porcentajeNorte << "%" << endl;
    cout << "Centro: " << porcentajeCentro << "%" << endl;
    cout << "Sur: " << porcentajeSur << "%" << endl;

 // Uso de inteligencia artificial:
    // He utilizado ChatGPT como apoyo para comprender
    // las variables, las operaciones y la estructura del programa.
    // Sus explicaciones me han ayudado a entender los calculos
    // y a organizar mejor el codigo.
    // He comprobado que los resultados coinciden con mis calculos.
    // Durante el desarrollo he corregido errores de escritura,
    // como la falta de un punto y coma.
    // Una limitacion del programa es que los datos estan escritos
    // directamente en el codigo y deben modificarse si cambian.
    // Tambien he probado el programa en Programiz para comprobar
    // que funciona correctamente.
    return 0;
}