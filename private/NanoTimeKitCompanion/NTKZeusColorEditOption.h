//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKZeusColorEditOption : NTKEnumeratedEditOption
{
}

+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedEndingValuesRestrictedByDevice:(id)arg1;
+ (id)_orderedBeginningValuesRestrictedByDevice:(id)arg1;
+ (id)optionWithColor:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
- (_Bool)optionExistsInOSVersion:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned long long color;
- (long long)swatchStyle;

@end

