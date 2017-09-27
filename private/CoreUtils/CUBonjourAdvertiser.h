//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CUBonjourAdvertiser : NSObject
{
    _Bool _activateCalled;
    _Bool _activated;
    struct BonjourAdvertiserPrivate *_bonjourAdvertiser;
    _Bool _invalidateCalled;
    struct LogCategory *_ucat;
    _Bool _updating;
    _Bool _advertiseFlagsChanged;
    _Bool _domainChanged;
    _Bool _interfaceIndexChanged;
    _Bool _interfaceNameChanged;
    _Bool _nameChanged;
    _Bool _portChanged;
    _Bool _serviceTypeChanged;
    _Bool _txtDictionaryChanged;
    unsigned int _interfaceIndex;
    int _port;
    unsigned long long _advertiseFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_domain;
    NSString *_interfaceName;
    NSString *_label;
    NSString *_name;
    NSString *_serviceType;
    NSDictionary *_txtDictionary;
}

@property(copy, nonatomic) NSDictionary *txtDictionary; // @synthesize txtDictionary=_txtDictionary;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) int port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(nonatomic) unsigned int interfaceIndex; // @synthesize interfaceIndex=_interfaceIndex;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned long long advertiseFlags; // @synthesize advertiseFlags=_advertiseFlags;
- (void).cxx_destruct;
- (void)_updateTXTDictionary;
- (void)_updateLocked:(_Bool)arg1;
- (void)_update:(_Bool)arg1;
- (void)performUpdate:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)_activateSafeInvokeBlock:(CDUnknownBlockType)arg1;
- (void)_activate;
- (void)activate;
- (id)description;
- (void)dealloc;
- (id)init;

@end

