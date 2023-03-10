#pragma once
#ifndef KEYCODE_H
#define KEYCODE_H

#include "os.h"

enum _MMKeyCode {
	K_NOT_A_KEY = 9999,
	K_BACKSPACE = VK_BACK,
	K_DELETE = VK_DELETE,
	K_RETURN = VK_RETURN,
	K_TAB = VK_TAB,
	K_ESCAPE = VK_ESCAPE,
	K_UP = VK_UP,
	K_DOWN = VK_DOWN,
	K_RIGHT = VK_RIGHT,
	K_LEFT = VK_LEFT,
	K_HOME = VK_HOME,
	K_END = VK_END,
	K_PAGEUP = VK_PRIOR,
	K_PAGEDOWN = VK_NEXT,
	K_F1 = VK_F1,
	K_F2 = VK_F2,
	K_F3 = VK_F3,
	K_F4 = VK_F4,
	K_F5 = VK_F5,
	K_F6 = VK_F6,
	K_F7 = VK_F7,
	K_F8 = VK_F8,
	K_F9 = VK_F9,
	K_F10 = VK_F10,
	K_F11 = VK_F11,
	K_F12 = VK_F12,
	K_F13 = VK_F13,
	K_F14 = VK_F14,
	K_F15 = VK_F15,
	K_F16 = VK_F16,
	K_F17 = VK_F17,
	K_F18 = VK_F18,
	K_F19 = VK_F19,
	K_F20 = VK_F20,
	K_F21 = VK_F21,
	K_F22 = VK_F22,
	K_F23 = VK_F23,
	K_F24 = VK_F24,
	K_META = VK_LWIN,
	K_CONTROL = VK_CONTROL,
	K_LEFT_CONTROL = VK_LCONTROL,
	K_RIGHT_CONTROL = VK_RCONTROL,
	K_SHIFT = VK_SHIFT,
	K_RIGHTSHIFT = VK_RSHIFT,
	K_ALT = VK_MENU,
	K_RIGHT_ALT = VK_MENU,
	K_CAPSLOCK = VK_CAPITAL,
	K_SPACE = VK_SPACE,
	K_PRINTSCREEN = VK_SNAPSHOT,
	K_INSERT = VK_INSERT,
	K_MENU = VK_APPS,

	K_NUMPAD_LOCK = VK_NUMLOCK,
	K_NUMPAD_0 = VK_NUMPAD0,
	K_NUMPAD_1 = VK_NUMPAD1,
	K_NUMPAD_2 = VK_NUMPAD2,
	K_NUMPAD_3 = VK_NUMPAD3,
	K_NUMPAD_4 = VK_NUMPAD4,
	K_NUMPAD_5 = VK_NUMPAD5,
	K_NUMPAD_6 = VK_NUMPAD6,
	K_NUMPAD_7 = VK_NUMPAD7,
	K_NUMPAD_8 = VK_NUMPAD8,
	K_NUMPAD_9 = VK_NUMPAD9,
	K_NUMPAD_PLUS = VK_ADD,
	K_NUMPAD_MINUS = VK_SUBTRACT,
	K_NUMPAD_MULTIPLY = VK_MULTIPLY,
	K_NUMPAD_DIVIDE = VK_DIVIDE,
	K_NUMPAD_DECIMAL = VK_DECIMAL,

	K_AUDIO_VOLUME_MUTE = VK_VOLUME_MUTE,
	K_AUDIO_VOLUME_DOWN = VK_VOLUME_DOWN,
	K_AUDIO_VOLUME_UP = VK_VOLUME_UP,
	K_AUDIO_PLAY = VK_MEDIA_PLAY_PAUSE,
	K_AUDIO_STOP = VK_MEDIA_STOP,
	K_AUDIO_PAUSE = VK_MEDIA_PLAY_PAUSE,
	K_AUDIO_PREV = VK_MEDIA_PREV_TRACK,
	K_AUDIO_NEXT = VK_MEDIA_NEXT_TRACK,
	K_AUDIO_REWIND = K_NOT_A_KEY,
	K_AUDIO_FORWARD = K_NOT_A_KEY,
	K_AUDIO_REPEAT = K_NOT_A_KEY,
	K_AUDIO_RANDOM = K_NOT_A_KEY,

	K_LIGHTS_MON_UP = K_NOT_A_KEY,
	K_LIGHTS_MON_DOWN = K_NOT_A_KEY,
	K_LIGHTS_KBD_TOGGLE = K_NOT_A_KEY,
	K_LIGHTS_KBD_UP = K_NOT_A_KEY,
	K_LIGHTS_KBD_DOWN = K_NOT_A_KEY
};

typedef int MMKeyCode;

/* Returns the keyCode corresponding to the current keyboard layout for the
 * given ASCII character. */
MMKeyCode keyCodeForChar(const char c);

#endif  /* KEYCODE_H */
