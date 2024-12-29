#pragma once

#include "CoreMinimal.h"
#include "PokerTerms.h" // Use the universal PokerTerms library
#include "UObject/Interface.h"
#include "ActionInterface.generated.h"

UINTERFACE(MinimalAPI)
class UActionInterface : public UInterface {
    GENERATED_BODY()
};

class NLHE_API IActionInterface {
    GENERATED_BODY()

public:
    virtual void Fold() = 0;
    virtual void Check() = 0;
    virtual void Bet(int32 Amount) = 0;
    virtual void Call() = 0;
    virtual void Raise(int32 Amount) = 0;
    virtual void AllIn() = 0;
};
