#include QMK_KEYBOARD_H

enum ut472_layers {
  _QWERTY,
  _QWERTY_MODS,
  _COLEMAK,
  _COLEMAK_MODS,
  _RSTHD,
  _RSTHD_MODS,
  _GAMER,
  _GAMER2,
  _TOUHOU,
  _NUMBERS,
  _NAV,
  _GLOWER,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum custom_keycodes {
  TG_CLMK = SAFE_RANGE,
  TG_RSTH,
  HR_MODS,
  ALT_TAB,
  SALTTAB,
  WNDW_1,
  WNDW_2,
  WNDW_3,
  WNDW_4,
  WNDW_5,
  WNDW_6,
  WNDW_7,
  WNDW_8,
  WNDW_9,
  WNDW_0,
  QCK_TAB,
  QCKSTAB,
  QCK_SEL,
};

#define V_V_V_V KC_TRNS
#define KC_LOWR TT(_LOWER)
#define KC_RASE TT(_RAISE)
#define KC_LOTG TG(_LOWER)
#define KC_RATG TG(_RAISE)
#define KC_ADJS MO(_ADJUST)
#define KC_GLWR MO(_GLOWER)
#define MT_CTAB MT(MOD_LCTL, KC_TAB)
#define LT_LWRE LT(_LOWER, KC_E)

#define KC_NMBS LT(_NUMBERS, KC_BSPC)
#define KC_NVSP LT(_NAV, KC_SPC)
#define KC_NMSP LT(_NUMBERS, KC_SPC)
#define KC_NAV  MO(_NAV)

#define TG_GAME TG(_GAMER)
#define TG_GAM2 TG(_GAMER2)
#define TG_TOHO TG(_TOUHOU)

#define KC_FBVU A(S(KC_EQL))
#define KC_FBVD A(S(KC_MINS))
#define KC_FBNX A(S(KC_RGHT))
#define KC_FBPR A(S(KC_LEFT))
#define KC_FBRN A(S(KC_DOWN))
#define KC_FBPL A(S(KC_ENT))

// QWERTY Homerow Mods
#define KC_LG_A MT(MOD_LGUI, KC_A)
#define KC_LA_S MT(MOD_LALT, KC_S)
#define KC_LC_D MT(MOD_LCTL, KC_D)
#define KC_LS_F MT(MOD_LSFT, KC_F)
#define KC_RS_J MT(MOD_RSFT, KC_J)
#define KC_RC_K MT(MOD_RCTL, KC_K)
#define KC_RA_L MT(MOD_RALT, KC_L)
#define KC_RGSC MT(MOD_RGUI, KC_SCLN)

// Colemak Homerow Mods
#define KC_LA_R MT(MOD_LALT, KC_R)
#define KC_LC_S MT(MOD_LCTL, KC_S)
#define KC_LS_T MT(MOD_LSFT, KC_T)
#define KC_RS_N MT(MOD_RSFT, KC_N)
#define KC_RC_E MT(MOD_RCTL, KC_E)
#define KC_RA_I MT(MOD_RALT, KC_I)
#define KC_RG_O MT(MOD_RGUI, KC_O)

// RSTHD Homerow Mods
#define KC_LG_R MT(MOD_LGUI, KC_R)
#define KC_LC_T MT(MOD_LCTL, KC_T)
#define KC_LS_H MT(MOD_LSFT, KC_H)
#define KC_RS_N MT(MOD_RSFT, KC_N)
#define KC_RC_A MT(MOD_RCTL, KC_A)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  MT_CTAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  KC_NAV,  KC_LCTL, KC_LGUI, KC_LALT, KC_LOWR,     KC_NMSP,      KC_RASE, KC_LGUI, QCKSTAB, QCK_SEL, QCK_TAB
),

[_QWERTY_MODS] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, KC_LG_A, KC_LA_S, KC_LC_D, KC_LS_F, _______, _______, KC_RS_J, KC_RC_K, KC_RA_L, KC_RGSC, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
),

// _COLEMAK
[_COLEMAK] = LAYOUT( \
  _______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, _______,
  _______, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  _______, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, _______,
  _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
),

[_COLEMAK_MODS] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, KC_LG_A, KC_LA_R, KC_LC_S, KC_LS_T, _______, _______, KC_RS_N, KC_RC_E, KC_RA_I, KC_RG_O, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
),

[_RSTHD] = LAYOUT(
  _______, KC_J,    KC_C,    KC_Y,    KC_F,    KC_K,    KC_Z,    KC_L,    KC_COMM, KC_U,    KC_Q,    _______,
  _______, KC_R,    KC_S,    KC_T,    KC_H,    KC_D,    KC_M,    KC_N,    KC_A,    KC_I,    KC_O,    KC_QUOT,
  _______, KC_SLSH, KC_V,    KC_G,    KC_P,    KC_B,    KC_X,    KC_W,    KC_DOT,  KC_SCLN, KC_MINS, _______,
  _______, _______, _______, _______, LT_LWRE,     _______,      _______, _______, _______, _______, _______
),

