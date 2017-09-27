//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSNumber, NSString;

@interface HAPMetadataProperty : HMFObject
{
    NSString *_propertyType;
    NSNumber *_bitPosition;
    NSString *_propertyDescription;
}

+ (id)init:(id)arg1 withDictionary:(id)arg2;
@property(retain, nonatomic) NSString *propertyDescription; // @synthesize propertyDescription=_propertyDescription;
@property(retain, nonatomic) NSNumber *bitPosition; // @synthesize bitPosition=_bitPosition;
@property(retain, nonatomic) NSString *propertyType; // @synthesize propertyType=_propertyType;
- (void).cxx_destruct;
- (void)dump;
- (id)description;
- (id)generateDictionary;
- (id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3;

@end

