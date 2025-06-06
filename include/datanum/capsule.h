#ifndef DATANUM_CAPSULE_H
#define DATANUM_CAPSULE_H

#include "datadir_enum.h"

enum {
    CAPSULE_HSF_selSelKinoko = DATANUM(DATA_capsule, 0),
    CAPSULE_HSF_selSkinoko = DATANUM(DATA_capsule, 1),
    CAPSULE_HSF_selNkinoko = DATANUM(DATA_capsule, 2),
    CAPSULE_HSF_selDokan = DATANUM(DATA_capsule, 3),
    CAPSULE_HSF_selJango = DATANUM(DATA_capsule, 4),
    CAPSULE_HSF_selBoble = DATANUM(DATA_capsule, 5),
    CAPSULE_HSF_selHanachan = DATANUM(DATA_capsule, 6),
    CAPSULE_HSF_selHammerbro = DATANUM(DATA_capsule, 7),
    CAPSULE_HSF_selCoinblock = DATANUM(DATA_capsule, 8),
    CAPSULE_HSF_selTogezo = DATANUM(DATA_capsule, 9),
    CAPSULE_HSF_selPatapata = DATANUM(DATA_capsule, 10),
    CAPSULE_HSF_selSelKiller = DATANUM(DATA_capsule, 11),
    CAPSULE_HSF_selSelKuribo = DATANUM(DATA_capsule, 12),
    CAPSULE_HSF_selBomhei = DATANUM(DATA_capsule, 13),
    CAPSULE_HSF_selBank = DATANUM(DATA_capsule, 14),
    CAPSULE_HSF_selSelKamekku = DATANUM(DATA_capsule, 15),
    CAPSULE_HSF_selThrowman = DATANUM(DATA_capsule, 16),
    CAPSULE_HSF_selPakkun = DATANUM(DATA_capsule, 17),
    CAPSULE_HSF_selSelKokamekku = DATANUM(DATA_capsule, 18),
    CAPSULE_HSF_selUkki = DATANUM(DATA_capsule, 19),
    CAPSULE_HSF_selJugem = DATANUM(DATA_capsule, 20),
    CAPSULE_HSF_selTumujikun = DATANUM(DATA_capsule, 21),
    CAPSULE_HSF_selDuel = DATANUM(DATA_capsule, 22),
    CAPSULE_HSF_selWanwan = DATANUM(DATA_capsule, 23),
    CAPSULE_HSF_selHone = DATANUM(DATA_capsule, 24),
    CAPSULE_HSF_selSelKoopa = DATANUM(DATA_capsule, 25),
    CAPSULE_HSF_selChance = DATANUM(DATA_capsule, 26),
    CAPSULE_HSF_selMiracle = DATANUM(DATA_capsule, 27),
    CAPSULE_HSF_capsuleGreen = DATANUM(DATA_capsule, 28),
    CAPSULE_HSF_capsuleYellow = DATANUM(DATA_capsule, 29),
    CAPSULE_HSF_capsuleRed = DATANUM(DATA_capsule, 30),
    CAPSULE_HSF_capsuleBlue = DATANUM(DATA_capsule, 31),
    CAPSULE_HSF_capsuleKoopa = DATANUM(DATA_capsule, 32),
    CAPSULE_HSF_hammer = DATANUM(DATA_capsule, 33),
    CAPSULE_HSF_hone = DATANUM(DATA_capsule, 34),
    CAPSULE_HSF_hanachanFlower = DATANUM(DATA_capsule, 35),
    CAPSULE_HSF_hammerBroDaiza = DATANUM(DATA_capsule, 36),
    CAPSULE_HSF_kuriboDaiza = DATANUM(DATA_capsule, 37),
    CAPSULE_HSF_ukkiRope = DATANUM(DATA_capsule, 38),
    CAPSULE_HSF_donkeyTree = DATANUM(DATA_capsule, 39),
    CAPSULE_HSF_ztar = DATANUM(DATA_capsule, 40),
    CAPSULE_HSF_null = DATANUM(DATA_capsule, 41),
    CAPSULE_HSF_kinoko = DATANUM(DATA_capsule, 42),
    CAPSULE_HSF_skinoko = DATANUM(DATA_capsule, 43),
    CAPSULE_HSF_nkinoko = DATANUM(DATA_capsule, 44),
    CAPSULE_HSF_dokan = DATANUM(DATA_capsule, 45),
    CAPSULE_HSF_dkeff = DATANUM(DATA_capsule, 46),
    CAPSULE_ANM_batsu = DATANUM(DATA_capsule, 47),
    CAPSULE_ANM_koopaEvent1 = DATANUM(DATA_capsule, 48),
    CAPSULE_ANM_koopaEvent2 = DATANUM(DATA_capsule, 49),
    CAPSULE_ANM_koopaEvent3 = DATANUM(DATA_capsule, 50),
    CAPSULE_ANM_koopaEvent4 = DATANUM(DATA_capsule, 51),
    CAPSULE_ANM_donkeyEvent1 = DATANUM(DATA_capsule, 52),
    CAPSULE_ANM_donkeyEvent2 = DATANUM(DATA_capsule, 53),
    CAPSULE_ANM_donkeyEvent3 = DATANUM(DATA_capsule, 54),
    CAPSULE_ANM_koopaFade = DATANUM(DATA_capsule, 55),
    CAPSULE_ANM_donkeyBanana = DATANUM(DATA_capsule, 56),
    CAPSULE_ANM_donkeyBananaNum = DATANUM(DATA_capsule, 57),
    CAPSULE_ANM_duelCoinWin = DATANUM(DATA_capsule, 58),
    CAPSULE_ANM_duelCoinNum = DATANUM(DATA_capsule, 59),
    CAPSULE_ANM_duelCoin = DATANUM(DATA_capsule, 60),
    CAPSULE_ANM_rouletteCoin = DATANUM(DATA_capsule, 61),
    CAPSULE_ANM_rouletteStar = DATANUM(DATA_capsule, 62),
    CAPSULE_ANM_rouletteCapsuleMulti = DATANUM(DATA_capsule, 63),
    CAPSULE_ANM_rouletteCapsule = DATANUM(DATA_capsule, 64),
    CAPSULE_ANM_effExplode = DATANUM(DATA_capsule, 65),
    CAPSULE_ANM_effCoin = DATANUM(DATA_capsule, 66),
    CAPSULE_ANM_effDot = DATANUM(DATA_capsule, 67),
    CAPSULE_ANM_effCrack = DATANUM(DATA_capsule, 68),
    CAPSULE_ANM_effRing = DATANUM(DATA_capsule, 69),
    CAPSULE_ANM_effRay = DATANUM(DATA_capsule, 70),
    CAPSULE_ANM_effTriCloud = DATANUM(DATA_capsule, 71),
    CAPSULE_ANM_effSun = DATANUM(DATA_capsule, 72),
    CAPSULE_ANM_effLens = DATANUM(DATA_capsule, 73),
    CAPSULE_ANM_effLensDark = DATANUM(DATA_capsule, 74),
    CAPSULE_ANM_effWind = DATANUM(DATA_capsule, 75),
    CAPSULE_ANM_effDot2 = DATANUM(DATA_capsule, 76),
    CAPSULE_ANM_effStar = DATANUM(DATA_capsule, 77),
};

#endif