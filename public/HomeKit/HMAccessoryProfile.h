//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMObjectMerge.h"

@class HMAccessory, NSArray, NSString, NSUUID, _HMAccessoryProfile;

@interface HMAccessoryProfile : NSObject <HMObjectMerge>
{
    _HMAccessoryProfile *_accessoryProfile;
}

@property(readonly, nonatomic) _HMAccessoryProfile *accessoryProfile; // @synthesize accessoryProfile=_accessoryProfile;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak HMAccessory *accessory;
@property(readonly, nonatomic) NSArray *services;
- (id)initWithAccessoryProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

