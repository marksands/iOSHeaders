//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface AKDeviceListRequestContext : NSObject <NSSecureCoding>
{
    _Bool _includeUntrustedDevices;
    NSString *_altDSID;
    NSArray *_services;
    NSArray *_operatingSystems;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *operatingSystems; // @synthesize operatingSystems=_operatingSystems;
@property(copy, nonatomic) NSArray *services; // @synthesize services=_services;
@property(nonatomic) _Bool includeUntrustedDevices; // @synthesize includeUntrustedDevices=_includeUntrustedDevices;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

