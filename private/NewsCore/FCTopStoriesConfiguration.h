//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NTPBTopStoriesConfig;

@interface FCTopStoriesConfiguration : NSObject
{
    NTPBTopStoriesConfig *_pbConfig;
    _Bool _pinningEnabled;
    _Bool _promotingEnabled;
    NSString *_channelID;
    long long _maximumArticleCount;
    long long _cutoffTime;
    NSDictionary *_styleConfigurations;
    long long _storyTypeTimeout;
}

@property(readonly, nonatomic) long long storyTypeTimeout; // @synthesize storyTypeTimeout=_storyTypeTimeout;
@property(readonly, nonatomic) NSDictionary *styleConfigurations; // @synthesize styleConfigurations=_styleConfigurations;
@property(readonly, nonatomic) long long cutoffTime; // @synthesize cutoffTime=_cutoffTime;
@property(readonly, nonatomic) long long maximumArticleCount; // @synthesize maximumArticleCount=_maximumArticleCount;
@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(readonly, nonatomic, getter=isPromotingEnabled) _Bool promotingEnabled; // @synthesize promotingEnabled=_promotingEnabled;
@property(readonly, nonatomic, getter=isPinningEnabled) _Bool pinningEnabled; // @synthesize pinningEnabled=_pinningEnabled;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPBTopStoriesConfig:(id)arg1;
- (id)initWithDefaults;

@end

