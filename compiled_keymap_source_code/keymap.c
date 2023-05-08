#include QMK_KEYBOARD_H
enum custom_keycodes {
    SHKEY = SAFE_RANGE,
    LSKEY,
    UPDIR,
    OYAMLLESS,
    LESS,
    KGALL
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      case SHKEY:
          if (record->event.pressed) {
              // when keycode QMKBEST is pressed
              SEND_STRING("");
          } else {
              // when keycode QMKBEST is released
      }
      break;
      case LSKEY:
          if (record->event.pressed) {
              // when keycode QMKBEST is pressed
              SEND_STRING("ls -1\n");
          } else {
              // when keycode QMKBEST is released
      }
      break;
      case UPDIR:
          if (record->event.pressed) {
              // when keycode QMKBEST is pressed
              SEND_STRING("../\n");
          } else {
              // when keycode QMKBEST is released
      }
      break;
      case OYAMLLESS:
          if (record->event.pressed) {
              // when keycode QMKBEST is pressed
              SEND_STRING("-oyaml | less\n");
          } else {
              // when keycode QMKBEST is released
      }
      break;
      case LESS:
          if (record->event.pressed) {
              // when keycode QMKBEST is pressed
              SEND_STRING(" | less\n");
          } else {
              // when keycode QMKBEST is released
      }
      break;
      case KGALL:
          if (record->event.pressed) {
              // when keycode QMKBEST is pressed
              SEND_STRING("kubectl get all\n");
          } else {
              // when keycode QMKBEST is released
      }
      break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_5x6(KC_NO, KC_NO, KC_NO, KC_F5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_UNDS, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC, KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_ENT, KC_NO, KC_COLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_SPC, KC_NO, KC_LCTL, KC_NO, KC_NO, MO(2), MO(1), KC_SPC, KC_LCTL, KC_NO, KC_LSFT, KC_LGUI, KC_NO, KC_NO, TG(3), KC_NO, KC_NO),
	[1] = LAYOUT_5x6(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_QUES, KC_LT, KC_AT, KC_TILD, KC_CIRC, KC_PERC, KC_AMPR, KC_EXLM, KC_PLUS, KC_BSLS, KC_BSPC, KC_ESC, KC_DQUO, KC_EQL, KC_LPRN, KC_RPRN, KC_ASTR, KC_HASH, KC_QUOT, KC_SLSH, KC_MINS, KC_SCLN, KC_ENT, KC_NO, KC_COLN, KC_LBRC, KC_LCBR, KC_DLR, UPDIR, LSKEY, KC_PIPE, KC_RCBR, KC_RBRC, KC_GT, KC_NO, KC_DOWN, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_LCTL, KC_NO, KC_NO, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT_5x6(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_UNDS, KC_COMM, KC_DOT, KC_LSFT, KC_NO, KC_NO, KC_INS, LESS, KC_MINS, OYAMLLESS, KC_BSPC, KC_ESC, KC_1, KC_2, KC_3, KC_4, SHKEY, KGALL, KC_7, KC_8, KC_9, KC_0, KC_ENT, KC_NO, KC_COLN, KC_LEFT, KC_DOWN, KC_5, KC_NO, KC_NO, KC_6, KC_UP, KC_RGHT, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LALT, KC_LNUM, KC_NO, KC_NO, KC_DOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_5x6(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_K, KC_7, KC_8, KC_9, KC_H, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, KC_D, KC_4, KC_5, KC_6, KC_V, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO)
};


