#include "schnorr0.h"

/* A length-prefixed encoding of the following Simplicity program:
 *     (scribe (toWord256 0xF9308A019258C31049344F85F89D5229B531C845836F99B08601F113BCE036F9) &&&
 *      zero word256) &&&
 *      witness (toWord512 0xE907831F80848D1069A5371B402410364BDF1C5F8307B0084C55F1CE2DCA821525F66A4A85EA8B71E482A74F382D2CE5EBEEE8FDB2172F477DF4900D310536C0) >>>
 *     Simplicity.Programs.LibSecp256k1.Lib.bip_0340_verify
 * with jets.
 */
const unsigned char schnorr0[] = {
  0xc6, 0xd5, 0xf2, 0x61, 0x14, 0x03, 0x24, 0xb1, 0x86, 0x20, 0x92, 0x68, 0x9f, 0x0b, 0xf1, 0x3a, 0xa4, 0x53, 0x6a, 0x63,
  0x90, 0x8b, 0x06, 0xdf, 0x33, 0x61, 0x0c, 0x03, 0xe2, 0x27, 0x79, 0xc0, 0x6d, 0xf2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe2, 0x8d, 0x8c, 0x04, 0x7a, 0x40, 0x1d, 0x20, 0xf0, 0x63, 0xf0, 0x10, 0x91, 0xa2,
  0x0d, 0x34, 0xa6, 0xe3, 0x68, 0x04, 0x82, 0x06, 0xc9, 0x7b, 0xe3, 0x8b, 0xf0, 0x60, 0xf6, 0x01, 0x09, 0x8a, 0xbe, 0x39,
  0xc5, 0xb9, 0x50, 0x42, 0xa4, 0xbe, 0xcd, 0x49, 0x50, 0xbd, 0x51, 0x6e, 0x3c, 0x90, 0x54, 0xe9, 0xe7, 0x05, 0xa5, 0x9c,
  0xbd, 0x7d, 0xdd, 0x1f, 0xb6, 0x42, 0xe5, 0xe8, 0xef, 0xbe, 0x92, 0x01, 0xa6, 0x20, 0xa6, 0xd8, 0x00
};

const size_t sizeof_schnorr0 = sizeof(schnorr0);

/* The commitment Merkle root of the above schnorr0 Simplicity expression. */
const uint32_t schnorr0_cmr[] = {
  0x284dbc78u, 0xdf8395bfu, 0xfff6d4dbu, 0xddd495b0u, 0x1eb0cf83u, 0x9eefebefu, 0xe46d1c51u, 0x28db332fu
};

/* The identity Merkle root of the above schnorr0 Simplicity expression. */
const uint32_t schnorr0_imr[] = {
  0xe923e769u, 0x571fa9c5u, 0x1626e43bu, 0xe96f1f99u, 0xa2f1f769u, 0x5ebefa46u, 0x371cfcf7u, 0x62d3663bu
};

/* The annotated Merkle root of the above schnorr0 Simplicity expression. */
const uint32_t schnorr0_amr[] = {
  0xaaebbac3u, 0x2538afb4u, 0x1fd9f37bu, 0x3d157222u, 0x9ab014e2u, 0xa5a16d65u, 0xb8a02e9cu, 0x5a4d3c81u
};

/* The cost of the above schnorr0 Simplicity expression in milli weight units. */
const ubounded schnorr0_cost = 53283;
