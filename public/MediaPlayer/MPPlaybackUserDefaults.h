//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSObject<OS_dispatch_queue>;

@interface MPPlaybackUserDefaults : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _allowsHighQualityMusicStreamingOnCellular;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    int _musicEQPreset;
    long long _musicRepeatType;
    long long _musicShuffleType;
    _Bool _soundCheckEnabled;
    struct vector<int, std::__1::allocator<int>> _notifyTokens;
    NSObject<OS_dispatch_queue> *_userDefaultsMutationQueue;
}

+ (id)standardUserDefaults;
@property(readonly, nonatomic) int musicEQPreset; // @synthesize musicEQPreset=_musicEQPreset;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_mobileiPodPrefsDidChange;
- (void)_postRepeatShuffleTypeGlobalNotification;
- (long long)_calculateCurrentMusicShuffleType;
- (long long)_calculateCurrentMusicRepeatType;
- (int)_calculateCurrentMusicEQPreset;
- (void)_addNotificationObserver:(CDUnknownBlockType)arg1 forUserDefaultKey:(struct __CFString *)arg2;
@property(readonly, nonatomic) _Bool shouldUseNewQueueManagement;
@property(copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property(readonly, nonatomic) unsigned long long preferredVideosAssetQualityOnWifi;
@property(readonly, nonatomic) unsigned long long preferredVideosAssetQualityOnCellular;
@property(readonly, nonatomic) _Bool soundCheckEnabled;
@property(nonatomic) long long musicShuffleType;
@property(nonatomic) long long musicRepeatType;
@property(readonly, nonatomic) _Bool allowsHighQualityMusicStreamingOnCellular;
- (void)dealloc;
- (id)init;

@end

