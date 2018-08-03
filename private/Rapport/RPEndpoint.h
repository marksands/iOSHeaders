//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CUBonjourDevice, NSString, SFDevice;

@interface RPEndpoint : NSObject <NSSecureCoding>
{
    SFDevice *_bleDevice;
    CUBonjourDevice *_bonjourDevice;
    NSString *_identifier;
    NSString *_idsDeviceIdentifier;
    NSString *_mediaRemoteIdentifier;
    NSString *_model;
    NSString *_name;
    unsigned long long _statusFlags;
    _Bool _present;
    int _proximity;
}

+ (_Bool)supportsSecureCoding;
+ (id)nullEndpoint;
@property(nonatomic) _Bool present; // @synthesize present=_present;
@property(retain, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
@property(retain, nonatomic) SFDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(nonatomic) unsigned long long statusFlags; // @synthesize statusFlags=_statusFlags;
@property(readonly, nonatomic) int proximity; // @synthesize proximity=_proximity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *mediaRemoteIdentifier; // @synthesize mediaRemoteIdentifier=_mediaRemoteIdentifier;
@property(copy, nonatomic) NSString *idsDeviceIdentifier; // @synthesize idsDeviceIdentifier=_idsDeviceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)removeSFDevice:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1;
- (_Bool)removeBonjourDevice:(id)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

