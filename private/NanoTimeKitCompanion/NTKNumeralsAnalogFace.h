//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKNumeralsAnalogFace : NTKFace
{
}

+ (id)_defaultSelectedComplicationSlot;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (_Bool)_option:(id)arg1 migratesToValidOption:(id *)arg2 forCustomEditMode:(long long)arg3;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_customEditModes;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (id)_complicationSlotDescriptors;
- (void)_handleLocaleNumberSystemChange;
- (void)dealloc;
- (id)init;
- (id)_complicationMigrationPaths;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;

@end

