//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMMediaProfile.h"

#import "HFMediaProfileContainer.h"

@class HFAccessorySettingAdapterManager, HFMediaProfileContainerSettingsValueManager, HFServiceNameComponents, HMAccessory, HMAccessorySettings, HMHome, HMMediaSession, HMRoom, HMSymptomsHandler, NSDate, NSSet, NSString, NSUUID;

@interface HMMediaProfile (HFMediaAccessoryProfileAdditions) <HFMediaProfileContainer>
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, nonatomic) NSString *hf_editingName;
@property(readonly, nonatomic) NSString *hf_defaultName;
@property(readonly, copy, nonatomic) NSString *hf_displayName;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateIsFavorite:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
- (id)hf_fetchLog:(id)arg1 timeout:(double)arg2;
- (id)hf_fetchLogListWithTimeout:(double)arg1;
- (id)hf_idsDeviceIdentifierWithError:(id *)arg1;
@property(readonly, nonatomic) HFMediaProfileContainerSettingsValueManager *hf_settingsValueManager;
- (id)hf_appleMusicCurrentLoggedInAccountDSID;
- (id)hf_appleMusicCurrentLoggedInAccount;
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
@property(readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjects;
@property(readonly, nonatomic) HFAccessorySettingAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) id <HFMediaValueSource> hf_mediaValueSource;
@property(readonly, nonatomic) _Bool hf_isAccessorySettingsReachable;
@property(readonly, nonatomic) _Bool hf_isAppleMusicReachable;
@property(readonly, nonatomic) _Bool hf_supportsSoftwareUpdate;
@property(readonly, nonatomic) _Bool hf_showsAudioSettings;
@property(readonly, nonatomic) _Bool hf_supportsMediaSystem;
@property(readonly, nonatomic) _Bool hf_isReachable;
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
@property(readonly, copy) NSSet *symptoms;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@property(readonly, nonatomic) _Bool hf_isCurrentAccessory;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
@property(readonly, nonatomic) HMHome *hf_home;
@property(readonly, nonatomic) NSSet *accessories;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <HMMediaObjectDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *hf_prettyDescription;
@property(readonly, copy) HMMediaSession *mediaSession;
@property(readonly) HMAccessorySettings *settings;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

