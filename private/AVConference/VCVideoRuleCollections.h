//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollections : NSObject
{
    NSMutableDictionary *_rules;
    NSMutableArray *_supportedPayloads;
}

@property(readonly) NSDictionary *rules; // @synthesize rules=_rules;
@property(readonly) NSArray *supportedPayloads; // @synthesize supportedPayloads=_supportedPayloads;
- (_Bool)isPayloadSupported:(int)arg1;
- (void)addSupportedPayload:(int)arg1;
- (void)removeVideoRulesWithWidth:(int)arg1 height:(int)arg2 transportType:(unsigned char)arg3 encodingType:(unsigned char)arg4;
- (void)appendVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (id)supportedVideoRulesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (id)supportedVideoRulesSizesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (id)getVideoRulesForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3;
- (id)supportedVideoSizesForKey:(id)arg1;
- (id)supportedVideoRulesSyncForTransportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3;
- (id)filterRules:(id)arg1 byBitrateRule:(id)arg2;
- (void)dealloc;
- (id)init;

@end

