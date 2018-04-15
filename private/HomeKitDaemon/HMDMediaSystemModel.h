//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSArray, NSData, NSString;

@interface HMDMediaSystemModel : HMDBackingStoreModelObject
{
}

+ (id)modelWithMessage:(id)arg1 home:(id)arg2 changetype:(unsigned long long)arg3 outError:(id *)arg4;
+ (id)properties;
+ (id)schemaHashRoot;
- (id)dependentUUIDs;

// Remaining properties
@property(retain, nonatomic) NSArray *mediaSystemComponents; // @dynamic mediaSystemComponents;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSData *symptoms; // @dynamic symptoms;

@end

