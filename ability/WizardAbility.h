#ifndef WIZARD_ABILITY_H
#define WIZARD_ABILITY_H

#include "MagicAbility.h"

#define WIZARD_RATE 0.5

class WizardAbility : public MagicAbility {
public:
    WizardAbility(SpellCaster* owner, spells spell);
    virtual ~WizardAbility();

    virtual void cast(Unit* enemy);
};

#endif // WIZARD_ABILITY_H