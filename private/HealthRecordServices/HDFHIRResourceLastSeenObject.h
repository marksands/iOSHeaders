//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HKFHIRIdentifier, NSDate, NSURL;

@interface HDFHIRResourceLastSeenObject : NSObject <NSCopying, NSSecureCoding>
{
    HKFHIRIdentifier *_resourceIdentifier;
    NSURL *_sourceURL;
    NSDate *_lastSeenDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *lastSeenDate; // @synthesize lastSeenDate=_lastSeenDate;
@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, copy, nonatomic) HKFHIRIdentifier *resourceIdentifier; // @synthesize resourceIdentifier=_resourceIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResourceIdentifier:(id)arg1 sourceURL:(id)arg2 lastSeenDate:(id)arg3;

@end

