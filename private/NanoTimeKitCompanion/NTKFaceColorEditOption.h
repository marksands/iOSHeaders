//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKFaceColorEditOption : NTKEnumeratedEditOption
{
}

+ (id)_localizedNameForValue:(unsigned long long)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)__orderedValues;
+ (id)__allOrderedColors;
+ (id)_orderedValues;
+ (id)_orderedValuesRestrictedByCurrentDeviceCollection;
+ (id)optionWithFaceColor:(unsigned long long)arg1;
- (id)_valueToFaceBundleStringDict;
- (_Bool)optionExistsInOSVersion:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned long long faceColor;
- (long long)swatchStyle;

@end

