//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDDebug;

@interface CDDServerResponder : NSObject
{
    CDDebug *_debug;
}

@property(readonly) CDDebug *debug; // @synthesize debug=_debug;
- (void).cxx_destruct;
- (_Bool)respondToLocalFocalAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToRequestAdmissionLogFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToSetNonAppFocalOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToBundleIdChangeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToAdmissionCheckAndStartedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 admissionGranted:(_Bool)arg4 grantValiditySeconds:(unsigned long long)arg5 admissionCondition:(unsigned long long)arg6 error:(id *)arg7;
- (_Bool)respondToGetRemoteSystemDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToTriggerSystemDataExchange:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToReadRemoteRequestResultOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseKey:(const char *)arg4 responseDictionary:(id)arg5 error:(id *)arg6;
- (_Bool)respondToRequestDeviceStatisticDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToRequestDeviceForecastDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToRequestSystemDataFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToResetAdmissionMask:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToSetAdmissionMask:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToAttributeReset:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToBroadcastSystemDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToReadSystemDataFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToGetDeviceFromDescriptionOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToGetDevicesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToRemoteFocalAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToBudgetsForAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToHistoryQueryOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToSignoffConditionsChangedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToRegisterForSignoff:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToMeteringForAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 meterToken:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)respondToAttributeRepeatedStatisticOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 statisticsArray:(id)arg4 error:(id *)arg5;
- (_Bool)respondToAttributeStatisticOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 statisticsDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToGetCtlOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 mitigationDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToSetCtlOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToSetCategoryOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToAssociateToBudgetOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToAdmissionCheckOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 admissionGranted:(_Bool)arg4 grantValiditySeconds:(unsigned long long)arg5 admissionCondition:(unsigned long long)arg6 error:(id *)arg7;
- (_Bool)respondToDeleteDataForClientIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToPoolNamesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToAttributeNamesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToAttributeOccurredOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToBackgroundLaunchOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToIdForAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 attributeId:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)respondToRegisterAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 registeredAttributeId:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)respondToAppsLaunchedButNotPrewarmedSinceDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToDeleteAllDatabaseEntriesOlderThanDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToDeleteAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToDeleteBundleIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToBundleIdEntriesOlderThanDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(_Bool)arg4 error:(id *)arg5;
- (_Bool)respondToDeregisterTrendableAppOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToRegisterTrendableAppOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToLiveAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToTrendingAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToDecrementPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 decrementedValue:(long long)arg4 error:(id *)arg5;
- (_Bool)respondToIncrementPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 incrementedValue:(long long)arg4 error:(id *)arg5;
- (_Bool)respondToCompareAndSwapPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 finalValue:(long long)arg4 error:(id *)arg5;
- (_Bool)respondToReadPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 readValue:(long long)arg4 error:(id *)arg5;
- (_Bool)respondToDeletePoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToIdForPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)respondToRegisterChildPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 initialValue:(long long)arg4 integerId:(unsigned long long)arg5 error:(id *)arg6;
- (_Bool)respondToRegisterPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 initialValue:(long long)arg4 integerId:(unsigned long long)arg5 error:(id *)arg6;
- (_Bool)respondToForecastAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id *)arg5;
- (_Bool)respondToVersionOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondToDebugBitmapOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)respondIndicatingProtocolErrorOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 protocolErrorNumber:(long long)arg4 error:(id *)arg5;
- (_Bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 dictionaryKey:(id)arg7 dictionary:(id)arg8 error:(id *)arg9;
- (_Bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 dictionaryKey:(id)arg5 dictionary:(id)arg6 error:(id *)arg7;
- (_Bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 valueKey:(id)arg7 value:(long long)arg8 error:(id *)arg9;
- (_Bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 valueKey:(id)arg5 value:(unsigned long long)arg6 error:(id *)arg7;
- (_Bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 error:(id *)arg7;
- (_Bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 error:(id *)arg5;
- (id)makeStashWithId:(unsigned long long)arg1;
- (id)init;

@end

