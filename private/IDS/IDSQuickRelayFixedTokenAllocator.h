//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface IDSQuickRelayFixedTokenAllocator : NSObject
{
    NSData *_relayIP;
    NSNumber *_relayPort;
    NSData *_relaySessionToken;
    NSData *_relaySessionKey;
    NSData *_relaySessionID;
    NSNumber *_relayCombinedSoftwareID;
    NSData *_appleID;
}

@property(copy) NSData *appleID; // @synthesize appleID=_appleID;
@property(copy) NSNumber *relayCombinedSoftwareID; // @synthesize relayCombinedSoftwareID=_relayCombinedSoftwareID;
@property(copy) NSData *relaySessionID; // @synthesize relaySessionID=_relaySessionID;
@property(copy) NSData *relaySessionToken; // @synthesize relaySessionToken=_relaySessionToken;
@property(copy) NSData *relaySessionKey; // @synthesize relaySessionKey=_relaySessionKey;
@property(copy) NSNumber *relayPort; // @synthesize relayPort=_relayPort;
@property(copy) NSData *relayIP; // @synthesize relayIP=_relayIP;
- (void).cxx_destruct;
- (id)_parseQuickRelayDefaults;
- (_Bool)_isSessionInfoValid:(id)arg1;
- (void)_setAllValuesFromDictionary:(id)arg1;
- (id)initWithDefaults;
- (id)initWithDictionary:(id)arg1;

@end

