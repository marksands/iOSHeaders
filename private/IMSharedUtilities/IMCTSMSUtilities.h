//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMCTSMSUtilities : NSObject
{
}

+ (_Bool)IMMessagesFilteringSettingForPreferedSubscription;
+ (_Bool)MMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 reset:(_Bool)arg3;
+ (_Bool)IMMMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMMMSEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMIsEagerUploadEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMShouldShowMMSEmailAddress:(id)arg1 simID:(id)arg2;
+ (id)IMMMSEmailAddressToMatchForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (unsigned long long)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long *)arg1 cellSize:(unsigned long long *)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
+ (unsigned long long)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long *)arg1 cellSize:(unsigned long long *)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
+ (void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long *)arg1 cellSize:(unsigned long long *)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
+ (double)IMMMSMaximumDurationWithPreset:(id)arg1 phoneNumber:(id)arg2 simID:(id)arg3;
+ (double)IMMMSMaximumVideoDurationForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (double)IMMMSMaximumAudioDurationForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMMMSSupportsH264VideoForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (int)IMMMSMaxImageDimensionForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (int)IMMMSMaxRecipientsForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (int)IMMMSMaximumSlideCountForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMMMSSupportedAndConfiguredForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMMMSEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)IMReadMMSUserOverrideForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (id)IMUniqueIdentifierForPhoneNumber:(id)arg1 simID:(id)arg2;

@end

