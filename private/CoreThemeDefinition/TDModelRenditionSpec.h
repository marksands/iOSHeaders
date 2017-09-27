//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSSet, TDModelAsset;

@interface TDModelRenditionSpec : TDRenditionSpec
{
}

+ (id)fetchRequest;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)processSubModelObjectsInDocument:(id)arg1;
- (void)processMesh:(id)arg1 withParent:(id)arg2 parentKeySpec:(id)arg3 inDocument:(id)arg4;

// Remaining properties
@property(retain, nonatomic) TDModelAsset *asset; // @dynamic asset;
@property(retain, nonatomic) NSSet *childRenditions; // @dynamic childRenditions;

@end

