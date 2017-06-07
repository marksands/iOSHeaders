//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/NSCopying-Protocol.h>
#import <MapsSupport/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary;

@interface MSPVectorTimestamp : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_timestampValues;
}

+ (id)timestampAfterTimestamps:(id)arg1 increasingClientIdentifier:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)timestampIncreasingClientIdentifier:(id)arg1;
- (_Bool)_compare:(id)arg1 comparisonResult:(out long long *)arg2 isOppositeCheck:(_Bool)arg3;
- (_Bool)compare:(id)arg1 comparisonResult:(out long long *)arg2;
@property(readonly, nonatomic, getter=_timestampValues) NSDictionary *timestampValues;
- (id)_initWithTimestampValues:(id)arg1;
- (id)initInitialTimestampWithClientIdentifier:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
@property(readonly, nonatomic) NSData *serializedRepresentation;

@end

