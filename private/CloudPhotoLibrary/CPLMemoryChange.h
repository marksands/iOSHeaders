//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class CPLMemoryAssetList, NSData, NSDate, NSString;

@interface CPLMemoryChange : CPLRecordChange
{
    _Bool _favorite;
    _Bool _rejected;
    _Bool _userCreated;
    NSString *_title;
    NSString *_subtitle;
    long long _category;
    long long _subcategory;
    CPLMemoryAssetList *_assetList;
    NSData *_assetListPredicate;
    NSDate *_creationDate;
    NSData *_graphData;
    long long _graphVersion;
    NSData *_movieData;
    double _score;
    long long _notificationState;
    NSData *_blacklistedFeature;
    long long _playCount;
    long long _shareCount;
    long long _viewCount;
}

+ (id)_createTestMemoryWithAssets:(id)arg1;
@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(copy, nonatomic) NSData *blacklistedFeature; // @synthesize blacklistedFeature=_blacklistedFeature;
@property(nonatomic) long long notificationState; // @synthesize notificationState=_notificationState;
@property(nonatomic) double score; // @synthesize score=_score;
@property(copy, nonatomic) NSData *movieData; // @synthesize movieData=_movieData;
@property(nonatomic, getter=isUserCreated) _Bool userCreated; // @synthesize userCreated=_userCreated;
@property(nonatomic, getter=isRejected) _Bool rejected; // @synthesize rejected=_rejected;
@property(nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_favorite;
@property(nonatomic) long long graphVersion; // @synthesize graphVersion=_graphVersion;
@property(copy, nonatomic) NSData *graphData; // @synthesize graphData=_graphData;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSData *assetListPredicate; // @synthesize assetListPredicate=_assetListPredicate;
@property(copy, nonatomic) CPLMemoryAssetList *assetList; // @synthesize assetList=_assetList;
@property(nonatomic) long long subcategory; // @synthesize subcategory=_subcategory;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)propertiesDescription;
- (_Bool)supportsDirectDeletion;
- (_Bool)supportsDeletion;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)identifiersForMapping;

@end

