//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface WLKPlayActivityMetadata : NSObject
{
    NSString *_key;
    unsigned long long _contentType;
    NSString *_externalShowID;
    NSString *_canonicalID;
    NSString *_canonicalShowID;
    NSString *_internalLegID;
    NSString *_overrideChannelID;
    NSNumber *_isCurrentEpisode;
    NSNumber *_isShowClosed;
}

@property(readonly, copy, nonatomic) NSNumber *isShowClosed; // @synthesize isShowClosed=_isShowClosed;
@property(readonly, copy, nonatomic) NSNumber *isCurrentEpisode; // @synthesize isCurrentEpisode=_isCurrentEpisode;
@property(readonly, nonatomic) NSString *overrideChannelID; // @synthesize overrideChannelID=_overrideChannelID;
@property(readonly, nonatomic) NSString *internalLegID; // @synthesize internalLegID=_internalLegID;
@property(readonly, nonatomic) NSString *canonicalShowID; // @synthesize canonicalShowID=_canonicalShowID;
@property(readonly, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(readonly, nonatomic) NSString *externalShowID; // @synthesize externalShowID=_externalShowID;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 dictionary:(id)arg2;

@end

