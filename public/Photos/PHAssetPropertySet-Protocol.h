//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHObjectPropertySet.h"

@class NSString, PHAsset;

@protocol PHAssetPropertySet <PHObjectPropertySet>
+ (NSString *)propertySetName;
@property(readonly, nonatomic) __weak PHAsset *asset;
- (id)initWithFetchDictionary:(id <PHFetchDictionaryAccessing>)arg1 asset:(PHAsset *)arg2 prefetched:(_Bool)arg3;
@end

