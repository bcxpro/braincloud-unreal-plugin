// Copyright 2018 bitHeads, Inc. All Rights Reserved.

#pragma once
#include "BCAuthType.generated.h"

UENUM(BlueprintType)
enum class EBCAuthType : uint8
{
	Anonymous UMETA(DisplayName = "Anonymous"),
	Universal UMETA(DisplayName = "Universal"),
	Email UMETA(DisplayName = "Email"),
	Facebook UMETA(DisplayName = "Facebook"),
	FacebookLimited UMETA(DisplayName = "FacebookLimited"),
	Oculus UMETA(DisplayName = "Oculus"),
	PlaystationNetwork UMETA(DisplayName = "PlaystationNetwork"),
	PlaystationNetwork5 UMETA(DisplayName = "PlaystationNetwork5"),
	GameCenter UMETA(DisplayName = "GameCenter"),
	Steam UMETA(DisplayName = "Steam"),
	Google UMETA(DisplayName = "Google"),
	GoogleOpenId UMETA(DisplayName = "GoogleOpenId"),
	Apple UMETA(DisplayName = "Apple"),
	Twitter UMETA(DisplayName = "Twitter"),
	Parse UMETA(DisplayName = "Parse"),
	Handoff UMETA(DisplayName = "Handoff"),
	SettopHandoff UMETA(DisplayName = "SettopHandoff"),
	External UMETA(DisplayName = "External"),
	Ultra UMETA(DisplayName = "Ultra"),
	Unknown UMETA(DisplayName = "Unknown")
};

class BCCLIENTPLUGIN_API BCAuthType
{
  public:
	static FString EnumToString(EBCAuthType platform);

  private:
	BCAuthType(){};
};
