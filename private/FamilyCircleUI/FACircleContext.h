//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString;

@interface FACircleContext : NSObject <NSCoding, NSSecureCoding>
{
    NSString *_eventType;
    NSString *_clientName;
    NSString *_clientBundleID;
    NSDictionary *_additionalParameters;
}

+ (_Bool)supportsSecureCoding;
+ (id)contextWithData:(id)arg1;
@property(copy, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property(copy, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(id)arg1;
- (id)init;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;

@end