[_RSTHD_MODS] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, KC_LG_R, KC_LA_S, KC_LC_T, KC_LS_H, _______, _______, KC_RS_N, KC_RC_A, KC_RA_I, KC_RG_O, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
),

[_GAMER] = LAYOUT( // I installed a rootkit and all I got was this lousy layer.
  KC_TAB,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSPC,
  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, KC_GLWR,     KC_SPC,       _______, _______, _______, _______, _______
),

[_GAMER2] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_SPC,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, KC_GLWR,     KC_BSPC,      _______, _______, _______, _______, _______
),

[_TOUHOU] = LAYOUT( // greetz to @ZUN_CODE
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP,   _______,
  _______, _______, _______, _______, _______,     _______,      _______, _______, KC_LEFT, KC_DOWN, KC_RGHT
),

[_NUMBERS] = LAYOUT(
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PSCR,
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_F12,
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
),

[_NAV] = LAYOUT(
  _______, KC_PGUP, KC_HOME, KC_UP,   KC_END,  ALT_TAB, SALTTAB, WNDW_7,  WNDW_8,  WNDW_9,  WNDW_0,  _______,
  _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, SALTTAB, ALT_TAB, WNDW_4,  WNDW_5,  WNDW_6,  _______, _______,
  _______, _______, C(KC_PGUP), _______, C(KC_PGDN), _______, _______, WNDW_1,  WNDW_2,  WNDW_3,  _______, _______,
  _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, V_V_V_V
),

[_GLOWER] = LAYOUT( // Gamer Lower
  KC_ESC,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_RBRC, KC_UNDS, KC_PLUS, KC_TILD, KC_RBRC, KC_DEL,
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_RPRN, KC_MINS, KC_EQL,  KC_GRV,  KC_LBRC, KC_BSLS,
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  _______, _______, _______, _______, V_V_V_V,     KC_BSPC,      KC_ADJS, KC_HOME, KC_PGDN, KC_PGUP, KC_END
),

[_LOWER] = LAYOUT(
  KC_GRV,  KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_LBRC, KC_RBRC, KC_UNDS, KC_PLUS, KC_TILD, KC_RBRC, KC_DEL,
  _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_LPRN, KC_RPRN, KC_MINS, KC_EQL,  KC_GRV,  KC_LBRC, KC_BSLS,
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  _______, _______, _______, _______, KC_LOTG,     KC_BSPC,      KC_ADJS, KC_HOME, KC_PGDN, KC_PGUP, KC_END
),

[_RAISE] = LAYOUT(
  KC_TILD, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN3, KC_INS,  KC_7,    KC_8,    KC_9,    KC_PSLS, KC_PAST,
  _______, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN4, _______, KC_4,    KC_5,    KC_6,    KC_PMNS, KC_PPLS,
  _______, _______, KC_WH_L, _______, KC_WH_R, KC_BTN5, KC_0,    KC_1,    KC_2,    KC_3,    KC_PDOT, KC_PENT,
  _______, _______, _______, _______, KC_ADJS,     KC_BSPC,      KC_RATG, KC_0,    KC_PDOT, _______, _______
),

[_ADJUST] = LAYOUT(
  RESET,   _______, _______, KC_FBVU, KC_FBPL, KC_VOLU, _______, TG_RSTH, TG_GAM2, RGB_HUD, RGB_HUI, KC_PSCR,
  _______, KC_FBRN, KC_FBPR, KC_FBVD, KC_FBNX, KC_VOLD, HR_MODS, TG_CLMK, TG_GAME, TG_TOHO, NK_TOGG, A(KC_PSCR),
  _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, _______, RGB_TOG, RGB_MOD, RGB_VAI, RGB_VAD, _______,
  _______, _______, _______, _______, V_V_V_V,     _______,      V_V_V_V, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R
),
};

