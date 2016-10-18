/*
 * @struct RGB
 */
typedef struct{int r;int g;int b;} RGB;

/*
 * @struct IO
 */
typedef struct{int pin;int mode;int state;String type;} IO;	

/*
 * @struct Punch
 */
typedef struct{int states[4];int stored[4];int address;String state;} Punch;

/*
 * @struct Kick
 */
typedef struct{int states[4];int stored[4];int address;String state;} Kick;

/*
 * @struct Alt
 */
typedef struct{int states[3];int stored[3];int address;String state;} Alt;

/*
 * @struct Direction
 */
typedef struct{int states[4];int stored[4];int address;String state;} Direction;	