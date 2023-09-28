#include QMK_KEYBOARD_H

enum combos { 
  I_O_QUOTE,
  A_O_ESC,
  P_L_UNDS,
  
};

const uint16_t PROGMEM l_u_quote[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM f_p_esc[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM p_l_unds[] = {KC_P, KC_L, COMBO_END};

combo_t key_combos[] = {
  COMBO(l_u_quote, KC_QUOTE),
  COMBO(f_p_esc, KC_ESC),
  COMBO(p_l_unds, KC_UNDS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
                                         KC_Q, KC_W, KC_F, KC_P, KC_B,      KC_J, KC_L, KC_U, KC_Y, KC_SCLN, 
         LCTL_T(KC_A), LALT_T(KC_R), LSFT_T(KC_S), LGUI_T(KC_T), KC_G,      KC_M, RGUI_T(KC_N), RSFT_T(KC_E), RALT_T(KC_I), RCTL_T(KC_O), 
                                         KC_Z, KC_X, KC_C, KC_D, KC_V,      KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, 
                                           LT(3,KC_TAB), LT(1,KC_ENT),      LT(2,KC_SPC), KC_BSPC),
	
  [1] = LAYOUT_split_3x5_2(         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, 
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, 
                                    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_LBRC, KC_RBRC, KC_LT, KC_GT, 
                                                         KC_NO, KC_NO,      KC_NO, KC_NO),
	
  [2] = LAYOUT_split_3x5_2( KC_ESC, KC_MINS, KC_ASTR, KC_AMPR, KC_EQL,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                           KC_DQUO, KC_CIRC, KC_PERC, KC_DLR, KC_PLUS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                           KC_TILD, KC_HASH, KC_AT,  KC_EXLM, KC_PIPE,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                                                         KC_NO, KC_NO,      KC_NO, KC_NO),
	
  [3] = LAYOUT_split_3x5_2(         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_7, KC_8, KC_9, KC_VOLU, 
                              KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,      KC_NO, KC_4, KC_5, KC_6, KC_VOLD, 
                                    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_0, KC_1, KC_2, KC_3, KC_MUTE, 
                                                         KC_NO, KC_NO,      KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