bool is_win_switch_active = false;
bool is_alt_tab_active = false;
bool is_quick_tab_active = false;
uint16_t quick_tab_timer = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    if (keycode >= WNDW_1 && keycode <= WNDW_0) {
      if (is_alt_tab_active) {
          unregister_code(KC_LALT);
          is_alt_tab_active = false;
      }
      if (!is_win_switch_active) {
        is_win_switch_active = true;
        register_code(KC_LGUI);
      }
      switch (keycode) {
        case WNDW_0:
          tap_code16(KC_0);
          break;
        case WNDW_1:
          tap_code16(KC_1);
          break;
        case WNDW_2:
          tap_code16(KC_2);
          break;
        case WNDW_3:
          tap_code16(KC_3);
          break;
        case WNDW_4:
          tap_code16(KC_4);
          break;
        case WNDW_5:
          tap_code16(KC_5);
          break;
        case WNDW_6:
          tap_code16(KC_6);
          break;
        case WNDW_7:
          tap_code16(KC_7);
          break;
        case WNDW_8:
          tap_code16(KC_8);
          break;
        case WNDW_9:
          tap_code16(KC_9);
          break;
      }
      return false;
    }
    switch (keycode) {
      case ALT_TAB:
      case SALTTAB:
        if (is_win_switch_active) {
          is_win_switch_active = false;
          unregister_code(KC_LGUI);
        }
        if (!is_alt_tab_active) {
          is_alt_tab_active = true;
          register_code(KC_LALT);
        }
        keycode == ALT_TAB ? tap_code16(KC_TAB) : tap_code16(S(KC_TAB));
        quick_tab_timer = timer_read();
        return false;
      case QCK_TAB:
      case QCKSTAB:
        if (!is_quick_tab_active) {
          is_quick_tab_active = true;
          register_code(KC_LALT);
        }
        keycode == QCK_TAB ? tap_code16(KC_TAB) : tap_code16(S(KC_TAB));
        quick_tab_timer = timer_read();
        return false;
      case QCK_SEL:
        if (is_quick_tab_active) {
          is_quick_tab_active = false;
          unregister_code(KC_LALT);
        }
        return false;
      case TG_CLMK:
        // turn off any other active typing layers first
        layer_off(_RSTHD);
        if (IS_LAYER_ON(_COLEMAK)) { // toggle off
          layer_off(_COLEMAK);
          layer_off(_COLEMAK_MODS);
        }
        else { // toggle on
          if (IS_LAYER_ON(_QWERTY_MODS)) { // set homerow mods as needed
            layer_on(_COLEMAK_MODS);
            layer_off(_RSTHD_MODS);
          }
          layer_on(_COLEMAK);
        }
        return false;
      case TG_RSTH:
        // turn off any other active typing layers first
        layer_off(_COLEMAK);
        if (IS_LAYER_ON(_RSTHD)) { // toggle off
          layer_off(_RSTHD);
          layer_off(_RSTHD_MODS);
        }
        else { // toggle on
          if (IS_LAYER_ON(_QWERTY_MODS)) { // set homerow mods as needed
            layer_on(_RSTHD_MODS);
            layer_off(_COLEMAK_MODS);
          }
          layer_on(_RSTHD);
        }
        return false;
      case HR_MODS:
        if (IS_LAYER_ON(_QWERTY_MODS)) { // toggle off
          layer_off(_QWERTY_MODS);
          layer_off(_COLEMAK_MODS);
          layer_off(_RSTHD_MODS);
        }
        else { // toggle on
          layer_on(_QWERTY_MODS);
          // determine current active typing layer, turn on mods for that layer
          if (IS_LAYER_ON(_COLEMAK)) {
            layer_on(_COLEMAK_MODS);
          } else if (IS_LAYER_ON(_RSTHD)) {
            layer_on(_RSTHD_MODS);
          }
        }
        return false;
    }
  }

  return true;
}

void matrix_scan_user(void) {
  if (is_win_switch_active && !IS_LAYER_ON(_NAV)) {
    unregister_code(KC_LGUI);
    is_win_switch_active = false;
  }
  if (is_alt_tab_active && !IS_LAYER_ON(_NAV)) {
    unregister_code(KC_LALT);
    is_alt_tab_active = false;
  }
  if (is_quick_tab_active && timer_elapsed(quick_tab_timer) > 1000) {
    unregister_code(KC_LALT);
    is_quick_tab_active = false;
  }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MT(MOD_LGUI, KC_A):
    case MT(MOD_LALT, KC_S):
    case MT(MOD_LCTL, KC_D):
    case MT(MOD_RCTL, KC_K):
    case MT(MOD_RALT, KC_L):
    case MT(MOD_RGUI, KC_SCLN):
    case MT(MOD_LALT, KC_R):
    case MT(MOD_LCTL, KC_S):
    case MT(MOD_RCTL, KC_E):
    case MT(MOD_RALT, KC_I):
    case MT(MOD_RGUI, KC_O):
    case MT(MOD_LGUI, KC_R):
    case MT(MOD_LCTL, KC_T):
    case MT(MOD_RCTL, KC_A):
      return 175;
    case MT(MOD_LSFT, KC_F):
    case MT(MOD_RSFT, KC_J):
    case MT(MOD_LSFT, KC_T):
    case MT(MOD_RSFT, KC_N):
    case MT(MOD_LSFT, KC_H):
      return 125;
    case MT_CTAB:
    case LT_LWRE:
    case KC_NMBS:
    case KC_NVSP:
    case KC_NMSP:
      return 175;
    default:
      return TAPPING_TERM;
  }
}
