//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface MPRemotePlaybackQueue : NSObject <NSSecureCoding>
{
    struct _MRSystemAppPlaybackQueue *_mediaRemotePlaybackQueue;
}

+ (_Bool)supportsSecureCoding;
+ (void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2;
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;
- (struct _MRSystemAppPlaybackQueue *)_mediaRemotePlaybackQueue;
- (_Bool)verifyWithError:(id *)arg1;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(nonatomic) long long replaceIntent;
@property(nonatomic) _Bool shouldOverrideManuallyCuratedQueue;
@property(copy, nonatomic) NSString *siriRecommendationIdentifier;
@property(readonly, copy, nonatomic) NSString *siriAssetInfo;
@property(nonatomic, getter=isRequestingImmediatePlayback) _Bool requestingImmediatePlayback;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;

@end

