//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKMedicalIDEditorCell.h>

@class _HKEmergencyContact;

@interface HKMedicalIDEditorEmergencyContactCell : HKMedicalIDEditorCell
{
    _HKEmergencyContact *_contact;
}

@property(retain, nonatomic) _HKEmergencyContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)_labelTapped:(id)arg1;
- (id)formattedValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

