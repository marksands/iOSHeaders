//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSString;

@interface HAPMetadataTuple : HMFObject
{
    NSString *_characteristicType;
    NSString *_serviceType;
    NSString *_index;
}

@property(readonly, nonatomic) NSString *index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCharacteristicType:(id)arg1 serviceType:(id)arg2;

@end

