//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSDictionary;

@interface HAPWACScannerIEUtility : HMFObject
{
    NSData *_ieData;
    const char *_iePtr;
    const char *_src;
    const char *_end;
    const char *_ptr;
    unsigned long long _len;
    _Bool _supportsLegacyHomeKit;
    _Bool _supportsHomeKit;
    _Bool _supportsMFi;
    _Bool _supportsSTAOnly;
    _Bool _supportsAudioOnly;
    _Bool _supports2pt4GHzNetworks;
    _Bool _supports5GHzNetworks;
}

@property(readonly, nonatomic) _Bool supports5GHzNetworks; // @synthesize supports5GHzNetworks=_supports5GHzNetworks;
@property(readonly, nonatomic) _Bool supports2pt4GHzNetworks; // @synthesize supports2pt4GHzNetworks=_supports2pt4GHzNetworks;
@property(readonly, nonatomic) _Bool supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(readonly, nonatomic) _Bool supportsSTAOnly; // @synthesize supportsSTAOnly=_supportsSTAOnly;
@property(readonly, nonatomic) _Bool supportsMFi; // @synthesize supportsMFi=_supportsMFi;
@property(readonly, nonatomic) _Bool supportsHomeKit; // @synthesize supportsHomeKit=_supportsHomeKit;
@property(readonly, nonatomic) _Bool supportsLegacyHomeKit; // @synthesize supportsLegacyHomeKit=_supportsLegacyHomeKit;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *setupDictionary;
- (void)dealloc;
- (id)initWithIEData:(id)arg1;

@end

