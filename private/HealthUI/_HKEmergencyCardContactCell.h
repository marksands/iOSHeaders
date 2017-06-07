//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, _HKEmergencyContact;

@interface _HKEmergencyCardContactCell : UITableViewCell
{
    _HKEmergencyContact *_contact;
    UILabel *_relationshipLabel;
    UILabel *_nameLabel;
    UILabel *_phoneNumberLabel;
}

@property(retain, nonatomic) UILabel *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *relationshipLabel; // @synthesize relationshipLabel=_relationshipLabel;
@property(retain, nonatomic) _HKEmergencyContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)setContact:(id)arg1 showRelationship:(_Bool)arg2 showPhoneIcon:(_Bool)arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)setupConstraints;
- (void)setupViewHeirarchy;
- (void)_setupIndividualViews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

