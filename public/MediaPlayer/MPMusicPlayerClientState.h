//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaItem, MPMediaPlaylist, MPMediaQuery, MPMusicPlayerQueueDescriptor, MPRadioStation, NSArray, NSDictionary, NSString;

@interface MPMusicPlayerClientState : NSObject
{
    _Bool _hasAudioBackgroundMode;
    _Bool _seeking;
    _Bool _useApplicationSpecificQueue;
    int _backgroundPlaybackAccess;
    MPMediaItem *_firstItem;
    MPMediaPlaylist *_geniusMixPlaylist;
    MPMediaQuery *_query;
    long long _repeatMode;
    long long _shuffleMode;
    NSDictionary *_assetStoreFrontOverrides;
    NSDictionary *_endTimeModifications;
    MPRadioStation *_radioStation;
    NSString *_startItemID;
    NSDictionary *_startTimeModifications;
    NSArray *_storeIDs;
    MPMusicPlayerQueueDescriptor *_queueDescriptor;
}

@property(retain, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor; // @synthesize queueDescriptor=_queueDescriptor;
@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(copy, nonatomic) NSDictionary *startTimeModifications; // @synthesize startTimeModifications=_startTimeModifications;
@property(copy, nonatomic) NSString *startItemID; // @synthesize startItemID=_startItemID;
@property(retain, nonatomic) MPRadioStation *radioStation; // @synthesize radioStation=_radioStation;
@property(copy, nonatomic) NSDictionary *endTimeModifications; // @synthesize endTimeModifications=_endTimeModifications;
@property(copy, nonatomic) NSDictionary *assetStoreFrontOverrides; // @synthesize assetStoreFrontOverrides=_assetStoreFrontOverrides;
@property(nonatomic) _Bool useApplicationSpecificQueue; // @synthesize useApplicationSpecificQueue=_useApplicationSpecificQueue;
@property(nonatomic) long long shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property(nonatomic) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(retain, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
@property(nonatomic) _Bool hasAudioBackgroundMode; // @synthesize hasAudioBackgroundMode=_hasAudioBackgroundMode;
@property(retain, nonatomic) MPMediaPlaylist *geniusMixPlaylist; // @synthesize geniusMixPlaylist=_geniusMixPlaylist;
@property(retain, nonatomic) MPMediaItem *firstItem; // @synthesize firstItem=_firstItem;
@property(nonatomic) int backgroundPlaybackAccess; // @synthesize backgroundPlaybackAccess=_backgroundPlaybackAccess;
- (void).cxx_destruct;

@end

