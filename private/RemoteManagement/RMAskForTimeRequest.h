//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSNumber, NSString, NSUUID;

@interface RMAskForTimeRequest : NSObject <NSSecureCoding>
{
    long long _usageType;
    NSString *_requestedResourceIdentifier;
    NSString *_resourceDisplayName;
    NSNumber *_timeRequested;
    NSDate *_timeStamp;
    NSUUID *_requestIdentifier;
    NSNumber *_requestingUserDSID;
    NSString *_requestingUserDisplayName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *requestingUserDisplayName; // @synthesize requestingUserDisplayName=_requestingUserDisplayName;
@property(retain, nonatomic) NSNumber *requestingUserDSID; // @synthesize requestingUserDSID=_requestingUserDSID;
@property(retain, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSNumber *timeRequested; // @synthesize timeRequested=_timeRequested;
@property(copy, nonatomic) NSString *resourceDisplayName; // @synthesize resourceDisplayName=_resourceDisplayName;
@property(readonly, copy, nonatomic) NSString *requestedResourceIdentifier; // @synthesize requestedResourceIdentifier=_requestedResourceIdentifier;
@property(readonly, nonatomic) long long usageType; // @synthesize usageType=_usageType;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *payload;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)initWithUsageType:(long long)arg1 requestedResourceIdentifier:(id)arg2;

@end

