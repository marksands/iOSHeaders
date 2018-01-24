//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSData, NSDictionary;

@interface HAPWACScannerIEUtility : HMFObject
{
    NSData *_ieData;
    const char *_iePtr;
    const char *_src;
    const char *_end;
    const char *_ptr;
    unsigned long long _len;
    _Bool _supportsHomeKit;
    _Bool _supportsPairSetupWAC;
    _Bool _supportsMFi;
    _Bool _supportsSTAOnly;
    _Bool _supportsAudioOnly;
    _Bool _supports2pt4GHzNetworks;
    _Bool _supports5GHzNetworks;
    _Bool _supportsTokenAuth;
    _Bool _pairedWithHomeKit;
}

@property(readonly, nonatomic) _Bool pairedWithHomeKit; // @synthesize pairedWithHomeKit=_pairedWithHomeKit;
@property(readonly, nonatomic) _Bool supportsTokenAuth; // @synthesize supportsTokenAuth=_supportsTokenAuth;
@property(readonly, nonatomic) _Bool supports5GHzNetworks; // @synthesize supports5GHzNetworks=_supports5GHzNetworks;
@property(readonly, nonatomic) _Bool supports2pt4GHzNetworks; // @synthesize supports2pt4GHzNetworks=_supports2pt4GHzNetworks;
@property(readonly, nonatomic) _Bool supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(readonly, nonatomic) _Bool supportsSTAOnly; // @synthesize supportsSTAOnly=_supportsSTAOnly;
@property(readonly, nonatomic) _Bool supportsMFi; // @synthesize supportsMFi=_supportsMFi;
@property(readonly, nonatomic) _Bool supportsPairSetupWAC; // @synthesize supportsPairSetupWAC=_supportsPairSetupWAC;
@property(readonly, nonatomic) _Bool supportsHomeKit; // @synthesize supportsHomeKit=_supportsHomeKit;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *setupDictionary;
- (void)dealloc;
- (id)initWithIEData:(id)arg1;

@end

