#pragma once

#include "quantum.h"
#include "led.h"

/*  ANSI LAYOUT
  ESC| F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12| PSC| PGU| PGD
  GRA| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | '  | ¡  |   BCKS  | DEL
  TAB| Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | `  | +  |         | HOM
  CAP| A  | S  | D  | F  | G  | H  | J  | K  | L  | Ñ  | ´  | Ç  |   ENTER | END
  LSI| (<)| Z  | X  | C  | V  | B  | N  | M  | ,  | .  | -  |   RSHIF | UP | FNL
  LCT| WIN| ALT|               ESPACE             | ALG| FN | RCT| LEF| DOW| RIG
*/

#define LAYOUT_seventy_ansi( \
  K00, K01, \
  K10, K11, \
  K20, K21 \
) { \
  { K00, K01 }, \
  { K10, K11 }, \
  { K20, K21 } \
}

/*  ISO LAYOUT
  ESC| F1
  GRA| 1 
  TAB| Q 
*/

#define LAYOUT_seventy_iso( \
  K00, K01, \
  K10, K11, \
  K20, K21 \
) { \
  { K00, K01 }, \
  { K10, K11 }, \
  { K20, K21 } \
}
