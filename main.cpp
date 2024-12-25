#ifndef _BetMix_
#define _BetMix_

#include "fifo.h"

#define GIN_DAT_Amnt     2U
#define Bet_DAT_Amnt     5U
#define D_I_DAT_Amnt     (GIN_DAT_Amnt + Bet_DAT_Amnt) /* 7 */
#define Thr_GIN_DAT_Amnt (3 * GIN_DAT_Amnt)           /* 6 */
// (BetVersDATn >= 2)
#define Bet2_DAT_Amnt 6U
#define D_I2_DAT_Amnt (GIN_DAT_Amnt + Bet2_DAT_Amnt) /* 8 */

///////////////////////////////////////////////////

/// класс передатчика IOM
class Rec {
	public:
		Rec {}
}

///////////////////////////////////////////////////
typedef struct {
	u16 *Sign;
	u08 Func_Num;
} FuncMix_t;
