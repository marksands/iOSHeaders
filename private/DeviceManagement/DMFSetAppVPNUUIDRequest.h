//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFAppRequest.h>

@class NSString, NSUUID;

@interface DMFSetAppVPNUUIDRequest : DMFAppRequest
{
    NSString *_UUIDString;
    NSUUID *_UUID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(copy, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

