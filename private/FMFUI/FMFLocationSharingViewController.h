//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "FMFSessionDelegateInternal.h"

@class FMFHandle, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, UIAlertController;

@interface FMFLocationSharingViewController : PSListController <FMFSessionDelegateInternal>
{
    _Bool _isMyLocationEnabled;
    _Bool _useFamilyCirclePhotos;
    _Bool _useFamilyCirclePhotosLoaded;
    _Bool _areSpecifiersLoaded;
    NSArray *_followersSpecifiers;
    NSArray *_familySpecifiers;
    NSArray *_deviceSpecifiers;
    NSArray *_allFollowersHandles;
    NSArray *_followersHandles;
    NSMutableDictionary *_dsidToFamilyPhoto;
    NSArray *_hashedFamilyDsids;
    FMFHandle *_lastSelectedHandle;
    NSArray *_familyMembers;
    UIAlertController *_genericErrorAlert;
    NSObject<OS_dispatch_queue> *_specifiersQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *specifiersQueue; // @synthesize specifiersQueue=_specifiersQueue;
@property(nonatomic) _Bool areSpecifiersLoaded; // @synthesize areSpecifiersLoaded=_areSpecifiersLoaded;
@property(nonatomic) _Bool useFamilyCirclePhotosLoaded; // @synthesize useFamilyCirclePhotosLoaded=_useFamilyCirclePhotosLoaded;
@property(nonatomic) _Bool useFamilyCirclePhotos; // @synthesize useFamilyCirclePhotos=_useFamilyCirclePhotos;
@property(retain, nonatomic) UIAlertController *genericErrorAlert; // @synthesize genericErrorAlert=_genericErrorAlert;
@property(retain, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(nonatomic) _Bool isMyLocationEnabled; // @synthesize isMyLocationEnabled=_isMyLocationEnabled;
@property(retain, nonatomic) FMFHandle *lastSelectedHandle; // @synthesize lastSelectedHandle=_lastSelectedHandle;
@property(retain, nonatomic) NSArray *hashedFamilyDsids; // @synthesize hashedFamilyDsids=_hashedFamilyDsids;
@property(retain, nonatomic) NSMutableDictionary *dsidToFamilyPhoto; // @synthesize dsidToFamilyPhoto=_dsidToFamilyPhoto;
@property(retain, nonatomic) NSArray *followersHandles; // @synthesize followersHandles=_followersHandles;
@property(retain, nonatomic) NSArray *allFollowersHandles; // @synthesize allFollowersHandles=_allFollowersHandles;
@property(retain, nonatomic) NSArray *deviceSpecifiers; // @synthesize deviceSpecifiers=_deviceSpecifiers;
@property(retain, nonatomic) NSArray *familySpecifiers; // @synthesize familySpecifiers=_familySpecifiers;
@property(retain, nonatomic) NSArray *followersSpecifiers; // @synthesize followersSpecifiers=_followersSpecifiers;
- (void).cxx_destruct;
- (void)networkReachabilityUpdated:(_Bool)arg1;
- (void)didReceiveServerError:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didUpdateHidingStatus:(_Bool)arg1;
- (void)reloadSpecifiersOnMainQueue;
- (void)_meDeviceSpecifierWasTapped:(id)arg1;
- (id)allHandlesMatchingABCardForSelectedHandle:(id)arg1;
- (void)shareMyLocation:(id)arg1;
- (id)_followerHandleWithHashedDSID:(id)arg1;
- (void)removeFollower:(id)arg1;
- (void)addShareActionToContactViewController:(id)arg1;
- (void)addRemoveActionToContactViewController:(id)arg1;
- (id)identifierForHandle:(id)arg1;
- (id)reverseString:(id)arg1;
- (id)stringByKeepingCharacterSet:(id)arg1 inString:(id)arg2;
- (_Bool)phoneNumberMatches:(id)arg1 phone2:(id)arg2;
- (_Bool)_isFamilyMemberAFollower:(id)arg1;
- (_Bool)_isHandleAFollower:(id)arg1;
- (void)_pushAddressBookUIForHandle:(id)arg1;
- (void)_showFamilyMemberDetails:(id)arg1;
- (void)_showHandleDetails:(id)arg1;
- (id)_shareSwitchEnabled:(id)arg1;
- (void)displayAlertController:(id)arg1;
- (id)genericAlertController;
- (void)_setShareSwitchEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)formatStringForHours:(long long)arg1 minutes:(long long)arg2;
- (id)offerTimeRemaining:(double)arg1;
- (id)monogramForHandle:(id)arg1;
- (id)_specifierForHandle:(id)arg1;
- (_Bool)noMeDeviceSelected:(id)arg1;
- (id)sortedFollowersWithCombinedRecords:(id)arg1;
- (id)_defaultSpecifiers;
- (void)_loadSpecifiers;
- (void)_loadFamilyMemberPhotos;
- (void)_loadFamilyMembers:(_Bool)arg1;
- (id)specifiers;
- (void)contactStoreDidChange:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

