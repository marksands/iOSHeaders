//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircle/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface FAFamilyCloudKitProperties : NSObject <NSSecureCoding>
{
    NSDictionary *_dictionary;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *participantID;
@property(readonly, copy, nonatomic) NSString *zoneID;
@property(readonly, copy, nonatomic) NSString *shareID;
@property(readonly, copy, nonatomic) NSString *bundleID;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

