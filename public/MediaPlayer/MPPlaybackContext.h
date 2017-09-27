//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class MPAVItem, NSData, NSString;

@interface MPPlaybackContext : NSObject <NSCoding>
{
    MPAVItem *_playerCurrentItem;
    _Bool _shouldStartPlayback;
    _Bool _requireFinalTracklist;
    _Bool _shouldRestartPlayback;
    long long _startIndex;
    long long _shuffleType;
    long long _repeatType;
    NSString *_playActivityFeatureName;
    NSData *_playActivityRecommendationData;
    NSString *_siriReferenceIdentifier;
}

+ (Class)queueFeederClass;
@property(copy, nonatomic) NSString *siriReferenceIdentifier; // @synthesize siriReferenceIdentifier=_siriReferenceIdentifier;
@property(copy, nonatomic) NSData *playActivityRecommendationData; // @synthesize playActivityRecommendationData=_playActivityRecommendationData;
@property(copy, nonatomic) NSString *playActivityFeatureName; // @synthesize playActivityFeatureName=_playActivityFeatureName;
@property(nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(nonatomic) _Bool shouldRestartPlayback; // @synthesize shouldRestartPlayback=_shouldRestartPlayback;
@property(nonatomic) _Bool requireFinalTracklist; // @synthesize requireFinalTracklist=_requireFinalTracklist;
@property(nonatomic) _Bool shouldStartPlayback; // @synthesize shouldStartPlayback=_shouldStartPlayback;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(retain, nonatomic) MPAVItem *playerCurrentItem;

@end

