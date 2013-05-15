#include "API.c"

typedef uint32_t u32;
typedef uint64_t u64;


DragonP NuevoDragon();

int DestruirDragon(DragonP N);

int CargarUnLado(DragonP N, u32 x, u32 y, u32 c);

int LlenarDragon(DragonP N);

int ECAML(DragonP N);

int DondeEstamosParados(DragonP N);

u32 AumentarFlujo(DragonP N);

u32 AumentarFlujoYtambienImprimirCamino(DragonP N);

void ImprimirFlujo(DragonP N);

void ImprimirValorFlujo(DragonP N);

void ImprimirCorte(DragonP N);

u64 Sumar64(u64 a, u32 b);