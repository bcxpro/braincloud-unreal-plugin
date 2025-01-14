// Copyright 2018 bitHeads, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <BrainCloudAppDataStruct.h>
#include "BrainCloudFunctionLibrary.generated.h"

UCLASS()
class BCCLIENTPLUGIN_API UBrainCloudFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "BrainCloud Utility")
	static FBrainCloudAppDataStruct GetBCAppData();

	UFUNCTION(BlueprintCallable, Category = "BrainCloud Utility")
	static void SetBCAppData(FBrainCloudAppDataStruct appData);

	UFUNCTION(BlueprintCallable, Category = "BrainCloud Utility")
	static bool ValidateAndExtractURL(const FString& InputURL, FString& OutURL);
};
