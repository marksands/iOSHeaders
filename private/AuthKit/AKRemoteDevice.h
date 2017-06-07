//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface AKRemoteDevice : NSObject <NSSecureCoding>
{
    _Bool _trusted;
    NSString *_name;
    NSString *_serialNumber;
    NSString *_buildNumber;
    NSString *_operatingSystemName;
    NSString *_operatingSystemVersion;
    NSString *_model;
    NSDate *_lastUpdatedDate;
    NSString *_machineId;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *machineId; // @synthesize machineId=_machineId;
@property(readonly, copy, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(readonly, nonatomic) _Bool trusted; // @synthesize trusted=_trusted;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(readonly, copy, nonatomic) NSString *operatingSystemName; // @synthesize operatingSystemName=_operatingSystemName;
@property(readonly, copy, nonatomic) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1;

@end

