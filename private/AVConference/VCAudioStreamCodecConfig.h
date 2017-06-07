//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCAudioStreamCodecConfig : NSObject
{
    long long _codecType;
    _Bool _dtxEnabled;
    int _preferredMode;
    NSMutableArray *_supportedModes;
    _Bool _octetAligned;
    _Bool _dtmf;
    unsigned int _networkPayload;
}

@property(nonatomic) unsigned int networkPayload; // @synthesize networkPayload=_networkPayload;
@property(nonatomic, getter=isDTMF) _Bool dtmf; // @synthesize dtmf=_dtmf;
@property(nonatomic, getter=isOctetAligned) _Bool octetAligned; // @synthesize octetAligned=_octetAligned;
@property(retain, nonatomic) NSArray *supportedModes; // @synthesize supportedModes=_supportedModes;
@property(nonatomic) int preferredMode; // @synthesize preferredMode=_preferredMode;
@property(nonatomic, getter=isDTXEnabled) _Bool dtxEnabled; // @synthesize dtxEnabled=_dtxEnabled;
@property(readonly, nonatomic) long long codecType; // @synthesize codecType=_codecType;
- (void)setupEVSModesWithClientModeMask:(unsigned int)arg1;
- (void)setupAMRWBModesWithClientModeMask:(unsigned int)arg1;
- (void)setupAMRModesWithClientModeMask:(unsigned int)arg1;
- (void)setPreferredModeWithClientMode:(int)arg1;
- (void)setupModesWithClientModeMask:(unsigned int)arg1;
@property(readonly, nonatomic) _Bool isComfortNoise;
- (void)dealloc;
- (id)initWithCodecType:(long long)arg1;

@end

