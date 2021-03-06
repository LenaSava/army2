cmake_minimum_required(VERSION 3.10)
project(army)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)
include_directories(ability)
include_directories(spell)
include_directories(spellcaster)
include_directories(state)
include_directories(unit)
include_directories(tests)

add_executable(army
        ability/Ability.cpp
        ability/Ability.h
        ability/DefaultAbility.cpp
        ability/DefaultAbility.h
        ability/MagicAbility.cpp
        ability/MagicAbility.h
        ability/RogueAbility.cpp
        ability/RogueAbility.h
        ability/VampireAbility.cpp
        ability/VampireAbility.h
        ability/WerewolfAbility.cpp
        ability/WerewolfAbility.h
        ability/WizardAbility.cpp
        ability/WizardAbility.h
        ability/HealerAbility.cpp
        ability/PriestAbility.cpp
        spell/FireBall.cpp
        spell/FireBall.h
        spell/Heal.cpp
        spell/Heal.h
        spell/Spell.cpp
        spell/Spell.h
        spell/SpellBook.cpp
        spell/SpellBook.h
        spellcaster/SpellCaster.cpp
        spellcaster/SpellCaster.h
        spellcaster/Wizard.cpp
        spellcaster/Wizard.h
        spellcaster/Healer.cpp
        spellcaster/Priest.cpp
        spellcaster/Warlock.cpp
        state/BerserkerState.cpp
        state/BerserkerState.h
        state/MagicState.cpp
        state/MagicState.h
        state/State.cpp
        state/State.h
        state/TurnWolfState.cpp
        state/TurnWolfState.h
        state/VampireState.cpp
        state/VampireState.h
        state/WerewolfState.cpp
        state/WerewolfState.h
        unit/Berserker.cpp
        unit/Berserker.h
        unit/Rogue.cpp
        unit/Rogue.h
        unit/Soldier.cpp
        unit/Soldier.h
        unit/Unit.cpp
        unit/Unit.h
        unit/Vampire.cpp
        unit/Vampire.h
        unit/Werewolf.cpp
        unit/Werewolf.h
#        tests/tests.cpp
        main.cpp
        Army.h
        exceptions.h
        spellcaster/Warlock.cpp spellcaster/Warlock.h unit/Demon.cpp unit/Demon.h ability/WarlockAbility.cpp ability/WarlockAbility.h spell/Lightning.h spell/Lightning.cpp spellcaster/Necromancer.cpp spellcaster/Necromancer.h spell/DarkMagic.cpp spell/DarkMagic.h ability/NecroAbility.cpp ability/NecroAbility.h Interface/Observer.cpp Interface/Observer.h Interface/Observable.cpp Interface/Observable.h state/NecroState.cpp state/NecroState.h )
