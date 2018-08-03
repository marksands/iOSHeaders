//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedAlbum.h>

#import "PLCloudSharedAlbumProtocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PLCloudSharedAlbum : PLManagedAlbum <PLCloudSharedAlbumProtocol>
{
    _Bool _deleteFromDBOnly;
}

+ (id)lightweightReimportDirectoryNameWithGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (id)cloudOwnerDisplayNameWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 includingEmail:(_Bool)arg5 allowsEmail:(_Bool)arg6;
+ (id)localizedSharedByLabelWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 isOwned:(_Bool)arg5 allowsEmail:(_Bool)arg6;
+ (id)allCloudSharedAlbumsInLibrary:(id)arg1;
+ (id)cloudSharedAlbumWithObjectID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)cloudSharedAlbumWithGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)entityName;
+ (id)entityInManagedObjectContext:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)persistRecoveryMetadata;
- (void)userDeleteSubscriberRecord:(id)arg1;
@property(readonly, retain, nonatomic) NSOrderedSet *cloudAlbumSubscriberRecords; // @dynamic cloudAlbumSubscriberRecords;
@property(retain, nonatomic) NSString *cloudOwnerEmail;
- (void)publishBatchOfOriginalAssets:(id)arg1 withBatchCommentText:(id)arg2 assetsSharingInfos:(id)arg3 andTrimmedVideoPathInfo:(id)arg4 isNewAlbum:(_Bool)arg5;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (id)cloudOwnerDisplayNameIncludingEmail:(_Bool)arg1 allowsEmail:(_Bool)arg2;
@property(readonly, retain, nonatomic) NSDate *cloudFirstRecentBatchDate;
@property(readonly, nonatomic) _Bool canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isFamilyCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isOwnedCloudSharedAlbum;
@property(readonly, retain, nonatomic) NSString *localizedSharedWithLabel;
- (id)localizedSharedByLabelAllowsEmail:(_Bool)arg1;
@property(readonly) int cloudRelationshipStateLocalValue;
@property(readonly) int cloudRelationshipStateValue;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
- (id)_expectedKeyAssets:(id)arg1;
- (void)delete;
- (void)deleteFromDatabaseOnly;
- (id)albumDirectoryPath;
- (void)prepareForDeletion;
- (void)willSave;
- (void)awakeFromInsert;
- (void)getUnseenStartMarkerIndex:(unsigned long long *)arg1 count:(unsigned long long *)arg2 showsProgress:(_Bool *)arg3;
@property unsigned long long unseenAssetsCountIntegerValue;
@property(nonatomic) _Bool hasUnseenContentBoolValue;

// Remaining properties
@property(readonly, nonatomic) unsigned long long approximateCount;
@property(retain, nonatomic) NSOrderedSet *assets; // @dynamic assets;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(nonatomic) unsigned long long batchSize;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
@property(readonly, nonatomic) _Bool canShowComments;
@property(nonatomic) short cloudAlbumSubtype; // @dynamic cloudAlbumSubtype;
@property(retain, nonatomic) NSDate *cloudCreationDate; // @dynamic cloudCreationDate;
@property(retain, nonatomic) NSString *cloudGUID; // @dynamic cloudGUID;
@property(retain, nonatomic) NSDate *cloudLastContributionDate; // @dynamic cloudLastContributionDate;
@property(retain, nonatomic) NSDate *cloudLastInterestingChangeDate; // @dynamic cloudLastInterestingChangeDate;
@property(retain, nonatomic) NSDictionary *cloudMetadata; // @dynamic cloudMetadata;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabled; // @dynamic cloudMultipleContributorsEnabled;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabledLocal; // @dynamic cloudMultipleContributorsEnabledLocal;
@property(nonatomic) _Bool cloudNotificationsEnabled; // @dynamic cloudNotificationsEnabled;
@property(retain, nonatomic) NSNumber *cloudOwnerEmailKey; // @dynamic cloudOwnerEmailKey;
@property(retain, nonatomic) NSString *cloudOwnerFirstName; // @dynamic cloudOwnerFirstName;
@property(retain, nonatomic) NSString *cloudOwnerFullName; // @dynamic cloudOwnerFullName;
@property(retain, nonatomic) NSString *cloudOwnerHashedPersonID; // @dynamic cloudOwnerHashedPersonID;
@property(nonatomic) _Bool cloudOwnerIsWhitelisted; // @dynamic cloudOwnerIsWhitelisted;
@property(retain, nonatomic) NSString *cloudOwnerLastName; // @dynamic cloudOwnerLastName;
@property(retain, nonatomic) NSString *cloudPersonID; // @dynamic cloudPersonID;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabled; // @dynamic cloudPublicURLEnabled;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal; // @dynamic cloudPublicURLEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudRelationshipState; // @dynamic cloudRelationshipState;
@property(retain, nonatomic) NSNumber *cloudRelationshipStateLocal; // @dynamic cloudRelationshipStateLocal;
@property(retain, nonatomic) NSDate *cloudSubscriptionDate; // @dynamic cloudSubscriptionDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSNumber *hasUnseenContent; // @dynamic hasUnseenContent;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSOrderedSet *invitationRecords; // @dynamic invitationRecords;
@property(readonly, nonatomic) _Bool isCameraAlbum;
@property(readonly, nonatomic) _Bool isCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) _Bool isInTrash;
@property(readonly, nonatomic) _Bool isLibrary;
@property(retain, nonatomic) NSNumber *isOwned; // @dynamic isOwned;
@property(readonly, nonatomic) _Bool isPanoramasAlbum;
@property(readonly, nonatomic) _Bool isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isRecentlyAddedAlbum;
@property(readonly, nonatomic) _Bool isStandInAlbum;
@property(readonly, nonatomic) _Bool isUserLibraryAlbum;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) int kindValue;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, copy, nonatomic) NSString *name;
@property(nonatomic) int pendingItemsCount;
@property(nonatomic) int pendingItemsType;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, retain, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) NSString *publicURL; // @dynamic publicURL;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(readonly, nonatomic) _Bool shouldDeleteWhenEmpty;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(readonly, retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSNumber *unseenAssetsCount; // @dynamic unseenAssetsCount;
@property(readonly, retain, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long videosCount;

@end

