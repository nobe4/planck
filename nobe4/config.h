#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#define STARTUP_SONG SONG() // Empty, annoying boot song is annoying

#define MUSIC_MASK (keycode != KC_NO)

#define NO_DEBUG
#define NO_PRINT

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
// #define MIDI_ENABLE_STRICT 1
// #define MIDI_ENABLE 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

// #define MIDI_BASIC 1

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
// #define MIDI_ADVANCED 1

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
// #define MIDI_TONE_KEYCODE_OCTAVES 2

#endif