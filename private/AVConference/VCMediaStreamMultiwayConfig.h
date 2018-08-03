//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaStreamMultiwayConfig : NSObject
{
    NSString *_sessionId;
    NSString *_participantId;
    unsigned long long _idsParticipantID;
    unsigned int _ssrc;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxMediaBitrate;
    float _maxPacketsPerSecond;
    unsigned short _idsStreamID;
    unsigned int _qualityIndex;
    unsigned int _maxIDSStreamIdCount;
    unsigned short _repairedStreamID;
    unsigned int _repairedMaxNetworkBitrate;
    _Bool _hasRepairedStreamID;
    _Bool _startOnDemand;
}

@property(nonatomic) _Bool startOnDemand; // @synthesize startOnDemand=_startOnDemand;
@property(nonatomic) _Bool hasRepairedStreamID; // @synthesize hasRepairedStreamID=_hasRepairedStreamID;
@property(nonatomic) unsigned int repairedMaxNetworkBitrate; // @synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate;
@property(nonatomic) unsigned short repairedStreamID; // @synthesize repairedStreamID=_repairedStreamID;
@property(nonatomic) unsigned int maxIDSStreamIdCount; // @synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount;
@property(nonatomic) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(nonatomic) unsigned short idsStreamID; // @synthesize idsStreamID=_idsStreamID;
@property(nonatomic) float maxPacketsPerSecond; // @synthesize maxPacketsPerSecond=_maxPacketsPerSecond;
@property(nonatomic) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(nonatomic) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;
@property(nonatomic) unsigned long long idsParticipantID; // @synthesize idsParticipantID=_idsParticipantID;
@property(retain, nonatomic) NSString *participantId; // @synthesize participantId=_participantId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) NSArray *streamIds;
- (void)dealloc;

@end

